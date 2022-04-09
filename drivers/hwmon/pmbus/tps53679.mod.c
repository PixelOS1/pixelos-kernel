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
	{ 0xb6fc8525, "pmbus_read_byte_data" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf9c18e6b, "i2c_smbus_read_block_data" },
	{ 0x1bd5a4e0, "pmbus_read_word_data" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0x1bba0e71, "pmbus_do_probe" },
	{ 0x92f71b5a, "devm_kmemdup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,pmbus_core");

MODULE_ALIAS("of:N*T*Cti,tps53647");
MODULE_ALIAS("of:N*T*Cti,tps53647C*");
MODULE_ALIAS("of:N*T*Cti,tps53667");
MODULE_ALIAS("of:N*T*Cti,tps53667C*");
MODULE_ALIAS("of:N*T*Cti,tps53676");
MODULE_ALIAS("of:N*T*Cti,tps53676C*");
MODULE_ALIAS("of:N*T*Cti,tps53679");
MODULE_ALIAS("of:N*T*Cti,tps53679C*");
MODULE_ALIAS("of:N*T*Cti,tps53681");
MODULE_ALIAS("of:N*T*Cti,tps53681C*");
MODULE_ALIAS("of:N*T*Cti,tps53688");
MODULE_ALIAS("of:N*T*Cti,tps53688C*");
MODULE_ALIAS("i2c:bmr474");
MODULE_ALIAS("i2c:tps53647");
MODULE_ALIAS("i2c:tps53667");
MODULE_ALIAS("i2c:tps53676");
MODULE_ALIAS("i2c:tps53679");
MODULE_ALIAS("i2c:tps53681");
MODULE_ALIAS("i2c:tps53688");

MODULE_INFO(srcversion, "46652890841213CEB20FC09");
