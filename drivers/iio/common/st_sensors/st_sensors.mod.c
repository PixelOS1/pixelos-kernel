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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf7175300, "regmap_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0xf25891ce, "iio_trigger_poll_chained" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x50063258, "__devm_iio_trigger_register" },
	{ 0xdf3519be, "iio_trigger_using_own" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x16e6d67f, "get_device" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x96848186, "scnprintf" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xeff1f3dc, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "D82B2E80493BB68017A7894");
