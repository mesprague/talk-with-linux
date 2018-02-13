#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("argonlaser");
MODULE_DESCRIPTION("Hello World module");

static int __init hello_init(void)
{
  printk("Hello world!\n");
  return 0;
}

static void __exit hello_cleanup(void)
{
  printk("Cleaning up module.\n");
}

module_init(hello_init);
module_exit(hello_cleanup);