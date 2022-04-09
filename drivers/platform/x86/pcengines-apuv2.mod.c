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
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xff81487d, "gpiod_remove_lookup_table" },
	{ 0x38aa1397, "gpiod_add_lookup_table" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*PCEngines*:rn*APU2*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*apu2*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*PCEnginesapu2*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*APU3*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*apu3*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*PCEnginesapu3*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*APU4*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*apu4*:");
MODULE_ALIAS("dmi*:svn*PCEngines*:rn*PCEnginesapu4*:");

MODULE_INFO(srcversion, "2249FD988EC5B0045C5567E");
