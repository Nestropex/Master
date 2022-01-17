APP_DIR = ../../app
GEN_DIR = ..
APP_INC_DIR =$(APP_DIR)/app_include
GEN_INC_DIR +=$(GEN_DIR)/gen_include
APP_SRC_DIR = $(APP_DIR)/app_src
GEN_SRC_DIR += $(GEN_DIR)/gen_src
USR_INC = ../../../../../../usr/include

INC_DIR = $(APP_INC_DIR)
INC_DIR = $(GEN_INC_DIR)

CC=gcc
CFLAGS=-I$(INC_DIR)

ODIR=$(APP_DIR)/target/obj
LDIR =$(APP_DIR)/target/lib

LIBS  =-lm 
LIBS += -lwiringPi

SRC  = $(APP_SRC_DIR)/stepper_ctr.c

DEPS  = $(APP_INC_DIR)/stepper_ctr.h 
DEPS += $(USR_INC)/wiringPi.h

OBJ  = $(ODIR)/stepper_ctr.o



$(OBJ): $(SRC) $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) 

$(TARGET): $(OBJ) 
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 