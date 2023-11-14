#include <linux/fs.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/tty.h>

static void printString(char *string) {

    struct tty_struct *tty;

    tty = current->signal->tty;

    if(tty != NULL) { 

        (tty->driver->ops->write) (tty, string, strlen(string));
    }

    else
        printk("tty equals to zero");
}


static int __init aufs_init(void)
{
	printString("test");
	return 0;
}

static void __exit aufs_fini(void)
{
}



















module_init(aufs_init);
module_exit(aufs_fini);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("kmu");
