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
	{ 0x50034bfa, "bmc150_magn_pm_ops" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xba5a7717, "bmc150_magn_probe" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x835b124d, "bmc150_magn_regmap_config" },
	{ 0xdcecd5da, "bmc150_magn_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmc150_magn,i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cbosch,bmc150_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmc150_magnC*");
MODULE_ALIAS("of:N*T*Cbosch,bmc156_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmc156_magnC*");
MODULE_ALIAS("of:N*T*Cbosch,bmm150_magn");
MODULE_ALIAS("of:N*T*Cbosch,bmm150_magnC*");
MODULE_ALIAS("of:N*T*Cbosch,bmm150");
MODULE_ALIAS("of:N*T*Cbosch,bmm150C*");
MODULE_ALIAS("i2c:bmc150_magn");
MODULE_ALIAS("i2c:bmc156_magn");
MODULE_ALIAS("i2c:bmm150_magn");
MODULE_ALIAS("acpi*:BMC150B:*");
MODULE_ALIAS("acpi*:BMC156B:*");
MODULE_ALIAS("acpi*:BMM150B:*");

MODULE_INFO(srcversion, "13255B2DACDB0A96C3BD52A");
