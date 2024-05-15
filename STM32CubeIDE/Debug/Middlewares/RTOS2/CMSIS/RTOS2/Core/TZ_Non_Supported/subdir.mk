################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c \
C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/croutine.c \
C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/event_groups.c \
C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/list.c \
C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/port.c \
C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/portasm.c \
C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/queue.c \
C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/stream_buffer.c \
C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/tasks.c \
C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/timers.c 

C_DEPS += \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/cmsis_os2.d \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/croutine.d \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/event_groups.d \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/list.d \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/port.d \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/portasm.d \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/queue.d \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/stream_buffer.d \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/tasks.d \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/timers.d 

OBJS += \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/cmsis_os2.o \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/croutine.o \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/event_groups.o \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/list.o \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/port.o \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/portasm.o \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/queue.o \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/stream_buffer.o \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/tasks.o \
./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/timers.o 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/cmsis_os2.o: C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/cmsis_os2.c Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32U599xx -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/mx25lm51245g -I../../Middlewares/Third_Party/FreeRTOS/Source/include/ -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/ -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/ -I../../Middlewares/Third_Party/CMSIS/RTOS2/Include/ -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -I../../Middlewares/ST/touchgfx_components/gpu2d/NemaGFX/include -I../../Middlewares/ST/touchgfx_components/gpu2d/TouchGFXNema/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/croutine.o: C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/croutine.c Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32U599xx -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/mx25lm51245g -I../../Middlewares/Third_Party/FreeRTOS/Source/include/ -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/ -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/ -I../../Middlewares/Third_Party/CMSIS/RTOS2/Include/ -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -I../../Middlewares/ST/touchgfx_components/gpu2d/NemaGFX/include -I../../Middlewares/ST/touchgfx_components/gpu2d/TouchGFXNema/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/event_groups.o: C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/event_groups.c Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32U599xx -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/mx25lm51245g -I../../Middlewares/Third_Party/FreeRTOS/Source/include/ -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/ -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/ -I../../Middlewares/Third_Party/CMSIS/RTOS2/Include/ -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -I../../Middlewares/ST/touchgfx_components/gpu2d/NemaGFX/include -I../../Middlewares/ST/touchgfx_components/gpu2d/TouchGFXNema/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/list.o: C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/list.c Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32U599xx -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/mx25lm51245g -I../../Middlewares/Third_Party/FreeRTOS/Source/include/ -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/ -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/ -I../../Middlewares/Third_Party/CMSIS/RTOS2/Include/ -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -I../../Middlewares/ST/touchgfx_components/gpu2d/NemaGFX/include -I../../Middlewares/ST/touchgfx_components/gpu2d/TouchGFXNema/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/port.o: C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/port.c Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32U599xx -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/mx25lm51245g -I../../Middlewares/Third_Party/FreeRTOS/Source/include/ -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/ -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/ -I../../Middlewares/Third_Party/CMSIS/RTOS2/Include/ -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -I../../Middlewares/ST/touchgfx_components/gpu2d/NemaGFX/include -I../../Middlewares/ST/touchgfx_components/gpu2d/TouchGFXNema/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/portasm.o: C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/portasm.c Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32U599xx -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/mx25lm51245g -I../../Middlewares/Third_Party/FreeRTOS/Source/include/ -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/ -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/ -I../../Middlewares/Third_Party/CMSIS/RTOS2/Include/ -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -I../../Middlewares/ST/touchgfx_components/gpu2d/NemaGFX/include -I../../Middlewares/ST/touchgfx_components/gpu2d/TouchGFXNema/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/queue.o: C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/queue.c Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32U599xx -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/mx25lm51245g -I../../Middlewares/Third_Party/FreeRTOS/Source/include/ -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/ -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/ -I../../Middlewares/Third_Party/CMSIS/RTOS2/Include/ -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -I../../Middlewares/ST/touchgfx_components/gpu2d/NemaGFX/include -I../../Middlewares/ST/touchgfx_components/gpu2d/TouchGFXNema/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/stream_buffer.o: C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/stream_buffer.c Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32U599xx -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/mx25lm51245g -I../../Middlewares/Third_Party/FreeRTOS/Source/include/ -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/ -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/ -I../../Middlewares/Third_Party/CMSIS/RTOS2/Include/ -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -I../../Middlewares/ST/touchgfx_components/gpu2d/NemaGFX/include -I../../Middlewares/ST/touchgfx_components/gpu2d/TouchGFXNema/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/tasks.o: C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/tasks.c Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32U599xx -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/mx25lm51245g -I../../Middlewares/Third_Party/FreeRTOS/Source/include/ -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/ -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/ -I../../Middlewares/Third_Party/CMSIS/RTOS2/Include/ -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -I../../Middlewares/ST/touchgfx_components/gpu2d/NemaGFX/include -I../../Middlewares/ST/touchgfx_components/gpu2d/TouchGFXNema/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/timers.o: C:/TouchGFXProjects/MyApplication/Middlewares/Third_Party/FreeRTOS/Source/timers.c Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32U599xx -c -I../../Core/Inc -I../../TouchGFX/App -I../../TouchGFX/target/generated -I../../TouchGFX/target -I../../Drivers/STM32U5xx_HAL_Driver/Inc -I../../Drivers/STM32U5xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32U5xx/Include -I../../Drivers/CMSIS/Include -I../../Drivers/BSP/Components/mx25lm51245g -I../../Middlewares/Third_Party/FreeRTOS/Source/include/ -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM33_NTZ/non_secure/ -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2/ -I../../Middlewares/Third_Party/CMSIS/RTOS2/Include/ -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -I../../Middlewares/ST/touchgfx_components/gpu2d/NemaGFX/include -I../../Middlewares/ST/touchgfx_components/gpu2d/TouchGFXNema/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middlewares-2f-RTOS2-2f-CMSIS-2f-RTOS2-2f-Core-2f-TZ_Non_Supported

clean-Middlewares-2f-RTOS2-2f-CMSIS-2f-RTOS2-2f-Core-2f-TZ_Non_Supported:
	-$(RM) ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/cmsis_os2.cyclo ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/cmsis_os2.d ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/cmsis_os2.o ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/cmsis_os2.su ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/croutine.cyclo ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/croutine.d ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/croutine.o ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/croutine.su ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/event_groups.cyclo ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/event_groups.d ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/event_groups.o ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/event_groups.su ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/list.cyclo ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/list.d ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/list.o ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/list.su ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/port.cyclo ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/port.d ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/port.o ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/port.su ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/portasm.cyclo ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/portasm.d ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/portasm.o ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/portasm.su ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/queue.cyclo ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/queue.d ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/queue.o ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/queue.su ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/stream_buffer.cyclo ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/stream_buffer.d ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/stream_buffer.o ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/stream_buffer.su ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/tasks.cyclo ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/tasks.d ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/tasks.o ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/tasks.su ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/timers.cyclo ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/timers.d ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/timers.o ./Middlewares/RTOS2/CMSIS/RTOS2/Core/TZ_Non_Supported/timers.su

.PHONY: clean-Middlewares-2f-RTOS2-2f-CMSIS-2f-RTOS2-2f-Core-2f-TZ_Non_Supported

