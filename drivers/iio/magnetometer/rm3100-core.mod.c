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
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x926f4dc7, "iio_read_const_attr" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf7175300, "regmap_read" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x50063258, "__devm_iio_trigger_register" },
	{ 0x9e32c99e, "iio_trigger_poll" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x72cb7ce4, "iio_device_claim_direct_mode" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7c9a9799, "iio_device_release_direct_mode" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "D6C56DAAF3A907FA6913BCE");
