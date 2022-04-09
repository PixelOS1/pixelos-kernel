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
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf9f92b38, "usb_add_hcd" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x59fbec7, "usb_remove_hcd" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x5c55bdd6, "__usb_create_hcd" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0x6631a567, "devm_clk_get_optional" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x86dc169d, "usb_put_hcd" },
	{ 0xae6453ee, "xhci_init_driver" },
	{ 0xb66c9bcc, "usb_hcd_is_primary_hcd" },
	{ 0xf6cf305e, "xhci_run" },
	{ 0x1915793e, "xhci_resume" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x422712d0, "devm_usb_get_phy_by_phandle" },
	{ 0x8fc215c2, "xhci_gen_setup" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xbda2b00, "devm_platform_get_and_ioremap_resource" },
	{ 0xf1fa7ef1, "xhci_suspend" },
	{ 0x8e0ecc69, "device_set_wakeup_capable" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x117bc1e6, "usb_hcd_platform_shutdown" },
	{ 0x81f466c5, "device_property_present" },
};

MODULE_INFO(depends, "xhci-hcd");

MODULE_ALIAS("acpi*:PNP0D10:*");

MODULE_INFO(srcversion, "572EEC45EB755FBFF075EF2");
