#include "mqtt/async_client.h"
#include <string>
#include <iostream>

const std::string SERVER_ADDRESS("tcp://localhost:1883");
const std::string CLIENT_ID("OTA_Sender");
const std::string TOPIC("ota/firmware");

int main() {
    mqtt::async_client client(SERVER_ADDRESS, CLIENT_ID);

    mqtt::connect_options connOpts;
    connOpts.set_keep_alive_interval(20);
    connOpts.set_clean_session(true);

    try {
        // Connect to EMQX broker
        client.connect(connOpts)->wait();
        std::cout << "Connected to AWS Red Hot EC2 broker" << std::endl;

        // Publish a message
        std::string payload = "Hello, AWS Red Hot EC2 from C++!";
        mqtt::message_ptr pubmsg = mqtt::make_message(TOPIC, payload, 1, false);
        client.publish(pubmsg)->wait();
        std::cout << "Message published: " << payload << std::endl;

        // Disconnect
        client.disconnect()->wait();
        std::cout << "Disconnected" << std::endl;
    } catch (const mqtt::exception& exc) {
        std::cerr << "Error: " << exc.what() << std::endl;
        return 1;
    }

    return 0;
}

