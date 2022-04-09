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
	{ 0x40a4c25b, "_dev_info" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,hwmon-vid");

MODULE_ALIAS("of:N*T*Cadi,adt7473");
MODULE_ALIAS("of:N*T*Cadi,adt7473C*");
MODULE_ALIAS("of:N*T*Cadi,adt7475");
MODULE_ALIAS("of:N*T*Cadi,adt7475C*");
MODULE_ALIAS("of:N*T*Cadi,adt7476");
MODULE_ALIAS("of:N*T*Cadi,adt7476C*");
MODULE_ALIAS("of:N*T*Cadi,adt7490");
MODULE_ALIAS("of:N*T*Cadi,adt7490C*");
MODULE_ALIAS("i2c:adt7473");
MODULE_ALIAS("i2c:adt7475");
MODULE_ALIAS("i2c:adt7476");
MODULE_ALIAS("i2c:adt7490");

MODULE_INFO(srcversion, "9618795351F987F4EEEE761");
