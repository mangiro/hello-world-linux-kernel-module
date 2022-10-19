# Hello World Linux Kernel Module
This project is just an introductory example of how we can start thinking about creating a module for the Linux Kernel.
#
## How to run this
***Did this on Pop!_OS 20.04.***

***This will ask for sudo permissions as these are very low level actions.***

Inside the `src` folder run the `make in` command, it will build the module directory and then insert it into the Kernel, 
at the end you will be able to see the message "Hello from Kernel!" just as it is set in the code of the `hello_world_LKM.c` file, 
in this case, it was the action that the module performed when it was inserted in the Kernel.

Once you've inserted the module, it's time to remove it, just run the `make out` command, you will see a message saying "Goodbye from Kernel!", 
this is the action that the module performed at the moment that was removed from the Kernel 
and then at the end it cleans the directory with the files that were created for the module.

