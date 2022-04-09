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
	{ 0xc836e0d9, "bmc150_accel_pm_ops" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b9cd9e3, "i2c_acpi_new_device_by_fwnode" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x3ca6873c, "acpi_dev_gpio_irq_get_by" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xda096e40, "acpi_device_hid" },
	{ 0x5bc8fa81, "acpi_match_device_ids" },
	{ 0xfe9f6c39, "bmc150_accel_core_probe" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x3881a3d3, "bmc150_regmap_conf" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x61c7aabf, "acpi_dev_hid_uid_match" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x47b15be, "bmc150_accel_core_remove" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmc150-accel-core,i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cbosch,bma222");
MODULE_ALIAS("of:N*T*Cbosch,bma222C*");
MODULE_ALIAS("of:N*T*Cbosch,bma222e");
MODULE_ALIAS("of:N*T*Cbosch,bma222eC*");
MODULE_ALIAS("of:N*T*Cbosch,bma250e");
MODULE_ALIAS("of:N*T*Cbosch,bma250eC*");
MODULE_ALIAS("of:N*T*Cbosch,bma253");
MODULE_ALIAS("of:N*T*Cbosch,bma253C*");
MODULE_ALIAS("of:N*T*Cbosch,bma254");
MODULE_ALIAS("of:N*T*Cbosch,bma254C*");
MODULE_ALIAS("of:N*T*Cbosch,bma255");
MODULE_ALIAS("of:N*T*Cbosch,bma255C*");
MODULE_ALIAS("of:N*T*Cbosch,bma280");
MODULE_ALIAS("of:N*T*Cbosch,bma280C*");
MODULE_ALIAS("of:N*T*Cbosch,bmc150_accel");
MODULE_ALIAS("of:N*T*Cbosch,bmc150_accelC*");
MODULE_ALIAS("of:N*T*Cbosch,bmc156_accel");
MODULE_ALIAS("of:N*T*Cbosch,bmc156_accelC*");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_accel");
MODULE_ALIAS("of:N*T*Cbosch,bmi055_accelC*");
MODULE_ALIAS("i2c:bma222");
MODULE_ALIAS("i2c:bma222e");
MODULE_ALIAS("i2c:bma250e");
MODULE_ALIAS("i2c:bma253");
MODULE_ALIAS("i2c:bma254");
MODULE_ALIAS("i2c:bma255");
MODULE_ALIAS("i2c:bma280");
MODULE_ALIAS("i2c:bmc150_accel");
MODULE_ALIAS("i2c:bmc156_accel");
MODULE_ALIAS("i2c:bmi055_accel");
MODULE_ALIAS("acpi*:BMA0255:*");
MODULE_ALIAS("acpi*:BMA0280:*");
MODULE_ALIAS("acpi*:BMA222:*");
MODULE_ALIAS("acpi*:BMA222E:*");
MODULE_ALIAS("acpi*:BMA250E:*");
MODULE_ALIAS("acpi*:BMC150A:*");
MODULE_ALIAS("acpi*:BMI055A:*");
MODULE_ALIAS("acpi*:BOSC0200:*");
MODULE_ALIAS("acpi*:BSBA0150:*");
MODULE_ALIAS("acpi*:DUAL250E:*");

MODULE_INFO(srcversion, "7B85567D2D931EBA2F2E182");
