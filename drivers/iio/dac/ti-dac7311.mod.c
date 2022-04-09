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
	{ 0x467474c3, "iio_enum_available_read" },
	{ 0x138c2fc8, "iio_enum_write" },
	{ 0x4820353f, "iio_enum_read" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0x52345e6e, "spi_setup" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xe4bd0d8d, "regulator_get_voltage" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:dac5311");
MODULE_ALIAS("spi:dac6311");
MODULE_ALIAS("spi:dac7311");
MODULE_ALIAS("of:N*T*Cti,dac5311");
MODULE_ALIAS("of:N*T*Cti,dac5311C*");
MODULE_ALIAS("of:N*T*Cti,dac6311");
MODULE_ALIAS("of:N*T*Cti,dac6311C*");
MODULE_ALIAS("of:N*T*Cti,dac7311");
MODULE_ALIAS("of:N*T*Cti,dac7311C*");

MODULE_INFO(srcversion, "7DE6F6CE9AE5198E6DC68DE");
