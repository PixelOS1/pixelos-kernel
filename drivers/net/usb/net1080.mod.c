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
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x57effe10, "usbnet_write_cmd_async" },
	{ 0x2f4c208f, "usbnet_get_endpoints" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x35b99230, "usbnet_write_cmd" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xf3292ce, "usbnet_read_cmd" },
	{ 0xb0e602eb, "memmove" },
	{ 0x24e48d13, "skb_put" },
	{ 0x459f3f88, "skb_push" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E2E13DA664F28278A0A277");
