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
	{ 0xd15f0f60, "usbnet_resume" },
	{ 0xa8378ebb, "usbnet_suspend" },
	{ 0xc37b7ea4, "usbnet_disconnect" },
	{ 0x9f4d6962, "usbnet_probe" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x2f4c208f, "usbnet_get_endpoints" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x4acd1b7e, "usbnet_device_suggests_idle" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x86afb1d6, "usbnet_skb_return" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xb0e602eb, "memmove" },
	{ 0x459f3f88, "skb_push" },
	{ 0x24e48d13, "skb_put" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "6E94BB6D70A70DE46C39C66");
