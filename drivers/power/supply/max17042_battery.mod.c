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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x58127f8d, "power_supply_am_i_supplied" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x29a373c2, "devm_power_supply_register" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xf7175300, "regmap_read" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x4d3468c, "power_supply_changed" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:max17042");
MODULE_ALIAS("i2c:max17047");
MODULE_ALIAS("i2c:max17050");
MODULE_ALIAS("i2c:max17055");
MODULE_ALIAS("i2c:max77849-battery");
MODULE_ALIAS("acpi*:MAX17047:*");

MODULE_INFO(srcversion, "C57EDE1D46BB5A44C241DF6");
