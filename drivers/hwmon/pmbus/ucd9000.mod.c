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
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x22749e72, "simple_open" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x96848186, "scnprintf" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x8b649654, "devm_gpiochip_add_data_with_key" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xe59532a7, "pmbus_get_debugfs_dir" },
	{ 0x1bba0e71, "pmbus_do_probe" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0xf9c18e6b, "i2c_smbus_read_block_data" },
	{ 0x1305d92a, "pmbus_set_page" },
	{ 0xb07e8690, "pmbus_get_driver_info" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0xf92c8476, "gpiochip_get_data" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,pmbus_core");

MODULE_ALIAS("of:N*T*Cti,ucd9000");
MODULE_ALIAS("of:N*T*Cti,ucd9000C*");
MODULE_ALIAS("of:N*T*Cti,ucd90120");
MODULE_ALIAS("of:N*T*Cti,ucd90120C*");
MODULE_ALIAS("of:N*T*Cti,ucd90124");
MODULE_ALIAS("of:N*T*Cti,ucd90124C*");
MODULE_ALIAS("of:N*T*Cti,ucd90160");
MODULE_ALIAS("of:N*T*Cti,ucd90160C*");
MODULE_ALIAS("of:N*T*Cti,ucd90320");
MODULE_ALIAS("of:N*T*Cti,ucd90320C*");
MODULE_ALIAS("of:N*T*Cti,ucd9090");
MODULE_ALIAS("of:N*T*Cti,ucd9090C*");
MODULE_ALIAS("of:N*T*Cti,ucd90910");
MODULE_ALIAS("of:N*T*Cti,ucd90910C*");
MODULE_ALIAS("i2c:ucd9000");
MODULE_ALIAS("i2c:ucd90120");
MODULE_ALIAS("i2c:ucd90124");
MODULE_ALIAS("i2c:ucd90160");
MODULE_ALIAS("i2c:ucd90320");
MODULE_ALIAS("i2c:ucd9090");
MODULE_ALIAS("i2c:ucd90910");

MODULE_INFO(srcversion, "21497F6A0817F1F90F360A1");
