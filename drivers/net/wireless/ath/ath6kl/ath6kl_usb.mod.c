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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa4335e53, "ath6kl_core_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a9c9c7, "ath6kl_core_cleanup" },
	{ 0x9584185d, "ath6kl_dbg" },
	{ 0xf20be5d, "ath6kl_core_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x645443bf, "ath6kl_stop_txrx" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xf8a48766, "ath6kl_core_init" },
	{ 0x470af718, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x17ee195, "ath6kl_core_rx_complete" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3bd869d3, "ath6kl_core_tx_complete" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "ath6kl_core");

MODULE_ALIAS("usb:v0CF3p9375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p9374d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E405A4B4C69E059DEBEAF5E");
