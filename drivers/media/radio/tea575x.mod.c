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
	{ 0xba288857, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa0f569b6, "video_device_release_empty" },
	{ 0xa9f007c9, "v4l2_ctrl_log_status" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x978e281e, "__video_register_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8834fe98, "video_unregister_device" },
	{ 0xb1eb885c, "v4l2_ctrl_subscribe_event" },
	{ 0xa85f262, "v4l2_fh_release" },
	{ 0xa916b694, "strnlen" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0xd595fd58, "v4l2_ctrl_handler_setup" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3000d0d6, "v4l2_fh_open" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0x9cc0f87c, "video_ioctl2" },
	{ 0x21b6ec5c, "v4l2_ctrl_poll" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "1137E254B0CB801DF4730CB");
