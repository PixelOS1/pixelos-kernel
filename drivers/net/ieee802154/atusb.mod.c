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
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfa1483a4, "ieee802154_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x2ac5a4e0, "ieee802154_alloc_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb7deb7c0, "ieee802154_free_hw" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x2a4dae5, "ieee802154_unregister_hw" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x24e48d13, "skb_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0x5ca65702, "usb_get_from_anchor" },
	{ 0xa3045246, "ieee802154_xmit_complete" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0x27f08063, "ieee802154_wake_queue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x95a99855, "ieee802154_rx_irqsafe" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("usb:v20B7p1540d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "8EEA032C2FC3D1914E6B315");
