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
	{ 0xbecdd87c, "sdhci_set_uhs_signaling" },
	{ 0x45456ef2, "sdhci_set_bus_width" },
	{ 0x64e8a26e, "sdhci_set_clock" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x14622f29, "sdhci_runtime_resume_host" },
	{ 0x20640143, "sdhci_resume_host" },
	{ 0xfccc7067, "sdhci_reset" },
	{ 0xb3fb2504, "sdhci_runtime_suspend_host" },
	{ 0x283c133d, "sdhci_suspend_host" },
	{ 0xc6ad82d4, "sdhci_start_signal_voltage_switch" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x6db9ec81, "sdhci_execute_tuning" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x54d08c2e, "sdhci_cleanup_host" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x6961cff0, "__sdhci_add_host" },
	{ 0x8bd2768a, "sdhci_setup_host" },
	{ 0xdca1f824, "mmc_gpiod_request_cd" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x49c275bb, "sdhci_alloc_host" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x8d9d029b, "acpi_device_fix_up_power" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9379b58, "sdhci_get_cd_nogpio" },
	{ 0x62ee4b0d, "mmc_gpio_get_cd" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x61c7aabf, "acpi_dev_hid_uid_match" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xcb48604b, "__sdhci_read_caps" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xc4547e09, "sdhci_set_ios" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xbd6f4cba, "sdhci_free_host" },
	{ 0x563e6058, "sdhci_remove_host" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sdhci,mmc_core");

MODULE_ALIAS("acpi*:80865ACA:*");
MODULE_ALIAS("acpi*:80865ACC:*");
MODULE_ALIAS("acpi*:80865AD0:*");
MODULE_ALIAS("acpi*:80860F14:*");
MODULE_ALIAS("acpi*:80860F16:*");
MODULE_ALIAS("acpi*:INT33BB:*");
MODULE_ALIAS("acpi*:INT33C6:*");
MODULE_ALIAS("acpi*:INT3436:*");
MODULE_ALIAS("acpi*:INT344D:*");
MODULE_ALIAS("acpi*:PNP0D40:*");
MODULE_ALIAS("acpi*:QCOM8051:*");
MODULE_ALIAS("acpi*:QCOM8052:*");
MODULE_ALIAS("acpi*:AMDI0040:*");
MODULE_ALIAS("acpi*:AMDI0041:*");

MODULE_INFO(srcversion, "0F1F21A57C52DA537078EE1");
