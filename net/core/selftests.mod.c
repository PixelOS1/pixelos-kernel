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
	{ 0x307eaf37, "skb_copy" },
	{ 0x2124474, "ip_send_check" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x3444af24, "phy_loopback" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x67d84bd0, "dev_remove_pack" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1776f9ae, "udp4_hwcsum" },
	{ 0x82535f01, "__dev_direct_xmit" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x705e1dc6, "dev_add_pack" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x24e48d13, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
};

MODULE_INFO(depends, "libphy");


MODULE_INFO(srcversion, "DE433CD9224174F13DA07F3");
