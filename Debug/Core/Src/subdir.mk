################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/lexilight.c \
../Core/Src/main.c \
../Core/Src/stm32f4xx_hal_msp.c \
../Core/Src/stm32f4xx_hal_timebase_tim.c \
../Core/Src/stm32f4xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f4xx.c \
../Core/Src/touch_screen_ft6236.c 

OBJS += \
./Core/Src/lexilight.o \
./Core/Src/main.o \
./Core/Src/stm32f4xx_hal_msp.o \
./Core/Src/stm32f4xx_hal_timebase_tim.o \
./Core/Src/stm32f4xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f4xx.o \
./Core/Src/touch_screen_ft6236.o 

C_DEPS += \
./Core/Src/lexilight.d \
./Core/Src/main.d \
./Core/Src/stm32f4xx_hal_msp.d \
./Core/Src/stm32f4xx_hal_timebase_tim.d \
./Core/Src/stm32f4xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f4xx.d \
./Core/Src/touch_screen_ft6236.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/lexilight.o: ../Core/Src/lexilight.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../TouchGFX/gui/include -I../TouchGFX/generated/fonts/include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../TouchGFX/generated/texts/include -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/App -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/lexilight.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/main.o: ../Core/Src/main.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../TouchGFX/gui/include -I../TouchGFX/generated/fonts/include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../TouchGFX/generated/texts/include -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/App -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/stm32f4xx_hal_msp.o: ../Core/Src/stm32f4xx_hal_msp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../TouchGFX/gui/include -I../TouchGFX/generated/fonts/include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../TouchGFX/generated/texts/include -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/App -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/stm32f4xx_hal_msp.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/stm32f4xx_hal_timebase_tim.o: ../Core/Src/stm32f4xx_hal_timebase_tim.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../TouchGFX/gui/include -I../TouchGFX/generated/fonts/include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../TouchGFX/generated/texts/include -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/App -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/stm32f4xx_hal_timebase_tim.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/stm32f4xx_it.o: ../Core/Src/stm32f4xx_it.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../TouchGFX/gui/include -I../TouchGFX/generated/fonts/include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../TouchGFX/generated/texts/include -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/App -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/stm32f4xx_it.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/syscalls.o: ../Core/Src/syscalls.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../TouchGFX/gui/include -I../TouchGFX/generated/fonts/include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../TouchGFX/generated/texts/include -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/App -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/syscalls.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/sysmem.o: ../Core/Src/sysmem.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../TouchGFX/gui/include -I../TouchGFX/generated/fonts/include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../TouchGFX/generated/texts/include -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/App -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/sysmem.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/system_stm32f4xx.o: ../Core/Src/system_stm32f4xx.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../TouchGFX/gui/include -I../TouchGFX/generated/fonts/include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../TouchGFX/generated/texts/include -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/App -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/system_stm32f4xx.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/touch_screen_ft6236.o: ../Core/Src/touch_screen_ft6236.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../TouchGFX/gui/include -I../TouchGFX/generated/fonts/include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../TouchGFX/generated/texts/include -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/App -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/touch_screen_ft6236.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
