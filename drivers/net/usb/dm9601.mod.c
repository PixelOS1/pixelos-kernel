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
	{ 0xea394c50, "usbnet_set_link_ksettings_mii" },
	{ 0x9af9bf51, "usbnet_get_link_ksettings_mii" },
	{ 0xe40cbb91, "usbnet_nway_reset" },
	{ 0x3582edd, "usbnet_set_msglevel" },
	{ 0x22895503, "usbnet_get_msglevel" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xc70dc5a7, "usbnet_tx_timeout" },
	{ 0x8f5117d8, "usbnet_change_mtu" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0xec297bc5, "usbnet_start_xmit" },
	{ 0x13864ccb, "usbnet_stop" },
	{ 0x97d1db56, "usbnet_open" },
	{ 0xd15f0f60, "usbnet_resume" },
	{ 0xa8378ebb, "usbnet_suspend" },
	{ 0xc37b7ea4, "usbnet_disconnect" },
	{ 0x9f4d6962, "usbnet_probe" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xb60bbac0, "mii_nway_restart" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x2f4c208f, "usbnet_get_endpoints" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf3292ce, "usbnet_read_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x35b99230, "usbnet_write_cmd" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd3188bc4, "usbnet_link_change" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x57effe10, "usbnet_write_cmd_async" },
	{ 0xcfe23d5f, "generic_mii_ioctl" },
	{ 0x311fe22f, "usbnet_get_drvinfo" },
	{ 0x8743402b, "mii_link_ok" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xe45829b4, "mii_ethtool_gset" },
	{ 0x22529725, "mii_check_media" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xfb578fc5, "memset" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3427d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "97ED2D0943C55EF4A70380C");
