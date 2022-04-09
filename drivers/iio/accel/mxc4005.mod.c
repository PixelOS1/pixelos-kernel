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
	{ 0x926f4dc7, "iio_read_const_attr" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x50063258, "__devm_iio_trigger_register" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x16e6d67f, "get_device" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0xf7175300, "regmap_read" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core,industrialio-triggered-buffer,regmap-i2c");

MODULE_ALIAS("i2c:mxc4005");
MODULE_ALIAS("i2c:mxc6655");
MODULE_ALIAS("acpi*:MXC4005:*");
MODULE_ALIAS("acpi*:MXC6655:*");

MODULE_INFO(srcversion, "6D7994FCB535FF0E97B419C");
