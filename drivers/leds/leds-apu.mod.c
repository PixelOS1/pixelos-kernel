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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xc0fceb2f, "__platform_driver_probe" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x92997ed8, "_printk" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x848d372e, "iowrite8" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*PCEngines*:pn*APU*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:pn*apu1*:");

MODULE_INFO(srcversion, "E67C0BEB22889198C07443B");
