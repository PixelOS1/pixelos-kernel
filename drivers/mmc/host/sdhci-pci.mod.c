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
	{ 0x5ad68a25, "cqhci_resume" },
	{ 0xe042684d, "sdhci_enable_v4_mode" },
	{ 0x563e6058, "sdhci_remove_host" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0xadd8f214, "sdhci_set_power" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x9379b58, "sdhci_get_cd_nogpio" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x8a5648a5, "sdhci_cqe_enable" },
	{ 0x9ba5c941, "mmc_send_tuning" },
	{ 0x49c275bb, "sdhci_alloc_host" },
	{ 0x20640143, "sdhci_resume_host" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x54d08c2e, "sdhci_cleanup_host" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xfbeabbe6, "dev_pm_qos_hide_latency_tolerance" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x39e60e9d, "debugfs_create_x32" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0x8d9d029b, "acpi_device_fix_up_power" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0x34efeb51, "sdhci_add_host" },
	{ 0xbd6f4cba, "sdhci_free_host" },
	{ 0x380d61bf, "cqhci_deactivate" },
	{ 0x6db9ec81, "sdhci_execute_tuning" },
	{ 0x571a2806, "sdhci_start_tuning" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x64e8a26e, "sdhci_set_clock" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x9e1428b5, "sdhci_abort_tuning" },
	{ 0xa0f0a1b8, "sdhci_reset_tuning" },
	{ 0x6961cff0, "__sdhci_add_host" },
	{ 0x357f7d45, "sdhci_cqe_disable" },
	{ 0x9f9a7767, "sdhci_dumpregs" },
	{ 0x8bd2768a, "sdhci_setup_host" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0xfa227d2f, "device_wakeup_enable" },
	{ 0xb3fb2504, "sdhci_runtime_suspend_host" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x14622f29, "sdhci_runtime_resume_host" },
	{ 0xef731740, "pci_find_capability" },
	{ 0x232b032c, "device_wakeup_disable" },
	{ 0x283c133d, "sdhci_suspend_host" },
	{ 0x62ee4b0d, "mmc_gpio_get_cd" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xda9176e4, "mmc_gpio_set_cd_wake" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x3ec2288, "sdhci_enable_clk" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x36195257, "sdhci_calc_clk" },
	{ 0xfccc7067, "sdhci_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0x16bee291, "cqhci_irq" },
	{ 0xbecdd87c, "sdhci_set_uhs_signaling" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x35e60961, "dev_pm_qos_expose_latency_tolerance" },
	{ 0x36192e5e, "cqhci_init" },
	{ 0xdca1f824, "mmc_gpiod_request_cd" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc6ad82d4, "sdhci_start_signal_voltage_switch" },
	{ 0xdf51ac9c, "sdhci_cqe_irq" },
	{ 0x5f82c41c, "sdhci_send_tuning" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x45456ef2, "sdhci_set_bus_width" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xb89f0a08, "sdhci_end_tuning" },
};

MODULE_INFO(depends, "cqhci,sdhci,mmc_core");

MODULE_ALIAS("pci:v00001180d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d00000843sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000550sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000551sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002382sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002391sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d000095D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000084Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000880Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv00001093sd00007884bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F16sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002294sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002295sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002296sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DF5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A375sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DF8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016E6d00000670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000C202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017A0d00009750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017A0d00009755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017A0d0000E763sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc08sc05i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc08sc05i*");

MODULE_INFO(srcversion, "C0F0B36738F705CDB6BDECC");
