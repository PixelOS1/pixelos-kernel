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
	{ 0xc898c754, "orinoco_tx_timeout" },
	{ 0x9eb6d331, "orinoco_change_mtu" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0xe92dd678, "orinoco_set_multicast_list" },
	{ 0xe1931fb9, "orinoco_stop" },
	{ 0x5342be9c, "orinoco_open" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xee435611, "orinoco_process_xmit_skb" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x27890c62, "orinoco_if_add" },
	{ 0x2142157a, "orinoco_init" },
	{ 0x1564421, "request_firmware" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x46167ef1, "alloc_orinocodev" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x85862401, "free_orinocodev" },
	{ 0x42f1cc7d, "wiphy_unregister" },
	{ 0x16485da1, "orinoco_if_del" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x8a902ef3, "__orinoco_ev_rx" },
	{ 0x4c404ca3, "__orinoco_ev_info" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x92997ed8, "_printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "orinoco,cfg80211");

MODULE_ALIAS("usb:v049Fp001Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v047Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D98p0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D9Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E7Cp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5002d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5B11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p7011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1630pFF81d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep047Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8B0CAA56D0E75A0204F7E13");
