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
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0x6f720dbc, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0x4e5fd603, "drm_atomic_helper_connector_reset" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x7f7e1b02, "drm_dp_dpcd_write" },
	{ 0x52f51679, "drm_helper_hpd_irq_event" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x75ff8ef3, "regmap_multi_reg_write" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xac84dd87, "drm_bridge_add" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xf7175300, "regmap_read" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x7adbc70b, "i2c_new_dummy_device" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x3ee0dd60, "anx_dp_aux_transfer" },
	{ 0xb0845b8b, "drm_connector_update_edid_property" },
	{ 0x5bcb8eca, "drm_get_edid" },
	{ 0x58a10589, "drm_dp_dpcd_read" },
	{ 0x5a8857da, "drm_add_edid_modes" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0xb23c0578, "drm_connector_register" },
	{ 0x8546d496, "drm_connector_attach_encoder" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0x9306c110, "drm_dp_aux_register" },
	{ 0x46f2a85c, "drm_dp_aux_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0x809712ff, "hdmi_avi_infoframe_pack" },
	{ 0x514774a4, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x9a2a64b5, "gpiod_get_value" },
	{ 0x37a0cba, "kfree" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0x15cab79, "drm_bridge_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,i2c-core,drm,regmap-i2c,analogix_dp");

MODULE_ALIAS("i2c:anx7814");

MODULE_INFO(srcversion, "2ACD7E4DE64741A8AEBD960");
