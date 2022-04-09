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
	{ 0xaa10ea97, "__devm_regmap_init" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x731cb5d4, "i2c_smbus_read_i2c_block_data" },
	{ 0xee15abe8, "i2c_smbus_write_word_data" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0xc6f30039, "__regmap_init" },
	{ 0x81fefc83, "i2c_smbus_read_byte" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0xe7603e78, "regmap_get_val_endian" },
	{ 0xef2f45f3, "i2c_smbus_write_i2c_block_data" },
};

MODULE_INFO(depends, "i2c-core");


MODULE_INFO(srcversion, "4325A235BB2DAD69709E655");
