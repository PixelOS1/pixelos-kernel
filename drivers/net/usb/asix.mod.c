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
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe45829b4, "mii_ethtool_gset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0xd15f0f60, "usbnet_resume" },
	{ 0x6d1b375f, "phy_do_ioctl_running" },
	{ 0x8e6b1a9e, "net_selftest_get_count" },
	{ 0xa4394e71, "phy_stop" },
	{ 0x9f4d6962, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd4dfd890, "__devm_mdiobus_register" },
	{ 0xd3188bc4, "usbnet_link_change" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x5d34fc48, "phy_ethtool_nway_reset" },
	{ 0xc37b7ea4, "usbnet_disconnect" },
	{ 0xcfe23d5f, "generic_mii_ioctl" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x13864ccb, "usbnet_stop" },
	{ 0x7d2ff728, "usbnet_update_max_qlen" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0x74d6d752, "net_selftest" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x6d389c68, "devm_mdiobus_alloc_size" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0x9eb69b23, "phy_print_status" },
	{ 0xe40cbb91, "usbnet_nway_reset" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xcc2400bd, "phy_start" },
	{ 0xb60bbac0, "mii_nway_restart" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xdb138d2e, "eth_platform_get_mac_address" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0x2f4c208f, "usbnet_get_endpoints" },
	{ 0x311fe22f, "usbnet_get_drvinfo" },
	{ 0x459f3f88, "skb_push" },
	{ 0x3c30bb8f, "usbnet_read_cmd_nopm" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xec297bc5, "usbnet_start_xmit" },
	{ 0xa8378ebb, "usbnet_suspend" },
	{ 0x83e26230, "phy_suspend" },
	{ 0x7d558074, "usbnet_get_link" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x92409002, "usbnet_write_cmd_nopm" },
	{ 0x88f15d51, "phy_ethtool_get_link_ksettings" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0xf3292ce, "usbnet_read_cmd" },
	{ 0x9af9bf51, "usbnet_get_link_ksettings_mii" },
	{ 0xc70dc5a7, "usbnet_tx_timeout" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9f14a8c0, "genphy_resume" },
	{ 0x86afb1d6, "usbnet_skb_return" },
	{ 0x97d1db56, "usbnet_open" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x22529725, "mii_check_media" },
	{ 0x22895503, "usbnet_get_msglevel" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xea394c50, "usbnet_set_link_ksettings_mii" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x31852bc1, "usbnet_unlink_rx_urbs" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0xe8bbaf9d, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfd1c647, "phy_attached_info" },
	{ 0xc090c376, "net_selftest_get_strings" },
	{ 0x57effe10, "usbnet_write_cmd_async" },
	{ 0x8f5117d8, "usbnet_change_mtu" },
	{ 0x3d07ff5f, "phy_connect" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8743402b, "mii_link_ok" },
	{ 0xb0e602eb, "memmove" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x35b99230, "usbnet_write_cmd" },
	{ 0x3582edd, "usbnet_set_msglevel" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "mii,libphy,usbnet,selftests,mdio_devres");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C9B5EEDE361C0F3C6367C15");
