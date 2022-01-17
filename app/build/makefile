IDIR =../app_include
IDIR +=../../generic/gen_include
SRC_DIR = ../app_src
SRC_DIR += ../../generic/gen_src

CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../target/lib

LIBS=-lm

_DEPS = stepper_ctr.h arguments.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = stepper_ctr.o arguments.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: $(SRC_DIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

run: $(OBJ) 
    $(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 