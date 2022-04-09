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
	{ 0x9b1c0b53, "fixed_phy_unregister" },
	{ 0xcabd7490, "mdio_driver_unregister" },
	{ 0x9e70dd86, "mdio_driver_register" },
	{ 0x687ee53d, "fixed_phy_register" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfdebfa59, "dsa_register_switch" },
	{ 0xd69e4840, "dev_get_by_name" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2c7ab036, "dsa_devlink_resource_occ_get_register" },
	{ 0x611ba7be, "dsa_devlink_resource_register" },
	{ 0x79287474, "dsa_devlink_resources_unregister" },
	{ 0xd66c79e5, "mdiobus_read_nested" },
	{ 0xf207720d, "mdiobus_write_nested" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0x9dca454d, "dsa_unregister_switch" },
	{ 0x93accc2b, "dsa_switch_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fixed_phy,libphy,dsa_core");


MODULE_INFO(srcversion, "2F23013331C31E5453B5D11");
