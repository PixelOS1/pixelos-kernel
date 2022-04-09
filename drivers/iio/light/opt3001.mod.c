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
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0x66c0d752, "iio_push_event" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xee15abe8, "i2c_smbus_write_word_data" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core");

MODULE_ALIAS("of:N*T*Cti,opt3001");
MODULE_ALIAS("of:N*T*Cti,opt3001C*");
MODULE_ALIAS("i2c:opt3001");

MODULE_INFO(srcversion, "0A91A8DC5E5DC6C714B7E20");
