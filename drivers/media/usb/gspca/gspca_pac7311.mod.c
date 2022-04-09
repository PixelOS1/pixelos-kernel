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
	{ 0x9526bb9, "gspca_suspend" },
	{ 0x56d26148, "gspca_dev_probe" },
	{ 0x751fac80, "gspca_resume" },
	{ 0x27074bf6, "v4l2_ctrl_g_ctrl" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0x9b8776df, "gspca_disconnect" },
	{ 0x85987a8, "gspca_coarse_grained_expo_autogain" },
	{ 0x331337dc, "input_event" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7f03de57, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x1ad4507c, "gspca_frame_add" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0xa9e94dda, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v093Ap2600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap260Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap260Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A98CCF95B4E78B292D7350D");
