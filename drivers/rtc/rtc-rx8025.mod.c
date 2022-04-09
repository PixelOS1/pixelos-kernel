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
	{ 0x3854774b, "kstrtoll" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa01d5cf6, "__devm_rtc_register_device" },
	{ 0x65cc7b69, "rtc_add_group" },
	{ 0x76af4d48, "devm_rtc_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x731cb5d4, "i2c_smbus_read_i2c_block_data" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xef2f45f3, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x30e7fdd6, "rtc_update_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:rx8035");

MODULE_INFO(srcversion, "316F600A26B0CFFA73819B3");