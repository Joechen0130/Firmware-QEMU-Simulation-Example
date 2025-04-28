# Makefile

CC=arm-none-eabi-gcc
LD=arm-none-eabi-ld
CFLAGS=-Wall -O2 -nostdlib -nostartfiles -ffreestanding
LDFLAGS=-T linker.ld

all: firmware.elf

firmware.elf: main.o
	$(LD) $(LDFLAGS) -o $@ $^

main.o: main.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	del /f /q *.o *.elf   # Windows 用，如果是 Linux 改成 rm -f

.PHONY: all clean
