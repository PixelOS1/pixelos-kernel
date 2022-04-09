#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb19b445, "ioread8" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x848d372e, "iowrite8" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xee09ed35, "devm_ioremap_resource" },
	{ 0x3419636e, "platform_get_resource_byname" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnuvoton,npcm750-pwm-fan");
MODULE_ALIAS("of:N*T*Cnuvoton,npcm750-pwm-fanC*");

MODULE_INFO(srcversion, "89CD76C7EBB9CC6B9B98752");
