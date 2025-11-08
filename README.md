this project aim to create a cutom Bootloader (BL) and application on the stm32wb55RG MCU, and use the XMODEM or other protocol to update the application via the cutom bootloader, via UART without passing by ST-Link.

![STM32WB55RG-Overview](https://community.st.com/t5/image/serverpage/image-id/91413iD068101268E74C92/image-size/large/is-moderation-mode/true?v=v2&px=999)

### Memory mapping
<img width="800" height="900" alt="Memory_mapping" src="https://github.com/user-attachments/assets/c609c9f7-57f0-45f8-96c5-c49039137812" />

### Program execution with custom bootloader and application before firmware update implementation
![Update Progress](https://github.com/MOHAMEDELHALOUA/STM32WBxx_Firmware_Update/blob/main/Resulats/App_BL_no_firmware_update.png)

### Transfer the update (binary file) to the stm32 via uart, and recieve it by the custom bootloader
<img width="1366" height="272" alt="Screenshot From 2025-11-07 15-12-12" src="https://github.com/user-attachments/assets/241bec91-a0fb-4ba6-be10-755b199f4f0a" />

### Program execution after firmware update of the Application via the host pc and the custom bootloader on stm32wb55rg
![After Firmware update](https://github.com/MOHAMEDELHALOUA/STM32WBxx_Firmware_Update/blob/main/Resulats/App_v2_0_running_after_update.png)

### General workflow with OTA support

<img width="2104" height="1008" alt="UART_update_workflow2" src="https://github.com/user-attachments/assets/7e935f92-a14c-44e6-9741-a9870802150a" />

### Setup

![img3](https://github.com/user-attachments/assets/0c878237-b360-4391-b144-414d84a0b207)

### Resources
*[NUCLEO-WB55RG](https://os.mbed.com/platforms/ST-Nucleo-WB55RG/)
*[User manual stm32wb55xx](https://cdn.sparkfun.com/assets/1/6/c/b/b/STM32WB55xx_Reference_Manual.pdf)
*[PM0075 Programming manual](https://www.st.com/resource/en/programming_manual/pm0075-stm32f10xxx-flash-memory-microcontrollers-stmicroelectronics.pdf)
*[Flash Programming in STM32 using HAL (Erase, Write & Read)](https://controllerstech.com/flash-programming-in-stm32/)
*[FLASH Programming in STM32 Microcontrollers](https://aticleworld.com/flash-programming-in-stm32/)
