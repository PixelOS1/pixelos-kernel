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
	{ 0x1bba0e71, "pmbus_do_probe" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb6fc8525, "pmbus_read_byte_data" },
	{ 0x1bd5a4e0, "pmbus_read_word_data" },
	{ 0xdfe13c0f, "pmbus_write_byte" },
	{ 0x6482155c, "pmbus_write_word_data" },
	{ 0x84465041, "pmbus_write_byte_data" },
	{ 0xb07e8690, "pmbus_get_driver_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,pmbus_core");

MODULE_ALIAS("of:N*T*Cti,lm25056");
MODULE_ALIAS("of:N*T*Cti,lm25056C*");
MODULE_ALIAS("of:N*T*Cti,lm25066");
MODULE_ALIAS("of:N*T*Cti,lm25066C*");
MODULE_ALIAS("of:N*T*Cti,lm5064");
MODULE_ALIAS("of:N*T*Cti,lm5064C*");
MODULE_ALIAS("of:N*T*Cti,lm5066");
MODULE_ALIAS("of:N*T*Cti,lm5066C*");
MODULE_ALIAS("of:N*T*Cti,lm5066i");
MODULE_ALIAS("of:N*T*Cti,lm5066iC*");
MODULE_ALIAS("i2c:lm25056");
MODULE_ALIAS("i2c:lm25066");
MODULE_ALIAS("i2c:lm5064");
MODULE_ALIAS("i2c:lm5066");
MODULE_ALIAS("i2c:lm5066i");

MODULE_INFO(srcversion, "DAD8BBD7570F7D401120C4E");
