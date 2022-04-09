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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x152c5ced, "usb_role_switch_register" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xb48f0638, "software_node_register" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa805ecfc, "acpi_release_global_lock" },
	{ 0xc9f34c1d, "acpi_acquire_global_lock" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x1690b503, "usb_role_switch_get_drvdata" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x7855a94f, "software_node_fwnode" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "roles");

MODULE_ALIAS("platform:intel_xhci_usb_sw");

MODULE_INFO(srcversion, "4CBB70C26F5F80A3F88E793");
