################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include TouchGFX/target/generated/subdir.mk
-include TouchGFX/target/subdir.mk
-include TouchGFX/gui/src/screen1_screen/subdir.mk
-include TouchGFX/gui/src/model/subdir.mk
-include TouchGFX/gui/src/common/subdir.mk
-include TouchGFX/generated/texts/src/subdir.mk
-include TouchGFX/generated/images/src/__designer/subdir.mk
-include TouchGFX/generated/images/src/subdir.mk
-include TouchGFX/generated/gui_generated/src/screen1_screen/subdir.mk
-include TouchGFX/generated/gui_generated/src/common/subdir.mk
-include TouchGFX/generated/fonts/src/subdir.mk
-include TouchGFX/App/subdir.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
test_lcd_F429_VIT.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
test_lcd_F429_VIT.list \

OBJCOPY_HEX += \
test_lcd_F429_VIT.hex \

OBJCOPY_BIN += \
test_lcd_F429_VIT.bin \


# All Target
all: test_lcd_F429_VIT.elf secondary-outputs

# Tool invocations
test_lcd_F429_VIT.elf: $(OBJS) $(USER_OBJS) C:\Users\tnguyen\STM32CubeIDE\workspace_1.1.0\test_lcd_F429_VIT\STM32F429VITX_FLASH.ld
	arm-none-eabi-g++ -o "test_lcd_F429_VIT.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\tnguyen\STM32CubeIDE\workspace_1.1.0\test_lcd_F429_VIT\STM32F429VITX_FLASH.ld" --specs=nosys.specs -Wl,-Map="test_lcd_F429_VIT.map" -Wl,--gc-sections -static -L"C:\Users\tnguyen\STM32CubeIDE\workspace_1.1.0\test_lcd_F429_VIT\Middlewares\ST\touchgfx\lib\core\cortex_m4f\gcc" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -lstdc++ -lsupc++ -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

test_lcd_F429_VIT.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "test_lcd_F429_VIT.list"
	@echo 'Finished building: $@'
	@echo ' '

test_lcd_F429_VIT.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "test_lcd_F429_VIT.hex"
	@echo 'Finished building: $@'
	@echo ' '

test_lcd_F429_VIT.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "test_lcd_F429_VIT.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
