################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Estudios.cpp \
../src/GestorAnoNacimiento.cpp \
../src/GestorBarrios.cpp \
../src/GestorEstudios.cpp \
../src/GestorLugarNacimiento.cpp \
../src/GestorNacionalidades.cpp \
../src/GestorVia.cpp \
../src/LugarNacimiento.cpp \
../src/Nacionalidades.cpp \
../src/Padron.cpp \
../src/ProyectoEdi.cpp \
../src/Utils.cpp \
../src/anoNacimiento.cpp \
../src/barrio.cpp \
../src/timer.cpp \
../src/via.cpp 

OBJS += \
./src/Estudios.o \
./src/GestorAnoNacimiento.o \
./src/GestorBarrios.o \
./src/GestorEstudios.o \
./src/GestorLugarNacimiento.o \
./src/GestorNacionalidades.o \
./src/GestorVia.o \
./src/LugarNacimiento.o \
./src/Nacionalidades.o \
./src/Padron.o \
./src/ProyectoEdi.o \
./src/Utils.o \
./src/anoNacimiento.o \
./src/barrio.o \
./src/timer.o \
./src/via.o 

CPP_DEPS += \
./src/Estudios.d \
./src/GestorAnoNacimiento.d \
./src/GestorBarrios.d \
./src/GestorEstudios.d \
./src/GestorLugarNacimiento.d \
./src/GestorNacionalidades.d \
./src/GestorVia.d \
./src/LugarNacimiento.d \
./src/Nacionalidades.d \
./src/Padron.d \
./src/ProyectoEdi.d \
./src/Utils.d \
./src/anoNacimiento.d \
./src/barrio.d \
./src/timer.d \
./src/via.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


