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
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4d3468c, "power_supply_changed" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x89c207f0, "extcon_set_state_sync" },
	{ 0x25dd666b, "power_supply_get_battery_info" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x18bc4049, "power_supply_register" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x6dbc2faa, "devm_extcon_dev_register" },
	{ 0xc89c60ff, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x96848186, "scnprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xc7e9ea04, "power_supply_unregister" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x81f466c5, "device_property_present" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x1f070f13, "rdev_get_drvdata" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf350a2ce, "devm_regulator_register" },
	{ 0xbd932ca9, "power_supply_set_input_current_limit_from_supplier" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Cti,bq24190");
MODULE_ALIAS("of:N*T*Cti,bq24190C*");
MODULE_ALIAS("of:N*T*Cti,bq24192");
MODULE_ALIAS("of:N*T*Cti,bq24192C*");
MODULE_ALIAS("of:N*T*Cti,bq24192i");
MODULE_ALIAS("of:N*T*Cti,bq24192iC*");
MODULE_ALIAS("of:N*T*Cti,bq24196");
MODULE_ALIAS("of:N*T*Cti,bq24196C*");
MODULE_ALIAS("i2c:bq24190");
MODULE_ALIAS("i2c:bq24192");
MODULE_ALIAS("i2c:bq24192i");
MODULE_ALIAS("i2c:bq24196");

MODULE_INFO(srcversion, "191F6059423EB56A14C2433");
