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
	{ 0x78c2054, "param_ops_bool" },
	{ 0xe8bbaf9d, "phy_ethtool_set_link_ksettings" },
	{ 0x88f15d51, "phy_ethtool_get_link_ksettings" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0x5d34fc48, "phy_ethtool_nway_reset" },
	{ 0x3582edd, "usbnet_set_msglevel" },
	{ 0x22895503, "usbnet_get_msglevel" },
	{ 0x311fe22f, "usbnet_get_drvinfo" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xc70dc5a7, "usbnet_tx_timeout" },
	{ 0x8f5117d8, "usbnet_change_mtu" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0xec297bc5, "usbnet_start_xmit" },
	{ 0x13864ccb, "usbnet_stop" },
	{ 0x97d1db56, "usbnet_open" },
	{ 0xc37b7ea4, "usbnet_disconnect" },
	{ 0x9f4d6962, "usbnet_probe" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xfd1c647, "phy_attached_info" },
	{ 0x8b64a28c, "phy_connect_direct" },
	{ 0x701a3149, "phy_find_first" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x8b9e8fd9, "platform_get_ethdev_address" },
	{ 0x2f4c208f, "usbnet_get_endpoints" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa8378ebb, "usbnet_suspend" },
	{ 0xa45472d6, "phy_init_hw" },
	{ 0xd15f0f60, "usbnet_resume" },
	{ 0x3bbf56e9, "phy_get_pause" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x57effe10, "usbnet_write_cmd_async" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1194b4a6, "genphy_read_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf3292ce, "usbnet_read_cmd" },
	{ 0x3c30bb8f, "usbnet_read_cmd_nopm" },
	{ 0x35b99230, "usbnet_write_cmd" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92409002, "usbnet_write_cmd_nopm" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0xf4936f92, "usb_autopm_get_interface_no_resume" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x86afb1d6, "usbnet_skb_return" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xbd6841d4, "crc16" },
	{ 0x94c6ef8, "phy_mii_ioctl" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0x9eb69b23, "phy_print_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0xa4394e71, "phy_stop" },
	{ 0xcc2400bd, "phy_start" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xfdff7b3f, "usbnet_defer_kevent" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x459f3f88, "skb_push" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy,usbnet");

MODULE_ALIAS("usb:v0424p9500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424pEC00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9903d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9905d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9906d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9907d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9908d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9909d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E08d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "03FB90009E591A565D678B2");
