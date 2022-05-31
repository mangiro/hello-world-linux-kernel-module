#include <linux/init.h>
#include <linux/module.h>


/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Gabriel Mangiro");
MODULE_DESCRIPTION("An example of a Hello World Linux Kernel Module.");


/**
 * @brief This function is called, when the module is loaded into the kernel.
 */
static int __init ModuleInit(void) {
	printk("Hello from Kernel!\n");

	return 0;
}


/**
 * @brief This function is called, when the module is removed from the kernel.
 */
static void __exit ModuleExit(void) {
	printk("Goodbye from Kernel!\n");
}


module_init(ModuleInit);
module_exit(ModuleExit);
