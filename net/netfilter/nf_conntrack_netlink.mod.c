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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x76ad775d, "nfnetlink_subsys_unregister" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0x8f5dfbc7, "nfnetlink_subsys_register" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa785391e, "nf_ct_iterate_cleanup_net" },
	{ 0x8cdbdc97, "nf_ct_delete" },
	{ 0x7daf5909, "nf_ct_get_id" },
	{ 0xba53adab, "nla_policy_len" },
	{ 0xc446b429, "nf_ct_expect_iterate_net" },
	{ 0x768f83c9, "nf_ct_unlink_expect_report" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdf20f1d0, "__nf_ct_expect_find" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x97c3271b, "nf_ct_expect_related_report" },
	{ 0x1b6f3cc7, "nf_ct_expect_find_get" },
	{ 0x6e01067f, "nf_ct_remove_expectations" },
	{ 0x2ad29311, "nf_conntrack_eventmask_report" },
	{ 0x7799899b, "nf_connlabels_replace" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x45767070, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb4cc190b, "nf_conntrack_find_get" },
	{ 0xa59a810a, "nf_conntrack_free" },
	{ 0x1f9b499f, "nf_ct_ext_add" },
	{ 0xdc18925d, "__nf_ct_try_assign_helper" },
	{ 0x142a9428, "nf_ct_helper_ext_add" },
	{ 0xbe182c78, "__nf_conntrack_helper_find" },
	{ 0xe4282df9, "nf_conntrack_alloc" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0x553a521d, "nfnetlink_set_err" },
	{ 0xc4a625a8, "nfnetlink_send" },
	{ 0xc96306a2, "nfnetlink_has_listeners" },
	{ 0x45c4d7c6, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x754d539c, "strlen" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xd6e40c61, "nfnetlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0x1fce70b3, "nf_conntrack_count" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x37a0cba, "kfree" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8bd775e3, "nf_ct_helper_expectfn_find_by_name" },
	{ 0x6221585b, "nf_ct_expect_alloc" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xdfc27ca8, "nf_nat_hook" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x863b730a, "nf_ct_expect_put" },
	{ 0xb7fa52bc, "__netlink_dump_start" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0xe14c20e4, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7d11271e, "nla_put" },
	{ 0x6078f9c9, "nf_ct_l4proto_find" },
	{ 0xade677fb, "nf_conntrack_register_notifier" },
	{ 0x21a9f754, "nf_conntrack_unregister_notifier" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "DAD9D2E65247DBC5734ADC9");
