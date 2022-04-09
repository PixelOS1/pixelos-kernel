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
	{ 0x762eb776, "line6_read_serial_number" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xad7b40b, "line6_resume" },
	{ 0x341535ea, "line6_probe" },
	{ 0xaa4e62bd, "line6_disconnect" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x761ae28f, "usb_driver_claim_interface" },
	{ 0xe7966a11, "snd_card_add_dev_attr" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x39b01711, "line6_init_pcm" },
	{ 0x490fdb29, "line6_suspend" },
	{ 0x70d27a6a, "line6_send_raw_message" },
	{ 0xdfa8dca2, "line6_read_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xd6f46ea2, "usb_driver_release_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x5a4ffb89, "usb_control_msg_recv" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x15f4f10f, "usb_ifnum_to_if" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0x54781c3d, "usb_control_msg_send" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p5057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4159d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4156d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "730DA02D42B245BC0C46FA7");
