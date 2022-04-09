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
	{ 0x5f919f9e, "tcf_classify" },
	{ 0xd4a14d02, "__qdisc_calculate_pkt_len" },
	{ 0x92997ed8, "_printk" },
	{ 0xc6a30697, "qdisc_hash_add" },
	{ 0x5e9a01ce, "gen_new_estimator" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x7533928b, "qdisc_class_hash_grow" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0xf630261, "gen_replace_estimator" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x25bbc683, "qdisc_put" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x70ad0746, "tcf_block_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa4b13ca9, "noop_qdisc" },
	{ 0x88aaab04, "qdisc_create_dflt" },
	{ 0x24d0fd15, "pfifo_qdisc_ops" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xbf3d7563, "qdisc_tree_reduce_backlog" },
	{ 0xc4c6b4c2, "qdisc_reset" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0xde8b54f2, "tcf_block_get" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc19a048f, "gnet_stats_copy_app" },
	{ 0x6e4ab646, "gnet_stats_copy_queue" },
	{ 0x1cd39b69, "gnet_stats_copy_rate_est" },
	{ 0xafa08371, "gnet_stats_copy_basic" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8D5DE35389A5DAC9956946D");
