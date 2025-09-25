################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32WBxx_HAL_Driver/Src/subdir.mk
-include Drivers/BSP/P-NUCLEO-WB55.Nucleo/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := NUCLEO_W55RG_CUSTOM_BOOTLOADER
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
NUCLEO_W55RG_CUSTOM_BOOTLOADER.elf \

MAP_FILES += \
NUCLEO_W55RG_CUSTOM_BOOTLOADER.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
NUCLEO_W55RG_CUSTOM_BOOTLOADER.list \

OBJCOPY_HEX += \
NUCLEO_W55RG_CUSTOM_BOOTLOADER.hex \

OBJCOPY_BIN += \
NUCLEO_W55RG_CUSTOM_BOOTLOADER.bin \


# All Target
all: main-build

# Main-build Target
main-build: NUCLEO_W55RG_CUSTOM_BOOTLOADER.elf secondary-outputs

# Tool invocations
NUCLEO_W55RG_CUSTOM_BOOTLOADER.elf NUCLEO_W55RG_CUSTOM_BOOTLOADER.map: $(OBJS) $(USER_OBJS) /home/elhaloua/STM32CubeIDE/workspace_1.19.0/NUCLEO_W55RG_CUSTOM_BOOTLOADER/STM32WB55RGVX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "NUCLEO_W55RG_CUSTOM_BOOTLOADER.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/home/elhaloua/STM32CubeIDE/workspace_1.19.0/NUCLEO_W55RG_CUSTOM_BOOTLOADER/STM32WB55RGVX_FLASH.ld" --specs=nosys.specs -Wl,-Map="NUCLEO_W55RG_CUSTOM_BOOTLOADER.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

NUCLEO_W55RG_CUSTOM_BOOTLOADER.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "NUCLEO_W55RG_CUSTOM_BOOTLOADER.list"
	@echo 'Finished building: $@'
	@echo ' '

NUCLEO_W55RG_CUSTOM_BOOTLOADER.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "NUCLEO_W55RG_CUSTOM_BOOTLOADER.hex"
	@echo 'Finished building: $@'
	@echo ' '

NUCLEO_W55RG_CUSTOM_BOOTLOADER.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "NUCLEO_W55RG_CUSTOM_BOOTLOADER.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) NUCLEO_W55RG_CUSTOM_BOOTLOADER.bin NUCLEO_W55RG_CUSTOM_BOOTLOADER.elf NUCLEO_W55RG_CUSTOM_BOOTLOADER.hex NUCLEO_W55RG_CUSTOM_BOOTLOADER.list NUCLEO_W55RG_CUSTOM_BOOTLOADER.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
