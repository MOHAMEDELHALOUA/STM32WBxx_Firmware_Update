#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "mqtt/async_client.h"

const std::string SERVER_ADDRESS = "tcp://localhost:1883";
const std::string CLIENT_ID = "OTA_Sender";
const std::string TOPIC = "ota/firmware";

class OTA_Sender {
private:
    mqtt::async_client client;
    
public:
    OTA_Sender() : client(SERVER_ADDRESS, CLIENT_ID) {}
    
    bool connect() {
        try {
            mqtt::connect_options connOpts;
            connOpts.set_clean_session(true);
            
            client.connect(connOpts)->wait();
            return true;
        }
        catch (const mqtt::exception& exc) {
            std::cerr << "Error: " << exc.what() << std::endl;
            return false;
        }
    }
    
    bool send_firmware(const std::string& filename) {
        try {
            // Read firmware file
            std::ifstream file(filename, std::ios::binary);
            if (!file) {
                std::cerr << "Cannot open file: " << filename << std::endl;
                return false;
            }
            
            std::vector<uint8_t> firmware_data(
                (std::istreambuf_iterator<char>(file)),
                std::istreambuf_iterator<char>()
            );
            
            // Create MQTT message
            auto pubmsg = mqtt::make_message(
                TOPIC, 
                firmware_data.data(), 
                firmware_data.size()
            );
            
            // Send message
            client.publish(pubmsg)->wait();
            std::cout << "Firmware sent successfully!" << std::endl;
            return true;
        }
        catch (const mqtt::exception& exc) {
            std::cerr << "Error sending firmware: " << exc.what() << std::endl;
            return false;
        }
    }
    
    void disconnect() {
        client.disconnect()->wait();
    }
};

int main() {
    OTA_Sender sender;
    
    if (sender.connect()) {
        sender.send_firmware("nucleo_wb55_application.b64");
        sender.disconnect();
    }
    
    return 0;
}
