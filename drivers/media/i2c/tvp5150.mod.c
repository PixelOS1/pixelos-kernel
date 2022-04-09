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
	{ 0xee111615, "param_ops_int" },
	{ 0xa2b9ffb6, "v4l2_event_subdev_unsubscribe" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x16163d75, "v4l2_async_register_subdev" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x65dff317, "v4l2_ctrl_new_std_menu_items" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0xfe577272, "v4l2_i2c_subdev_init" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xdbce8bb, "media_entity_find_link" },
	{ 0x47907645, "media_entity_remote_pad" },
	{ 0x1bfb9a7c, "media_create_pad_link" },
	{ 0x5660bee0, "media_device_register_entity" },
	{ 0xda48e803, "media_entity_pads_init" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xd595fd58, "v4l2_ctrl_handler_setup" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0xf483910f, "v4l2_async_unregister_subdev" },
	{ 0x12b41126, "media_device_unregister_entity" },
	{ 0x612ddce5, "v4l2_fwnode_connector_free" },
	{ 0x8c6a8dbe, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x1c18ad4, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x652404e6, "v4l2_subdev_notify_event" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf7175300, "regmap_read" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,i2c-core,v4l2-async,regmap-i2c,mc,v4l2-fwnode");

MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "0692426C4E65CCC39B8D784");
