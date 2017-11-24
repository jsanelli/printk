#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/delay.h>

int init_module(void)
{
  printk(KERN_EMERG "KERN_EMERG Get ready to cook!\n");

  msleep(5000);//mS
  printk(KERN_ALERT "\nKERN_ALERT Roast the turkey.\n");
  printk(KERN_CRIT "KERN_CRIT Mash the potatoes.\n");
  printk(KERN_ERR "KERN_ERR Stir the gravy.\n");
  printk(KERN_WARNING "KERN_WARNING Cook cranberries.\n");
  printk(KERN_NOTICE "KERN_NOTICE Bake green bean casserole.\n");
  printk(KERN_INFO "KERN_INFO Bake pumpkin pie.\n");
  printk(KERN_DEBUG "KERN_DEBUG Whip the cream.\n");

  msleep(10000);//mS
  printk(KERN_ALERT "\nThank You for watching.\n");
  return 0;
}

void cleanup_module(void)
{
}
