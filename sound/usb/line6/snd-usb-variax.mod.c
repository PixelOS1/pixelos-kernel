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
	{ 0x2d3385d3, "system_wq" },
	{ 0x98333c7e, "line6_version_request_async" },
	{ 0xad7b40b, "line6_resume" },
	{ 0x341535ea, "line6_probe" },
	{ 0xaa4e62bd, "line6_disconnect" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x490fdb29, "line6_suspend" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc7489e9b, "line6_send_raw_message_async" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xca691c4e, "snd_card_register" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p534Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D89A1DD411DBFCF34E2F6C2");
