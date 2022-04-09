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
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xe4bd0d8d, "regulator_get_voltage" },
	{ 0x68462f0f, "devm_regulator_get_optional" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5ca53aa5, "devm_iio_map_array_register" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x7c9a9799, "iio_device_release_direct_mode" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x72cb7ce4, "iio_device_claim_direct_mode" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x4d1153b, "i2c_smbus_write_byte" },
	{ 0x81fefc83, "i2c_smbus_read_byte" },
	{ 0x66c0d752, "iio_push_event" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:max1361");
MODULE_ALIAS("i2c:max1362");
MODULE_ALIAS("i2c:max1363");
MODULE_ALIAS("i2c:max1364");
MODULE_ALIAS("i2c:max1036");
MODULE_ALIAS("i2c:max1037");
MODULE_ALIAS("i2c:max1038");
MODULE_ALIAS("i2c:max1039");
MODULE_ALIAS("i2c:max1136");
MODULE_ALIAS("i2c:max1137");
MODULE_ALIAS("i2c:max1138");
MODULE_ALIAS("i2c:max1139");
MODULE_ALIAS("i2c:max1236");
MODULE_ALIAS("i2c:max1237");
MODULE_ALIAS("i2c:max1238");
MODULE_ALIAS("i2c:max1239");
MODULE_ALIAS("i2c:max11600");
MODULE_ALIAS("i2c:max11601");
MODULE_ALIAS("i2c:max11602");
MODULE_ALIAS("i2c:max11603");
MODULE_ALIAS("i2c:max11604");
MODULE_ALIAS("i2c:max11605");
MODULE_ALIAS("i2c:max11606");
MODULE_ALIAS("i2c:max11607");
MODULE_ALIAS("i2c:max11608");
MODULE_ALIAS("i2c:max11609");
MODULE_ALIAS("i2c:max11610");
MODULE_ALIAS("i2c:max11611");
MODULE_ALIAS("i2c:max11612");
MODULE_ALIAS("i2c:max11613");
MODULE_ALIAS("i2c:max11614");
MODULE_ALIAS("i2c:max11615");
MODULE_ALIAS("i2c:max11616");
MODULE_ALIAS("i2c:max11617");
MODULE_ALIAS("i2c:max11644");
MODULE_ALIAS("i2c:max11645");
MODULE_ALIAS("i2c:max11646");
MODULE_ALIAS("i2c:max11647");
MODULE_ALIAS("of:N*T*Cmaxim,max1361");
MODULE_ALIAS("of:N*T*Cmaxim,max1361C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1362");
MODULE_ALIAS("of:N*T*Cmaxim,max1362C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1363");
MODULE_ALIAS("of:N*T*Cmaxim,max1363C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1364");
MODULE_ALIAS("of:N*T*Cmaxim,max1364C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1036");
MODULE_ALIAS("of:N*T*Cmaxim,max1036C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1037");
MODULE_ALIAS("of:N*T*Cmaxim,max1037C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1038");
MODULE_ALIAS("of:N*T*Cmaxim,max1038C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1039");
MODULE_ALIAS("of:N*T*Cmaxim,max1039C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1136");
MODULE_ALIAS("of:N*T*Cmaxim,max1136C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1137");
MODULE_ALIAS("of:N*T*Cmaxim,max1137C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1138");
MODULE_ALIAS("of:N*T*Cmaxim,max1138C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1139");
MODULE_ALIAS("of:N*T*Cmaxim,max1139C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1236");
MODULE_ALIAS("of:N*T*Cmaxim,max1236C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1237");
MODULE_ALIAS("of:N*T*Cmaxim,max1237C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1238");
MODULE_ALIAS("of:N*T*Cmaxim,max1238C*");
MODULE_ALIAS("of:N*T*Cmaxim,max1239");
MODULE_ALIAS("of:N*T*Cmaxim,max1239C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11600");
MODULE_ALIAS("of:N*T*Cmaxim,max11600C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11601");
MODULE_ALIAS("of:N*T*Cmaxim,max11601C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11602");
MODULE_ALIAS("of:N*T*Cmaxim,max11602C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11603");
MODULE_ALIAS("of:N*T*Cmaxim,max11603C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11604");
MODULE_ALIAS("of:N*T*Cmaxim,max11604C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11605");
MODULE_ALIAS("of:N*T*Cmaxim,max11605C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11606");
MODULE_ALIAS("of:N*T*Cmaxim,max11606C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11607");
MODULE_ALIAS("of:N*T*Cmaxim,max11607C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11608");
MODULE_ALIAS("of:N*T*Cmaxim,max11608C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11609");
MODULE_ALIAS("of:N*T*Cmaxim,max11609C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11610");
MODULE_ALIAS("of:N*T*Cmaxim,max11610C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11611");
MODULE_ALIAS("of:N*T*Cmaxim,max11611C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11612");
MODULE_ALIAS("of:N*T*Cmaxim,max11612C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11613");
MODULE_ALIAS("of:N*T*Cmaxim,max11613C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11614");
MODULE_ALIAS("of:N*T*Cmaxim,max11614C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11615");
MODULE_ALIAS("of:N*T*Cmaxim,max11615C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11616");
MODULE_ALIAS("of:N*T*Cmaxim,max11616C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11617");
MODULE_ALIAS("of:N*T*Cmaxim,max11617C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11644");
MODULE_ALIAS("of:N*T*Cmaxim,max11644C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11645");
MODULE_ALIAS("of:N*T*Cmaxim,max11645C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11646");
MODULE_ALIAS("of:N*T*Cmaxim,max11646C*");
MODULE_ALIAS("of:N*T*Cmaxim,max11647");
MODULE_ALIAS("of:N*T*Cmaxim,max11647C*");

MODULE_INFO(srcversion, "1A259911910C9E70897EE65");
