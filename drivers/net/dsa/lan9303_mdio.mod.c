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
	{ 0xada83f40, "lan9303_register_set" },
	{ 0xcabd7490, "mdio_driver_unregister" },
	{ 0x9e70dd86, "mdio_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x85974add, "lan9303_probe" },
	{ 0xaa10ea97, "__devm_regmap_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd66c79e5, "mdiobus_read_nested" },
	{ 0xf207720d, "mdiobus_write_nested" },
	{ 0x36426181, "lan9303_remove" },
	{ 0x6f776d08, "lan9303_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lan9303-core,libphy");

MODULE_ALIAS("of:N*T*Csmsc,lan9303-mdio");
MODULE_ALIAS("of:N*T*Csmsc,lan9303-mdioC*");

MODULE_INFO(srcversion, "A6ABBC1CE973DC3AA81CD0E");
