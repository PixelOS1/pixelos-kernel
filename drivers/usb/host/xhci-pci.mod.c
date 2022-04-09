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
	{ 0x17bdcb92, "__SCK__tp_func_xhci_dbg_quirks" },
	{ 0x8acb43bf, "usb_hcd_pci_pm_ops" },
	{ 0x15a69b6a, "usb_hcd_pci_shutdown" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xae6453ee, "xhci_init_driver" },
	{ 0xe1b0db2f, "pci_d3cold_disable" },
	{ 0xf1fa7ef1, "xhci_suspend" },
	{ 0x7f81befd, "usb_enable_intel_xhci_ports" },
	{ 0x1915793e, "xhci_resume" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0xf9f92b38, "usb_add_hcd" },
	{ 0xb5a1b061, "renesas_xhci_check_request_fw" },
	{ 0x31b784b2, "xhci_ext_cap_init" },
	{ 0xc8df617c, "usb_create_shared_hcd" },
	{ 0xc72eece2, "usb_hcd_pci_probe" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x4cec5ded, "__devm_reset_control_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xec4ab464, "pci_set_mwi" },
	{ 0x8fc215c2, "xhci_gen_setup" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xabf03fc3, "__SCT__tp_func_xhci_dbg_quirks" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x652d27a6, "__tracepoint_xhci_dbg_quirks" },
	{ 0xaf4014ff, "usb_amd_quirk_pll_check" },
	{ 0x4e51babb, "xhci_dbg_trace" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0xffff0d87, "xhci_shutdown" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0x9f9bf075, "usb_hcd_pci_remove" },
	{ 0x86dc169d, "usb_put_hcd" },
	{ 0x59fbec7, "usb_remove_hcd" },
	{ 0xb66c9bcc, "usb_hcd_is_primary_hcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xhci-hcd,xhci-pci-renesas");

MODULE_ALIAS("pci:v00001912d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i30*");

MODULE_INFO(srcversion, "15F87C6E54F604CBB479169");
