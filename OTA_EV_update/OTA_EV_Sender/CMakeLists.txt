cmake_minimum_required(VERSION 3.23)

project(OTA_EV_Sender2)

add_executable(OTA_EV_Send OTA_EV_Sender2.cpp)

target_link_libraries(OTA_EV_Send paho-mqttpp3 paho-mqtt3as)
