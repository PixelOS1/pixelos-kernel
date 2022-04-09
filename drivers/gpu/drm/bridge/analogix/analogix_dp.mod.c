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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xc0bc2470, "drm_panel_unprepare" },
	{ 0x7f7e1b02, "drm_dp_dpcd_write" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5bcb8eca, "drm_get_edid" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x9c717ab8, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0xd90aebf5, "devm_phy_get" },
	{ 0x4e5fd603, "drm_atomic_helper_connector_reset" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xf990dd, "drm_bridge_attach" },
	{ 0x9b285573, "drm_match_cea_mode" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x118c58a1, "drm_panel_prepare" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xee09ed35, "devm_ioremap_resource" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa8160a1b, "drm_atomic_helper_bridge_destroy_state" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0xf7175300, "regmap_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0xf7c71ce9, "phy_power_off" },
	{ 0x6f720dbc, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xb0845b8b, "drm_connector_update_edid_property" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdf956e9c, "phy_power_on" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x5a8857da, "drm_add_edid_modes" },
	{ 0x46f2a85c, "drm_dp_aux_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0xc8665f3d, "drm_panel_disable" },
	{ 0x2adb7bff, "drm_dp_stop_crc" },
	{ 0x4ca80989, "drm_dev_printk" },
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb37887f3, "drm_atomic_get_new_connector_for_encoder" },
	{ 0x8546d496, "drm_connector_attach_encoder" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf49c03e4, "drm_atomic_helper_bridge_reset" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x9a2a64b5, "gpiod_get_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x52f51679, "drm_helper_hpd_irq_event" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x4a03f284, "drm_panel_enable" },
	{ 0x58a10589, "drm_dp_dpcd_read" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x9306c110, "drm_dp_aux_register" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xf0472af8, "drm_panel_get_modes" },
	{ 0x2ca322df, "drm_dp_start_crc" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "16092B3B2243401054EB37F");
