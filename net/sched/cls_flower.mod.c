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
	{ 0x891e9d93, "unregister_tcf_proto_ops" },
	{ 0x9ecb755d, "register_tcf_proto_ops" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x90b8afbe, "tcf_exts_validate_ex" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x1e652bf1, "__dev_get_by_name" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x7412dc77, "tcf_exts_dump_stats" },
	{ 0x3704c8d5, "tcf_exts_dump" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0xe0089ab0, "tcf_action_exec" },
	{ 0x83c1b08d, "skb_flow_dissect_meta" },
	{ 0x18e7429a, "__skb_flow_dissect" },
	{ 0x558956fb, "skb_flow_dissect_hash" },
	{ 0xc9829dfa, "skb_flow_dissect_ct" },
	{ 0xe7ad4d55, "skb_flow_dissect_tunnel_info" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8c38d7e8, "tc_setup_cb_reoffload" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x20978fb9, "idr_find" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x928aab17, "__put_net" },
	{ 0x851c40a4, "tcf_exts_destroy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8b018a01, "tcf_exts_terse_dump" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xae9e788a, "tcf_action_update_hw_stats" },
	{ 0x187953f6, "tc_setup_cb_call" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0xdfbcf889, "module_put" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xb397b089, "tc_cleanup_offload_action" },
	{ 0xf8adb67e, "tc_setup_cb_add" },
	{ 0x8030ea5e, "tc_setup_offload_action" },
	{ 0xcdc56b83, "flow_rule_alloc" },
	{ 0x8c0be41e, "tcf_exts_num_actions" },
	{ 0xcae1415, "tc_setup_cb_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xabeb9438, "skb_flow_dissector_init" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "165A0EFF6BD31A76F8BD67A");
