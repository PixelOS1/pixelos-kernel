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
	{ 0x582cd715, "hci_unregister_dev" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x459f3f88, "skb_push" },
	{ 0x54a2d145, "hci_recv_frame" },
	{ 0x24e48d13, "skb_put" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xcd34d80, "skb_unlink" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc93577bc, "hci_free_dev" },
	{ 0xe1e9debf, "hci_register_dev" },
	{ 0xd00cee59, "hci_alloc_dev_priv" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x718b8b7, "bt_info" },
	{ 0x1564421, "request_firmware" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1B78857D6FB12E14298332");
