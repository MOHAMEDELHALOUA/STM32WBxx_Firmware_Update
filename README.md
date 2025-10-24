# STM32WBxx_Firmware_Update
this project aim to create a cutom Bootloader (BL) and application on the stm32wb55RG MCU, and use the XMODEM or other protocol to update the application via the cutom bootloader, and maybe updating also the BL.

![STM32WB55RG-Overview](https://community.st.com/t5/image/serverpage/image-id/91413iD068101268E74C92/image-size/large/is-moderation-mode/true?v=v2&px=999)

### Program execution with custom bootloader and application before firmware update implementation
![Update Progress](https://github.com/MOHAMEDELHALOUA/STM32WBxx_Firmware_Update/blob/main/Resulats/App_BL_no_firmware_update.png)

### Program execution after firmware update of the Application via the host pc and the custom bootloader on stm32wb55rg
![After Firmware update](https://github.com/MOHAMEDELHALOUA/STM32WBxx_Firmware_Update/blob/main/Resulats/App_v2_0_running_after_update.png)

### Resources
*[NUCLEO-WB55RG](https://os.mbed.com/platforms/ST-Nucleo-WB55RG/)
*[User manual stm32wb55xx](https://cdn.sparkfun.com/assets/1/6/c/b/b/STM32WB55xx_Reference_Manual.pdf)
*[PM0075 Programming manual](https://www.st.com/resource/en/programming_manual/pm0075-stm32f10xxx-flash-memory-microcontrollers-stmicroelectronics.pdf)
*[Flash Programming in STM32 using HAL (Erase, Write & Read)](https://controllerstech.com/flash-programming-in-stm32/)
*[FLASH Programming in STM32 Microcontrollers](https://aticleworld.com/flash-programming-in-stm32/)
