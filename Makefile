CC=arm-none-eabi-gcc
MACH=cortex-m4
CFLAGS= -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -o0
LFLAGS= -nostdlib -T stm32_ls.ld -Wl,-Map=final.map


all:main.o led.o systemClock.o stm32_startup.o final.elf

main.o:main.c
	$(CC) $(CFLAGS) -o $@ $^

led.o:led.c
	$(CC) $(CFLAGS) -o $@ $^

systemClock.o:systemClock.c
	$(CC) $(CFLAGS) -o $@ $^


stm32_startup.o:stm32_startup.c
	$(CC) $(CFLAGS) -o $@ $^

final.elf:main.o led.o systemClock.o stm32_startup.o 
	$(CC) $(LFLAGS) -o $@ $^


clean:
	rm -rf *.o *.elf

load:
	openocd -f board/stm32f4discovery.cfg