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
	{ 0xcc6a8e11, "unregister_qdisc" },
	{ 0xfb5b75a3, "register_qdisc" },
	{ 0x7a875fb5, "__skb_gso_segment" },
	{ 0x330ba3c0, "netif_skb_features" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x5f919f9e, "tcf_classify" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xde8b54f2, "tcf_block_get" },
	{ 0x346e4b88, "qdisc_watchdog_init" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x71c43c8c, "qdisc_watchdog_schedule_range_ns" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xbf3d7563, "qdisc_tree_reduce_backlog" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6e4ab646, "gnet_stats_copy_queue" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x3ff39b7, "nf_ct_get_tuple_skb" },
	{ 0x1ddd643c, "flow_hash_from_keys" },
	{ 0x18e7429a, "__skb_flow_dissect" },
	{ 0xc9831ad7, "flow_keys_dissector" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x70ad0746, "tcf_block_put" },
	{ 0xb2cdf8b9, "qdisc_watchdog_cancel" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6307E213B4F864DF4C0064E");
