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
	{ 0xf6764891, "neigh_lookup" },
	{ 0x55995367, "inet_frag_kill" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x28674aa3, "dst_release" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x307eaf37, "skb_copy" },
	{ 0x4e987546, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0x46a8b418, "fqdir_exit" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9e8bd40d, "inet_frag_find" },
	{ 0xc7600825, "inet_frag_reasm_prepare" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0xa0098330, "inet_frags_fini" },
	{ 0x9b32ddab, "ieee802154_hdr_peek" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x722e0dfd, "dev_get_by_index" },
	{ 0x67d84bd0, "dev_remove_pack" },
	{ 0xe8a32f4e, "nd_tbl" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xabd6d088, "lowpan_header_decompress" },
	{ 0xeb00cd8, "fqdir_init" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xde0a9298, "inet_frag_reasm_finish" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x885ab948, "inet_frag_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x2e582364, "lowpan_unregister_netdevice" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4d1fb8d, "ieee802154_hdr_peek_addrs" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x8e95862f, "lowpan_register_netdevice" },
	{ 0x24598e8f, "inet_frags_init" },
	{ 0xc423b00a, "inet_frag_queue_insert" },
	{ 0x705e1dc6, "dev_add_pack" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0x24e48d13, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

MODULE_INFO(depends, "6lowpan,ieee802154");


MODULE_INFO(srcversion, "0DECA38EC2C0F0263C3A569");
