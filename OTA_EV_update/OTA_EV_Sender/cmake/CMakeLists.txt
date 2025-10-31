cmake_minimum_required(VERSION 3.10)
project(OTA_EV_Sender)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Find the Paho MQTT C++ package
find_package(PahoMqttCpp REQUIRED)

# Add your executable
add_executable(OTA_EV_Sender OTA_EV_Sender.cpp)

# Link with Paho MQTT C++ library
target_link_libraries(OTA_EV_Sender PahoMqttCpp::paho-mqttpp3)

# Include directories (if needed)
target_include_directories(OTA_EV_Sender PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/paho.mqtt.cpp/src
)
