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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("acpi*:MX98357A:*");
MODULE_ALIAS("acpi*:MX98360A:*");

MODULE_INFO(srcversion, "9DEC2859F31092714DDA257");
