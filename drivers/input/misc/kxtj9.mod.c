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
	{ 0x87645171, "input_setup_polling" },
	{ 0x282d8810, "devm_device_add_group" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8e28c273, "input_get_poll_interval" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x794d1829, "input_device_enabled" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x331337dc, "input_event" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:kxtj9");

MODULE_INFO(srcversion, "0F00531A6BB402B50A2664E");
