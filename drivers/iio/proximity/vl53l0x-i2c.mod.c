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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x731cb5d4, "i2c_smbus_read_i2c_block_data" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xa6257a2f, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio");

MODULE_ALIAS("of:N*T*Cst,vl53l0x");
MODULE_ALIAS("of:N*T*Cst,vl53l0xC*");
MODULE_ALIAS("i2c:vl53l0x");

MODULE_INFO(srcversion, "9DD2AFD7313DD771356C61B");
