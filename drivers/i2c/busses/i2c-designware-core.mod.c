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
	{ 0xaa10ea97, "__devm_regmap_init" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x815588a6, "clk_enable" },
	{ 0x4438b72f, "i2c_acpi_find_bus_speed" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xf7175300, "regmap_read" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x19db7fed, "i2c_add_numbered_adapter" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e195b73, "i2c_generic_scl_recovery" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x47680cbe, "i2c_recover_bus" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x550f3e05, "i2c_freq_mode_string" },
};

MODULE_INFO(depends, "i2c-core");


MODULE_INFO(srcversion, "49F1F8C6431CD27B7868B55");
