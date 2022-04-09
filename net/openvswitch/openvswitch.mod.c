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
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe95e3586, "nf_ct_tmpl_alloc" },
	{ 0xa72ea637, "__skb_vlan_pop" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd0aa26c1, "kmem_cache_alloc_node" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe1a8d7c9, "net_rwsem" },
	{ 0xbdbf8cbd, "nf_conntrack_in" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0xf7316fa3, "skb_mpls_push" },
	{ 0x53b954a2, "up_read" },
	{ 0x7a875fb5, "__skb_gso_segment" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x3f48bb55, "pskb_trim_rcsum_slow" },
	{ 0x55f14df8, "netlink_has_listeners" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf8803f63, "nf_ct_tmpl_free" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x75a80ed6, "dev_disable_lro" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0x7991d677, "nf_ct_nat_ext_add" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb5da3440, "ip_do_fragment" },
	{ 0xcf6f7e4c, "netdev_rx_handler_register" },
	{ 0xcad2408e, "nf_ct_get_tuplepr" },
	{ 0xd979cd0d, "peernet2id_alloc" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf00b6a13, "metadata_dst_alloc" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xd69e4840, "dev_get_by_name" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4f653e77, "netdev_master_upper_dev_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd2b2a781, "nf_conntrack_helper_try_module_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x62b114ed, "skb_zerocopy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x4d99c3b0, "nf_conncount_destroy" },
	{ 0x74f10948, "inet_proto_csum_replace4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd2071780, "__skb_checksum" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6dde679f, "skb_tx_error" },
	{ 0xb15b4109, "crc32c" },
	{ 0xfd8bfe38, "ipv6_find_hdr" },
	{ 0x39285def, "nf_ct_deliver_cached_events" },
	{ 0x85269c10, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xd33d2879, "inet_proto_csum_replace16" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xcb0ee2f5, "skb_zerocopy_headlen" },
	{ 0xa964a0ec, "netdev_master_upper_dev_link" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0x26d9d406, "skb_vlan_push" },
	{ 0xd32ebd95, "nf_conncount_init" },
	{ 0x8cdbdc97, "nf_ct_delete" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xc6d652bd, "nf_nat_icmpv6_reply_translation" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x3552a25f, "ip_defrag" },
	{ 0xc1a75c25, "nf_nat_helper_put" },
	{ 0xfb578fc5, "memset" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe5379788, "__nf_conntrack_confirm" },
	{ 0xffdc92a9, "nf_nat_icmp_reply_translation" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xea17ce47, "__skb_warn_lro_forwarding" },
	{ 0xbc00f80, "nf_nat_helper_try_module_get" },
	{ 0xda59b65, "free_netdev" },
	{ 0x183515ef, "skb_ensure_writable" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x7d11271e, "nla_put" },
	{ 0x24d22fd, "netdev_upper_dev_unlink" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0xb0abe1cf, "bpf_trace_run5" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xa07a37f0, "memchr" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xc9176f2f, "skb_mpls_update_lse" },
	{ 0xd90ad6b3, "ipv6_stub" },
	{ 0xb7c0f443, "sort" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4ea5d10, "ksize" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdfbcf889, "module_put" },
	{ 0x31670646, "dst_init" },
	{ 0xd1a9b5b9, "skb_vlan_pop" },
	{ 0xae782815, "skb_mpls_pop" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xdf20f1d0, "__nf_ct_expect_find" },
	{ 0xc47a2d0b, "nf_nat_setup_info" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xc66e0884, "nf_conncount_count" },
	{ 0x7f489ecf, "ipv6_skip_exthdr" },
	{ 0x9610d594, "skb_eth_push" },
	{ 0x6e33c5e0, "netlink_broadcast" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa25fce3f, "netdev_rx_handler_unregister" },
	{ 0xa08543a1, "nf_connlabels_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x7a9b509b, "nla_put_nohdr" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x7799899b, "nf_connlabels_replace" },
	{ 0xb912560d, "static_key_disable" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x89fcec8b, "skb_csum_hwoffload_help" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86814848, "ether_setup" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x9493fc86, "node_states" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xff2d96f4, "skb_pull_rcsum" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x7cf8823c, "nf_ct_seq_adjust" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4c7468d1, "netlink_set_err" },
	{ 0xc10a4898, "nf_nat_packet" },
	{ 0xc2e5ced6, "nf_conntrack_helper_put" },
	{ 0xd06249ec, "nf_ct_destroy_timeout" },
	{ 0x13db2fbf, "nf_ct_frag6_gather" },
	{ 0x3355c055, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x4ea591a4, "___pskb_trim" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0x8b4398ac, "nf_connlabels_put" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x60db40a8, "rtnl_delete_link" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x142a9428, "nf_ct_helper_ext_add" },
	{ 0x2bf28ceb, "__skb_ext_del" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xdc18925d, "__nf_ct_try_assign_helper" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x5c75b908, "skb_gso_validate_mac_len" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x5d74414a, "skb_eth_pop" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcfbb8700, "nla_reserve" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x88028517, "nsh_push" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x97ff35ff, "genl_notify" },
	{ 0x24e48d13, "skb_put" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0xba501375, "dev_fill_metadata_dst" },
	{ 0x1b461e30, "nf_nat_alloc_null_binding" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xd073f6fd, "__nla_put" },
	{ 0xf0937a14, "dev_get_stats" },
	{ 0xc8c68c9, "nf_ct_set_timeout" },
	{ 0xb4cc190b, "nf_conntrack_find_get" },
	{ 0x2782ab8b, "nsh_pop" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1f9b499f, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack,nf_nat,nf_conncount,libcrc32c,nf_defrag_ipv6,nsh");


MODULE_INFO(srcversion, "A67D51805B2F4EA34C70427");