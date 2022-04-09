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
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf9c18e6b, "i2c_smbus_read_block_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,pmbus_core");

MODULE_ALIAS("of:N*T*Cti,cd9200");
MODULE_ALIAS("of:N*T*Cti,cd9200C*");
MODULE_ALIAS("of:N*T*Cti,cd9220");
MODULE_ALIAS("of:N*T*Cti,cd9220C*");
MODULE_ALIAS("of:N*T*Cti,cd9222");
MODULE_ALIAS("of:N*T*Cti,cd9222C*");
MODULE_ALIAS("of:N*T*Cti,cd9224");
MODULE_ALIAS("of:N*T*Cti,cd9224C*");
MODULE_ALIAS("of:N*T*Cti,cd9240");
MODULE_ALIAS("of:N*T*Cti,cd9240C*");
MODULE_ALIAS("of:N*T*Cti,cd9244");
MODULE_ALIAS("of:N*T*Cti,cd9244C*");
MODULE_ALIAS("of:N*T*Cti,cd9246");
MODULE_ALIAS("of:N*T*Cti,cd9246C*");
MODULE_ALIAS("of:N*T*Cti,cd9248");
MODULE_ALIAS("of:N*T*Cti,cd9248C*");
MODULE_ALIAS("i2c:ucd9200");
MODULE_ALIAS("i2c:ucd9220");
MODULE_ALIAS("i2c:ucd9222");
MODULE_ALIAS("i2c:ucd9224");
MODULE_ALIAS("i2c:ucd9240");
MODULE_ALIAS("i2c:ucd9244");
MODULE_ALIAS("i2c:ucd9246");
MODULE_ALIAS("i2c:ucd9248");

MODULE_INFO(srcversion, "67F03B6F9352C2122D494FD");
