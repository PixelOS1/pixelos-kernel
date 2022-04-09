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
	{ 0xee15abe8, "i2c_smbus_write_word_data" },
	{ 0x6482155c, "pmbus_write_word_data" },
	{ 0x1bd5a4e0, "pmbus_read_word_data" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x1bba0e71, "pmbus_do_probe" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xa916b694, "strnlen" },
	{ 0xf9c18e6b, "i2c_smbus_read_block_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb6fc8525, "pmbus_read_byte_data" },
	{ 0xb07e8690, "pmbus_get_driver_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,pmbus_core");

MODULE_ALIAS("i2c:adm1075");
MODULE_ALIAS("i2c:adm1272");
MODULE_ALIAS("i2c:adm1275");
MODULE_ALIAS("i2c:adm1276");
MODULE_ALIAS("i2c:adm1278");
MODULE_ALIAS("i2c:adm1293");
MODULE_ALIAS("i2c:adm1294");

MODULE_INFO(srcversion, "58C817AFF8EB0EA3E3281E8");
