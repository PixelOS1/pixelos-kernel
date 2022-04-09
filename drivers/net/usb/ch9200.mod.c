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
	{ 0x8af62e49, "_dev_err" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xb60bbac0, "mii_nway_restart" },
	{ 0x2f4c208f, "usbnet_get_endpoints" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xfdff7b3f, "usbnet_defer_kevent" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xe45829b4, "mii_ethtool_gset" },
	{ 0x22529725, "mii_check_media" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v1A86pE092d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E0625C7BBC121829A0BC76");
