################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Sources/Botao.cpp \
../Sources/Comparador.cpp \
../Sources/Contador.cpp \
../Sources/ControlService.cpp \
../Sources/CountService.cpp \
../Sources/FlipFlop.cpp \
../Sources/Led.cpp \
../Sources/OnOffService.cpp \
../Sources/SortService.cpp \
../Sources/Temporizador.cpp \
../Sources/TurnOffLedService.cpp \
../Sources/delay.cpp \
../Sources/mkl_GPIO.cpp \
../Sources/mkl_GPIOPort.cpp \
../Sources/mkl_Systick.cpp \
../Sources/mkl_SystickPeriodicInterrupt.cpp 

OBJS += \
./Sources/Botao.o \
./Sources/Comparador.o \
./Sources/Contador.o \
./Sources/ControlService.o \
./Sources/CountService.o \
./Sources/FlipFlop.o \
./Sources/Led.o \
./Sources/OnOffService.o \
./Sources/SortService.o \
./Sources/Temporizador.o \
./Sources/TurnOffLedService.o \
./Sources/delay.o \
./Sources/mkl_GPIO.o \
./Sources/mkl_GPIOPort.o \
./Sources/mkl_Systick.o \
./Sources/mkl_SystickPeriodicInterrupt.o 

CPP_DEPS += \
./Sources/Botao.d \
./Sources/Comparador.d \
./Sources/Contador.d \
./Sources/ControlService.d \
./Sources/CountService.d \
./Sources/FlipFlop.d \
./Sources/Led.d \
./Sources/OnOffService.d \
./Sources/SortService.d \
./Sources/Temporizador.d \
./Sources/TurnOffLedService.d \
./Sources/delay.d \
./Sources/mkl_GPIO.d \
./Sources/mkl_GPIOPort.d \
./Sources/mkl_Systick.d \
./Sources/mkl_SystickPeriodicInterrupt.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C++ Compiler'
	arm-none-eabi-g++ -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"../Sources" -I"../Includes" -std=gnu++11 -fabi-version=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


