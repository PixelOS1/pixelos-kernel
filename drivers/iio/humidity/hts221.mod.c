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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0xf7175300, "regmap_read" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0xf25891ce, "iio_trigger_poll_chained" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x50063258, "__devm_iio_trigger_register" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x72cb7ce4, "iio_device_claim_direct_mode" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x16e6d67f, "get_device" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x7c9a9799, "iio_device_release_direct_mode" },
	{ 0x96848186, "scnprintf" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xeff1f3dc, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "96435A0F24C70A3DB64B665");
