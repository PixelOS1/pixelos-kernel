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
	{ 0xf5614cf6, "nf_ct_extend_unregister" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x8e92f7c4, "static_key_slow_inc" },
	{ 0x22d60537, "tcf_frag_xmit_count" },
	{ 0x4d1b1eb9, "tcf_unregister_action" },
	{ 0x445be109, "nf_ct_extend_register" },
	{ 0x24dce4b1, "tcf_register_action" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x9bcaa452, "tcf_action_set_ctrlact" },
	{ 0x85798a34, "tcf_idr_cleanup" },
	{ 0xd3b04af6, "tcf_idr_create_from_flags" },
	{ 0x4fbba5a8, "tcf_idr_release" },
	{ 0x24a3e5f9, "tcf_chain_put_by_act" },
	{ 0xe95e3586, "nf_ct_tmpl_alloc" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5acae1e6, "tcf_action_check_ctrlact" },
	{ 0x73d3ccc2, "tcf_idr_check_alloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xdcd3f907, "nf_flow_table_init" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x6fb49676, "queue_rcu_work" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8cdbdc97, "nf_ct_delete" },
	{ 0xe5379788, "__nf_conntrack_confirm" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x1f9b499f, "nf_ct_ext_add" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7799899b, "nf_connlabels_replace" },
	{ 0x7991d677, "nf_ct_nat_ext_add" },
	{ 0x3f48bb55, "pskb_trim_rcsum_slow" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x3552a25f, "ip_defrag" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x681485ba, "flow_offload_free" },
	{ 0xfcff544e, "flow_offload_add" },
	{ 0xbe68efca, "flow_offload_alloc" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x39285def, "nf_ct_deliver_cached_events" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x13db2fbf, "nf_ct_frag6_gather" },
	{ 0xfd8bfe38, "ipv6_find_hdr" },
	{ 0x459f3f88, "skb_push" },
	{ 0xbdbf8cbd, "nf_conntrack_in" },
	{ 0xff2d96f4, "skb_pull_rcsum" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd453d62a, "flow_offload_teardown" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd3969bfd, "nf_ct_acct_add" },
	{ 0xa2413d8a, "flow_offload_refresh" },
	{ 0x94dac0a0, "flow_offload_lookup" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7d11271e, "nla_put" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc6d652bd, "nf_nat_icmpv6_reply_translation" },
	{ 0x7f489ecf, "ipv6_skip_exthdr" },
	{ 0xc47a2d0b, "nf_nat_setup_info" },
	{ 0xffdc92a9, "nf_nat_icmp_reply_translation" },
	{ 0x1b461e30, "nf_nat_alloc_null_binding" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xc10a4898, "nf_nat_packet" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x92997ed8, "_printk" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa08543a1, "nf_connlabels_get" },
	{ 0x3a40b0d8, "tcf_idr_search" },
	{ 0xdfbcf889, "module_put" },
	{ 0xce807a25, "up_write" },
	{ 0x359ef8f3, "flow_block_cb_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x57bc19d2, "down_write" },
	{ 0x5a57102e, "nf_flow_table_free" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x54a73e0f, "tcf_generic_walker" },
	{ 0x3737463e, "tcf_action_update_stats" },
	{ 0x8b4398ac, "nf_connlabels_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x6adf3b0d, "tcf_idrinfo_destroy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_flow_table,nf_nat,nf_defrag_ipv6");


MODULE_INFO(srcversion, "9BB2A893C25B7437B1491CD");
