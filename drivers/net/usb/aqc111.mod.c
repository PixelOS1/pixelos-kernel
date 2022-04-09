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
	{ 0x7ffd81fe, "ethtool_op_get_link" },
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
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x9467e045, "usb_driver_set_configuration" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x2f4c208f, "usbnet_get_endpoints" },
	{ 0xfb70323f, "usb_reset_configuration" },
	{ 0xd15f0f60, "usbnet_resume" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xf3292ce, "usbnet_read_cmd" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x3c30bb8f, "usbnet_read_cmd_nopm" },
	{ 0xa8378ebb, "usbnet_suspend" },
	{ 0x24e48d13, "skb_put" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x459f3f88, "skb_push" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x311fe22f, "usbnet_get_drvinfo" },
	{ 0xfdff7b3f, "usbnet_defer_kevent" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x57effe10, "usbnet_write_cmd_async" },
	{ 0x86afb1d6, "usbnet_skb_return" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "B5FD9473E9CB57733AAA579");
