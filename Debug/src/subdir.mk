################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/GController.cpp \
../src/GMap.cpp \
../src/GObject.cpp \
../src/GPlayer.cpp \
../src/Main.cpp 

OBJS += \
./src/GController.o \
./src/GMap.o \
./src/GObject.o \
./src/GPlayer.o \
./src/Main.o 

CPP_DEPS += \
./src/GController.d \
./src/GMap.d \
./src/GObject.d \
./src/GPlayer.d \
./src/Main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


