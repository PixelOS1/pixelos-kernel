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
	{ 0x922374d9, "ufshcd_runtime_resume" },
	{ 0xf18e533c, "ufshcd_runtime_suspend" },
	{ 0x3cd6cb65, "ufshcd_system_suspend" },
	{ 0x5abff8da, "ufshcd_resume_complete" },
	{ 0x2a536289, "ufshcd_suspend_prepare" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x4677d28c, "ufshcd_config_pwr_mode" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x39e60e9d, "debugfs_create_x32" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x35e60961, "dev_pm_qos_expose_latency_tolerance" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x92a74ee5, "ufshcd_uic_hibern8_exit" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4ddb5194, "ufshcd_init" },
	{ 0xca4d031f, "ufshcd_alloc_host" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x5cb85ccb, "ufshcd_dealloc_host" },
	{ 0xa04648e3, "ufshcd_remove" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0x867c1862, "ufshcd_shutdown" },
	{ 0x1dbdbe2c, "ufshcd_system_resume" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xfbeabbe6, "dev_pm_qos_hide_latency_tolerance" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x62a60b51, "ufshcd_dme_set_attr" },
	{ 0x4caf2c06, "ufshcd_dme_get_attr" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ufshcd-core");

MODULE_ALIAS("pci:v0000144Dd0000C00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000098FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051FFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054FFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4B7126D4A4C49D04743E174");
