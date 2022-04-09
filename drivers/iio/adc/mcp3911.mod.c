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
	{ 0x815588a6, "clk_enable" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x68462f0f, "devm_regulator_get_optional" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe4bd0d8d, "regulator_get_voltage" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xdf4b802d, "spi_write_then_read" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:mcp3911");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3911");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3911C*");

MODULE_INFO(srcversion, "97D1EBCAF134EA65BBBC878");
