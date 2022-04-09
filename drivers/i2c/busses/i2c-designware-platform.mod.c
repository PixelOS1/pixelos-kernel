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
	{ 0x3d6c5f15, "i2c_dw_probe_master" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xa17ef8db, "set_primary_fwnode" },
	{ 0xfd76d81e, "i2c_detect_slave_mode" },
	{ 0x2d2afd51, "i2c_dw_configure_master" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x966947d7, "i2c_dw_validate_speed" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6631a567, "devm_clk_get_optional" },
	{ 0x4cec5ded, "__devm_reset_control_get" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0x65c412ef, "i2c_parse_fw_timings" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x809217e1, "i2c_dw_prepare_clk" },
	{ 0x3ef7ebe6, "i2c_dw_acpi_configure" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4231d202, "i2c_dw_configure_slave" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x86f27420, "iosf_mbi_block_punit_i2c_access" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x44414ff2, "iosf_mbi_unblock_punit_i2c_access" },
	{ 0xdee9cc98, "i2c_dw_probe_slave" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xf78891ce, "i2c_dw_adjust_bus_speed" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "i2c-designware-core,i2c-core");

MODULE_ALIAS("acpi*:INT33C2:*");
MODULE_ALIAS("acpi*:INT33C3:*");
MODULE_ALIAS("acpi*:INT3432:*");
MODULE_ALIAS("acpi*:INT3433:*");
MODULE_ALIAS("acpi*:80860F41:*");
MODULE_ALIAS("acpi*:808622C1:*");
MODULE_ALIAS("acpi*:AMD0010:*");
MODULE_ALIAS("acpi*:AMDI0010:*");
MODULE_ALIAS("acpi*:AMDI0510:*");
MODULE_ALIAS("acpi*:APMC0D0F:*");
MODULE_ALIAS("acpi*:HISI02A1:*");
MODULE_ALIAS("acpi*:HISI02A2:*");
MODULE_ALIAS("acpi*:HISI02A3:*");
MODULE_ALIAS("acpi*:HYGO0010:*");

MODULE_INFO(srcversion, "C561BAC62D73273B311C133");
