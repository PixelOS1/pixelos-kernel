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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc07458fb, "nfcmrvl_nci_unregister_dev" },
	{ 0x3bf6dbee, "nfcmrvl_nci_recv_frame" },
	{ 0x5ca65702, "usb_get_from_anchor" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xad489959, "nfcmrvl_nci_register_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "nfcmrvl");

MODULE_ALIAS("usb:v1286p2046d*dc*dsc*dp*icFFisc04ip01in*");

MODULE_INFO(srcversion, "E4F2529DED570470765FF89");
