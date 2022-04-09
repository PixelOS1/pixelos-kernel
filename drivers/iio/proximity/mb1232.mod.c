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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0x4d1153b, "i2c_smbus_write_byte" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:maxbotix-mb1202");
MODULE_ALIAS("i2c:maxbotix-mb1212");
MODULE_ALIAS("i2c:maxbotix-mb1222");
MODULE_ALIAS("i2c:maxbotix-mb1232");
MODULE_ALIAS("i2c:maxbotix-mb1242");
MODULE_ALIAS("i2c:maxbotix-mb7040");
MODULE_ALIAS("i2c:maxbotix-mb7137");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1202");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1202C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1212");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1212C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1222");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1222C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1232");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1232C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1242");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1242C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7040");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7040C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7137");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7137C*");

MODULE_INFO(srcversion, "50F831D9699518E7C7D832E");
