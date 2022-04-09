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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x563e6058, "sdhci_remove_host" },
	{ 0x4a5a0dd5, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x81188c30, "match_string" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x962121c2, "sdhci_pltfm_init" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5c8f71a6, "sdhci_set_power_noreg" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xa4cd87c0, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb60c3c56, "sdhci_enable_sdio_irq" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xc15d7695, "mmc_of_parse" },
	{ 0x7afd8a16, "sdhci_pltfm_clk_get_max_clock" },
	{ 0x34efeb51, "sdhci_add_host" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x6db9ec81, "sdhci_execute_tuning" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x64e8a26e, "sdhci_set_clock" },
	{ 0xe8181e89, "sdhci_get_property" },
	{ 0x69eb3786, "device_property_read_string" },
	{ 0xc4547e09, "sdhci_set_ios" },
	{ 0xb3fb2504, "sdhci_runtime_suspend_host" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x14622f29, "sdhci_runtime_resume_host" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4ba0426b, "mmc_regulator_set_ocr" },
	{ 0x35358ed9, "sdhci_pltfm_free" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfccc7067, "sdhci_reset" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc6ad82d4, "sdhci_start_signal_voltage_switch" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x45456ef2, "sdhci_set_bus_width" },
	{ 0x81f466c5, "device_property_present" },
};

MODULE_INFO(depends, "sdhci,sdhci-pltfm,mmc_core");

MODULE_ALIAS("acpi*:MRVL0002:*");
MODULE_ALIAS("acpi*:MRVL0003:*");
MODULE_ALIAS("acpi*:MRVL0004:*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-ap807-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-ap807-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhciC*");

MODULE_INFO(srcversion, "E53803EBE1FF242CAEADA75");
