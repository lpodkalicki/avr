# --
# Copyright (c) 2015 by Lukasz Marcin Podkalicki <lukasz@podkalicki.com>
#
# Makfile
# --

include ../device.in

LIBAVRINO_SRC = \
	${LIBAVRINO_DIR}/src/avrino.c \
	${LIBAVRINO_DIR}/src/digital.c

PROGRAM_SRC = \
	main.c 
	
all:
	${CC} ${CFLAGS} -o main.o ${PROGRAM_SRC} ${LIBAVRINO_SRC}
	${OBJCOPY} -j .text -j .data -O ihex main.o main.hex	

flash:
	${AVRDUDE_FLASH}

fuse:
	${AVRDUDE_FUSE}

clean:
	rm -f *.o *.hex
