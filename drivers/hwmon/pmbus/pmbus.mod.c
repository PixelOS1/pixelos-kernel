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
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0x1305d92a, "pmbus_set_page" },
	{ 0x883cde5, "pmbus_clear_faults" },
	{ 0xb6fc8525, "pmbus_read_byte_data" },
	{ 0xb8f22719, "pmbus_check_word_register" },
	{ 0x1f5a8dcc, "pmbus_check_byte_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,pmbus_core");

MODULE_ALIAS("i2c:adp4000");
MODULE_ALIAS("i2c:bmr310");
MODULE_ALIAS("i2c:bmr453");
MODULE_ALIAS("i2c:bmr454");
MODULE_ALIAS("i2c:bmr456");
MODULE_ALIAS("i2c:bmr457");
MODULE_ALIAS("i2c:bmr458");
MODULE_ALIAS("i2c:bmr480");
MODULE_ALIAS("i2c:bmr490");
MODULE_ALIAS("i2c:bmr491");
MODULE_ALIAS("i2c:bmr492");
MODULE_ALIAS("i2c:dps460");
MODULE_ALIAS("i2c:dps650ab");
MODULE_ALIAS("i2c:dps800");
MODULE_ALIAS("i2c:max20796");
MODULE_ALIAS("i2c:mdt040");
MODULE_ALIAS("i2c:ncp4200");
MODULE_ALIAS("i2c:ncp4208");
MODULE_ALIAS("i2c:pdt003");
MODULE_ALIAS("i2c:pdt006");
MODULE_ALIAS("i2c:pdt012");
MODULE_ALIAS("i2c:pmbus");
MODULE_ALIAS("i2c:sgd009");
MODULE_ALIAS("i2c:tps40400");
MODULE_ALIAS("i2c:tps544b20");
MODULE_ALIAS("i2c:tps544b25");
MODULE_ALIAS("i2c:tps544c20");
MODULE_ALIAS("i2c:tps544c25");
MODULE_ALIAS("i2c:udt020");

MODULE_INFO(srcversion, "99D61A37E2FB7AD7AACC8E1");
