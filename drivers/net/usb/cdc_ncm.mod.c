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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0x8d20065e, "usb_altnum_to_altsetting" },
	{ 0xd15f0f60, "usbnet_resume" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x9f4d6962, "usbnet_probe" },
	{ 0xd3188bc4, "usbnet_link_change" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xc37b7ea4, "usbnet_disconnect" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xccbaeadf, "usbnet_get_link_ksettings_internal" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x13864ccb, "usbnet_stop" },
	{ 0x7d2ff728, "usbnet_update_max_qlen" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x4aafecd0, "netif_tx_lock" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe40cbb91, "usbnet_nway_reset" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x761ae28f, "usb_driver_claim_interface" },
	{ 0x311fe22f, "usbnet_get_drvinfo" },
	{ 0xec297bc5, "usbnet_start_xmit" },
	{ 0xa8378ebb, "usbnet_suspend" },
	{ 0x7d558074, "usbnet_get_link" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xf3292ce, "usbnet_read_cmd" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc70dc5a7, "usbnet_tx_timeout" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8417189d, "cdc_parse_cdc_header" },
	{ 0x294275a5, "usbnet_get_ethernet_addr" },
	{ 0x86afb1d6, "usbnet_skb_return" },
	{ 0xd6f46ea2, "usb_driver_release_interface" },
	{ 0x97d1db56, "usbnet_open" },
	{ 0x22895503, "usbnet_get_msglevel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x63bf1840, "netif_tx_unlock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x31852bc1, "usbnet_unlink_rx_urbs" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x15f4f10f, "usb_ifnum_to_if" },
	{ 0x932e515b, "usbnet_cdc_update_filter" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x4a57ee88, "usbnet_manage_power" },
	{ 0x35b99230, "usbnet_write_cmd" },
	{ 0x3582edd, "usbnet_set_msglevel" },
	{ 0x91247e08, "usbnet_set_rx_mode" },
};

MODULE_INFO(depends, "usbnet,cdc_ether");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "17C700A69DC1019D5872541");
