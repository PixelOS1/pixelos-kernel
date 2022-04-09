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
	{ 0x8d598728, "iio_trigger_validate_own_device" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x43469f8e, "spi_sync" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x50063258, "__devm_iio_trigger_register" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0xe4bd0d8d, "regulator_get_voltage" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9e32c99e, "iio_trigger_poll" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:ad7766");
MODULE_ALIAS("spi:ad7766-1");
MODULE_ALIAS("spi:ad7766-2");
MODULE_ALIAS("spi:ad7767");
MODULE_ALIAS("spi:ad7767-1");
MODULE_ALIAS("spi:ad7767-2");

MODULE_INFO(srcversion, "6202A71F466883397D7FFA5");
