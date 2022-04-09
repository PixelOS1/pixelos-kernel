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
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x89c207f0, "extcon_set_state_sync" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xb9713db3, "devm_extcon_register_notifier_all" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x6dbc2faa, "devm_extcon_dev_register" },
	{ 0xc89c60ff, "devm_extcon_dev_allocate" },
	{ 0x44414ff2, "iosf_mbi_unblock_punit_i2c_access" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xf7175300, "regmap_read" },
	{ 0x86f27420, "iosf_mbi_block_punit_i2c_access" },
	{ 0x761527a1, "put_device" },
	{ 0xc5e7e150, "extcon_get_extcon_dev" },
	{ 0x406c510c, "acpi_dev_get_first_match_dev" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x6a7a6845, "usb_role_switch_find_by_fwnode" },
	{ 0x7855a94f, "software_node_fwnode" },
	{ 0xda8e1302, "software_node_find_by_name" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xff42c374, "usb_role_switch_get_role" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0xbd5a1957, "extcon_get_state" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "roles");

MODULE_ALIAS("platform:axp288_extcon");

MODULE_INFO(srcversion, "5D606B4E4C1C3F5587CDECB");
