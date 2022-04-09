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
	{ 0x4d3468c, "power_supply_changed" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x58127f8d, "power_supply_am_i_supplied" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x25dd666b, "power_supply_get_battery_info" },
	{ 0x29a373c2, "devm_power_supply_register" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x9866dd4e, "device_property_read_u8_array" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x1dd1a3ec, "power_supply_put_battery_info" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd63347d5, "regmap_raw_read" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xd4f58ba1, "regmap_raw_write" },
	{ 0xf7175300, "regmap_read" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Ccellwise,cw2015");
MODULE_ALIAS("of:N*T*Ccellwise,cw2015C*");

MODULE_INFO(srcversion, "2E807E9A5E42D711AA54D80");
