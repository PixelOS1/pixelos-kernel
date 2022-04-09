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
	{ 0x9b8776df, "gspca_disconnect" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x1ad4507c, "gspca_frame_add" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x15f4f10f, "usb_ifnum_to_if" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v04A5p3035d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0E25E53D56BF645B2FC4F57");
