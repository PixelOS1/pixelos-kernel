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
	{ 0x9316b04c, "kobject_uevent" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc9ce5f01, "__wmi_driver_register" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x8e34eaa4, "wmi_driver_unregister" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
};

MODULE_INFO(depends, "wmi");

MODULE_ALIAS("wmi:86CCFD48-205E-4A77-9C48-2021CBEDE341");

MODULE_INFO(srcversion, "BB184B9C0AF2BBA791CA2C6");
