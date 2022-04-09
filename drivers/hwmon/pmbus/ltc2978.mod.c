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
	{ 0x1bd5a4e0, "pmbus_read_word_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1bba0e71, "pmbus_do_probe" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xa916b694, "strnlen" },
	{ 0xf9c18e6b, "i2c_smbus_read_block_data" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xdfe13c0f, "pmbus_write_byte" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb6fc8525, "pmbus_read_byte_data" },
	{ 0xb07e8690, "pmbus_get_driver_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,pmbus_core");

MODULE_ALIAS("i2c:ltc2972");
MODULE_ALIAS("i2c:ltc2974");
MODULE_ALIAS("i2c:ltc2975");
MODULE_ALIAS("i2c:ltc2977");
MODULE_ALIAS("i2c:ltc2978");
MODULE_ALIAS("i2c:ltc2979");
MODULE_ALIAS("i2c:ltc2980");
MODULE_ALIAS("i2c:ltc3880");
MODULE_ALIAS("i2c:ltc3882");
MODULE_ALIAS("i2c:ltc3883");
MODULE_ALIAS("i2c:ltc3884");
MODULE_ALIAS("i2c:ltc3886");
MODULE_ALIAS("i2c:ltc3887");
MODULE_ALIAS("i2c:ltc3889");
MODULE_ALIAS("i2c:ltc7880");
MODULE_ALIAS("i2c:ltm2987");
MODULE_ALIAS("i2c:ltm4664");
MODULE_ALIAS("i2c:ltm4675");
MODULE_ALIAS("i2c:ltm4676");
MODULE_ALIAS("i2c:ltm4677");
MODULE_ALIAS("i2c:ltm4678");
MODULE_ALIAS("i2c:ltm4680");
MODULE_ALIAS("i2c:ltm4686");
MODULE_ALIAS("i2c:ltm4700");

MODULE_INFO(srcversion, "5E850D082781E8CCB6F6687");
