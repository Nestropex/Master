
MAKEFILE_DIR = ../../generic/make

TARGET = stepper_ctr

SRC  = $(APP_SRC_DIR)/stepper_ctr.c

DEPS  = $(APP_INC_DIR)/stepper_ctr.h 
DEPS += $(USR_INC)/wiringPi.h

include $(MAKEFILE_DIR)/makefile 