obj-m += timerbind.o

# KSRC := ~/linux_work/linux-sound/
KSRC := /lib/modules/5.15.0-117-generic/build


all:
	make -C $(KSRC) M=$(PWD) modules
clean:
	rm -rf *.o *.mod.o *.ko
