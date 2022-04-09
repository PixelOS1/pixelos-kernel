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
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf3c35a84, "netdev_notice" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x133536b8, "register_netdev" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x54781c3d, "usb_control_msg_send" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x5a4ffb89, "usb_control_msg_recv" },
	{ 0xda59b65, "free_netdev" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9D792A5F15628CCF9B95031");
