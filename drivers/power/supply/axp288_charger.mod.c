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
	{ 0xbd5a1957, "extcon_get_state" },
	{ 0x44414ff2, "iosf_mbi_unblock_punit_i2c_access" },
	{ 0x86f27420, "iosf_mbi_block_punit_i2c_access" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x4894cf3b, "devm_extcon_register_notifier" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9713db3, "devm_extcon_register_notifier_all" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x29a373c2, "devm_power_supply_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xc5e7e150, "extcon_get_extcon_dev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xf7175300, "regmap_read" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4d3468c, "power_supply_changed" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:axp288_charger");

MODULE_INFO(srcversion, "5F7530D448A7D676404D0BE");
