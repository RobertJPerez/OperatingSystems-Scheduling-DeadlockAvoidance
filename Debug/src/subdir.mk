################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/OS\ Project.cpp 

OBJS += \
./src/OS\ Project.o 

CPP_DEPS += \
./src/OS\ Project.d 


# Each subdirectory must supply rules for building sources it contributes
src/OS\ Project.o: ../src/OS\ Project.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/OS Project.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


