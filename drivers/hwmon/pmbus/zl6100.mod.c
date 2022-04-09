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
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x1bd5a4e0, "pmbus_read_word_data" },
	{ 0x6482155c, "pmbus_write_word_data" },
	{ 0xe0145cf6, "pmbus_clear_cache" },
	{ 0xb6fc8525, "pmbus_read_byte_data" },
	{ 0xdfe13c0f, "pmbus_write_byte" },
	{ 0xb07e8690, "pmbus_get_driver_info" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x1bba0e71, "pmbus_do_probe" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf9c18e6b, "i2c_smbus_read_block_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb43f9365, "ktime_get" },
};

MODULE_INFO(depends, "i2c-core,pmbus_core");

MODULE_ALIAS("i2c:bmr450");
MODULE_ALIAS("i2c:bmr451");
MODULE_ALIAS("i2c:bmr462");
MODULE_ALIAS("i2c:bmr463");
MODULE_ALIAS("i2c:bmr464");
MODULE_ALIAS("i2c:bmr465");
MODULE_ALIAS("i2c:bmr466");
MODULE_ALIAS("i2c:bmr467");
MODULE_ALIAS("i2c:bmr469");
MODULE_ALIAS("i2c:zl2004");
MODULE_ALIAS("i2c:zl2005");
MODULE_ALIAS("i2c:zl2006");
MODULE_ALIAS("i2c:zl2008");
MODULE_ALIAS("i2c:zl2105");
MODULE_ALIAS("i2c:zl2106");
MODULE_ALIAS("i2c:zl6100");
MODULE_ALIAS("i2c:zl6105");
MODULE_ALIAS("i2c:zl8802");
MODULE_ALIAS("i2c:zl9101");
MODULE_ALIAS("i2c:zl9117");
MODULE_ALIAS("i2c:zls1003");
MODULE_ALIAS("i2c:zls4009");

MODULE_INFO(srcversion, "05292286F96612F10787783");
