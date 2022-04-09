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
	{ 0xf9a482f9, "msleep" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x37e88e86, "rt2x00lib_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf21fd35b, "rt2x00lib_dmastart" },
	{ 0x44da8cc4, "rt2x00queue_flush_queue" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xc395ea6d, "rt2x00queue_for_each_entry" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf962f60, "rt2x00queue_start_queue" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfb66527a, "rt2x00lib_remove_dev" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xfba3319d, "rt2x00queue_get_entry" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0xbf1182a2, "rt2x00lib_rxdone" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0xed990c66, "rt2x00lib_txdone_noinfo" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xaae2ddcd, "rt2x00lib_dmadone" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x5135626, "rt2x00lib_probe_dev" },
	{ 0x43aa46ef, "rt2x00queue_stop_queue" },
	{ 0x7614d970, "rt2x00lib_suspend" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "B6D6E998F10E2B42CD4BEDA");
