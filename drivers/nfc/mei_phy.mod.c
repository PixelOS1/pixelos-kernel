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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x830afbe6, "nfc_hci_recv_frame" },
	{ 0xf91ee1d0, "mei_cldev_set_drvdata" },
	{ 0x597dd436, "mei_cldev_register_rx_cb" },
	{ 0xebc692b2, "mei_cldev_get_drvdata" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8a36eba3, "mei_cldev_enable" },
	{ 0x37a02c29, "mei_cldev_send" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x542b776, "mei_cldev_recv" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x24e48d13, "skb_put" },
	{ 0x6ce574bc, "mei_cldev_disable" },
};

MODULE_INFO(depends, "hci,mei");


MODULE_INFO(srcversion, "B9205EFA65FCCF8F0652A00");
