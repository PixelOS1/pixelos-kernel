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
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xc70dc5a7, "usbnet_tx_timeout" },
	{ 0xcf8cf058, "cdc_ncm_change_mtu" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0xec297bc5, "usbnet_start_xmit" },
	{ 0x13864ccb, "usbnet_stop" },
	{ 0x97d1db56, "usbnet_open" },
	{ 0xc37b7ea4, "usbnet_disconnect" },
	{ 0x9f4d6962, "usbnet_probe" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa2121b75, "in6_dev_finish_destroy" },
	{ 0x94bfce58, "__vlan_find_dev_deep_rcu" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xd90ad6b3, "ipv6_stub" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x86afb1d6, "usbnet_skb_return" },
	{ 0x69acdf38, "memcpy" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xa19b6951, "cdc_ncm_rx_verify_ndp16" },
	{ 0x25005691, "cdc_ncm_rx_verify_nth16" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x51163892, "cdc_ncm_fill_tx_frame" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xd1f2a25a, "usb_match_id" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x8403c491, "usb_cdc_wdm_register" },
	{ 0x3800e6e5, "cdc_ncm_bind_common" },
	{ 0xd3bd4da2, "cdc_ncm_select_altsetting" },
	{ 0xa8378ebb, "usbnet_suspend" },
	{ 0xd15f0f60, "usbnet_resume" },
	{ 0xb0f2d28b, "cdc_ncm_unbind" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1061d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1071d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "F6C662F4CF76360754210EA");
