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
	{ 0x98333c7e, "line6_version_request_async" },
	{ 0xad7b40b, "line6_resume" },
	{ 0x341535ea, "line6_probe" },
	{ 0xb7e303a7, "line6_alloc_sysex_buffer" },
	{ 0xaa4e62bd, "line6_disconnect" },
	{ 0x1ab4d950, "line6_send_sysex_message" },
	{ 0x202a1b1b, "line6_midi_id" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xe7966a11, "snd_card_add_dev_attr" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x39b01711, "line6_init_pcm" },
	{ 0x490fdb29, "line6_suspend" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xb74b614, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4252d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5051d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p5044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p5050d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A6BBC0E57C11E329E6CB32B");
