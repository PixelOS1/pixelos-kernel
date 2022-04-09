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
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0xf7175300, "regmap_read" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x253f7f3c, "iio_read_mount_matrix" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x72cb7ce4, "iio_device_claim_direct_mode" },
	{ 0x980b983d, "iio_show_mount_matrix" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1278ffd6, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0x7c9a9799, "iio_device_release_direct_mode" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x96848186, "scnprintf" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x66c0d752, "iio_push_event" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x81f466c5, "device_property_present" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");


MODULE_INFO(srcversion, "7CE2C113F4981992FB2DA3A");
