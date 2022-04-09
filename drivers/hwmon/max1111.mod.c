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
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x231a9a8f, "hwmon_device_register" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x52345e6e, "spi_setup" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:max1110");
MODULE_ALIAS("spi:max1111");
MODULE_ALIAS("spi:max1112");
MODULE_ALIAS("spi:max1113");

MODULE_INFO(srcversion, "B411FEBA90B88FFEE82BF67");
