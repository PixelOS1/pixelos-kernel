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
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xda59b65, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x133536b8, "register_netdev" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8d20065e, "usb_altnum_to_altsetting" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "702E668BCF5697B2D430FE8");
