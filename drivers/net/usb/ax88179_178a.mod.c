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
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xe40cbb91, "usbnet_nway_reset" },
	{ 0x3582edd, "usbnet_set_msglevel" },
	{ 0x22895503, "usbnet_get_msglevel" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xc70dc5a7, "usbnet_tx_timeout" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0xec297bc5, "usbnet_start_xmit" },
	{ 0x13864ccb, "usbnet_stop" },
	{ 0x97d1db56, "usbnet_open" },
	{ 0xc37b7ea4, "usbnet_disconnect" },
	{ 0x9f4d6962, "usbnet_probe" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x7d2ff728, "usbnet_update_max_qlen" },
	{ 0x2f4c208f, "usbnet_get_endpoints" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdb138d2e, "eth_platform_get_mac_address" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xb60bbac0, "mii_nway_restart" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe45829b4, "mii_ethtool_gset" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xd15f0f60, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa8378ebb, "usbnet_suspend" },
	{ 0x92409002, "usbnet_write_cmd_nopm" },
	{ 0x35b99230, "usbnet_write_cmd" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf3292ce, "usbnet_read_cmd" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x3c30bb8f, "usbnet_read_cmd_nopm" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x57effe10, "usbnet_write_cmd_async" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xd3188bc4, "usbnet_link_change" },
	{ 0xcfe23d5f, "generic_mii_ioctl" },
	{ 0x1156afa, "mii_ethtool_get_link_ksettings" },
	{ 0x10783aeb, "mii_ethtool_set_link_ksettings" },
	{ 0x86afb1d6, "usbnet_skb_return" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0179d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AB908D1FAF80537914B1F69");
