obj-m += hello_world_LKM.o

in:
	@make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	@sudo insmod hello_world_LKM.ko
	@lsmod | grep hello_world_LKM
	@sudo dmesg | tail -1

out:
	@sudo rmmod hello_world_LKM
	@sudo dmesg | tail -1
	@make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
