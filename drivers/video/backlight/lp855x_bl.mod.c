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
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x45ed2667, "devm_backlight_device_register" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x68462f0f, "devm_regulator_get_optional" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9a07b0e8, "devm_pwm_get" },
	{ 0xc440c8d0, "pwm_apply_state" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x96848186, "scnprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,backlight");

MODULE_ALIAS("acpi*:XMCC0001:*");
MODULE_ALIAS("i2c:lp8550");
MODULE_ALIAS("i2c:lp8551");
MODULE_ALIAS("i2c:lp8552");
MODULE_ALIAS("i2c:lp8553");
MODULE_ALIAS("i2c:lp8555");
MODULE_ALIAS("i2c:lp8556");
MODULE_ALIAS("i2c:lp8557");
MODULE_ALIAS("of:N*T*Cti,lp8550");
MODULE_ALIAS("of:N*T*Cti,lp8550C*");
MODULE_ALIAS("of:N*T*Cti,lp8551");
MODULE_ALIAS("of:N*T*Cti,lp8551C*");
MODULE_ALIAS("of:N*T*Cti,lp8552");
MODULE_ALIAS("of:N*T*Cti,lp8552C*");
MODULE_ALIAS("of:N*T*Cti,lp8553");
MODULE_ALIAS("of:N*T*Cti,lp8553C*");
MODULE_ALIAS("of:N*T*Cti,lp8555");
MODULE_ALIAS("of:N*T*Cti,lp8555C*");
MODULE_ALIAS("of:N*T*Cti,lp8556");
MODULE_ALIAS("of:N*T*Cti,lp8556C*");
MODULE_ALIAS("of:N*T*Cti,lp8557");
MODULE_ALIAS("of:N*T*Cti,lp8557C*");

MODULE_INFO(srcversion, "B1B0E7BD9A2FF1BD26D1245");
