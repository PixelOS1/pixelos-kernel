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
	{ 0xa2b9ffb6, "v4l2_event_subdev_unsubscribe" },
	{ 0x8c6a8dbe, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x5bbc7864, "v4l2_ctrl_subdev_log_status" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x16163d75, "v4l2_async_register_subdev" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xda48e803, "media_entity_pads_init" },
	{ 0x65dff317, "v4l2_ctrl_new_std_menu_items" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfe577272, "v4l2_i2c_subdev_init" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9356c04f, "__v4l2_ctrl_handler_setup" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x644796ad, "v4l2_device_unregister_subdev" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0xf483910f, "v4l2_async_unregister_subdev" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9cd2564, "gpiod_direction_output" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,i2c-core,v4l2-async,mc");

MODULE_ALIAS("of:N*T*Covti,ov2640");
MODULE_ALIAS("of:N*T*Covti,ov2640C*");
MODULE_ALIAS("i2c:ov2640");

MODULE_INFO(srcversion, "3911D5F97F24C653DA53C07");
