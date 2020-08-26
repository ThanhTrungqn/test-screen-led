################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessPresenter.cpp \
../TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessView.cpp 

OBJS += \
./TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessPresenter.o \
./TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessView.o 

CPP_DEPS += \
./TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessPresenter.d \
./TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessView.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessPresenter.o: ../TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessPresenter.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../TouchGFX/gui/include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../TouchGFX/generated/fonts/include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../TouchGFX/generated/texts/include -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/App -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessPresenter.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessView.o: ../TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessView.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../TouchGFX/gui/include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../TouchGFX/generated/fonts/include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../TouchGFX/generated/texts/include -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/App -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"TouchGFX/gui/src/screencontrolsliderbrightness_screen/ScreenControlSliderBrightnessView.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

