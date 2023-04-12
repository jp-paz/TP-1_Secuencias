################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Ejercicio-1.c \
../Ejercicio-10.c \
../Ejercicio-11.c \
../Ejercicio-12.c \
../Ejercicio-2.c \
../Ejercicio-3.c \
../Ejercicio-4.c \
../Ejercicio-5.c \
../Ejercicio-6.c \
../Ejercicio-7.c \
../Ejercicio-8.c \
../Ejercicio-9.c 

C_DEPS += \
./Ejercicio-1.d \
./Ejercicio-10.d \
./Ejercicio-11.d \
./Ejercicio-12.d \
./Ejercicio-2.d \
./Ejercicio-3.d \
./Ejercicio-4.d \
./Ejercicio-5.d \
./Ejercicio-6.d \
./Ejercicio-7.d \
./Ejercicio-8.d \
./Ejercicio-9.d 

OBJS += \
./Ejercicio-1.o \
./Ejercicio-10.o \
./Ejercicio-11.o \
./Ejercicio-12.o \
./Ejercicio-2.o \
./Ejercicio-3.o \
./Ejercicio-4.o \
./Ejercicio-5.o \
./Ejercicio-6.o \
./Ejercicio-7.o \
./Ejercicio-8.o \
./Ejercicio-9.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Ejercicio-1.d ./Ejercicio-1.o ./Ejercicio-10.d ./Ejercicio-10.o ./Ejercicio-11.d ./Ejercicio-11.o ./Ejercicio-12.d ./Ejercicio-12.o ./Ejercicio-2.d ./Ejercicio-2.o ./Ejercicio-3.d ./Ejercicio-3.o ./Ejercicio-4.d ./Ejercicio-4.o ./Ejercicio-5.d ./Ejercicio-5.o ./Ejercicio-6.d ./Ejercicio-6.o ./Ejercicio-7.d ./Ejercicio-7.o ./Ejercicio-8.d ./Ejercicio-8.o ./Ejercicio-9.d ./Ejercicio-9.o

.PHONY: clean--2e-

