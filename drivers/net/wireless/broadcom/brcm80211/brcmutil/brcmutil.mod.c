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
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x56470118, "__warn_printk" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xcd34d80, "skb_unlink" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xedca57ce, "skb_dequeue_tail" },
	{ 0xfb578fc5, "memset" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x24e48d13, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AC2E407EFC82EF84B7BB4B2");
