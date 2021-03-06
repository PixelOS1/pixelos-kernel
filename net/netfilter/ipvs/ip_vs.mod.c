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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0xe78b431, "nf_ct_netns_put" },
	{ 0x7e478053, "kernel_sendmsg" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xee111615, "param_ops_int" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x8c795089, "udp6_set_csum" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0xdfa6106a, "ip_local_out" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7650c19b, "sock_release" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdc918496, "nf_defrag_ipv6_enable" },
	{ 0xf5337c6e, "ipv4_update_pmtu" },
	{ 0x82595815, "proc_create_net_single" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2124474, "ip_send_check" },
	{ 0x7199dc7d, "sock_recvmsg" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xe0745ac2, "nf_ct_expect_init" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd65e4b2a, "sock_create_kern" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd2071780, "__skb_checksum" },
	{ 0x6b97c538, "skb_set_owner_w" },
	{ 0x999e8297, "vfree" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0x865d360, "__icmp_send" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb15b4109, "crc32c" },
	{ 0xfd8bfe38, "ipv6_find_hdr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf91c8bc0, "skb_realloc_headroom" },
	{ 0x39285def, "nf_ct_deliver_cached_events" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xa24600a, "nf_hook_slow" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x8cdbdc97, "nf_ct_delete" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3552a25f, "ip_defrag" },
	{ 0x3e41ccff, "skb_checksum" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xc23477d, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe5379788, "__nf_conntrack_confirm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x45e3b59b, "inet_addr_type" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x8993281, "inet_select_addr" },
	{ 0x56f6cc03, "nf_unregister_net_hooks" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x863b730a, "nf_ct_expect_put" },
	{ 0x6230f05, "ip_mc_join_group" },
	{ 0xfb8d6db5, "iov_iter_kvec" },
	{ 0x183515ef, "skb_ensure_writable" },
	{ 0x6221585b, "nf_ct_expect_alloc" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x7d11271e, "nla_put" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x4dbd099f, "ip_route_me_harder" },
	{ 0xdea72b84, "nf_conntrack_alter_reply" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x97c3271b, "nf_ct_expect_related_report" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x478c66d5, "ipv6_dev_get_saddr" },
	{ 0xb05fc310, "sysctl_rmem_max" },
	{ 0xfac8865f, "sysctl_wmem_max" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xdfbcf889, "module_put" },
	{ 0xafb02c45, "ipv6_sock_mc_join" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x7ec60e66, "ip6_route_output_flags" },
	{ 0x5d43f717, "nf_register_net_hooks" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xe9c5af57, "nf_unregister_sockopt" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf51cfa5a, "proc_create_net_data" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1e652bf1, "__dev_get_by_name" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xc114243d, "iptunnel_handle_offloads" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xdcd5ed55, "ip6_route_me_harder" },
	{ 0x33a0c36d, "ip6_output" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc1ffa749, "udp_set_csum" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x858f43ff, "nf_ct_netns_get" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x5cb584df, "nf_register_sockopt" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa1b06480, "ip_output" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x49269236, "ip6_local_out" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf5073623, "xfrm_lookup" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0x53f4af71, "icmp6_send" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x2e3dc0b0, "inet_get_local_port_range" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x8ddc6a19, "__ip_select_ident" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xb4cc190b, "nf_conntrack_find_get" },
	{ 0x1f9b499f, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack,nf_defrag_ipv6,libcrc32c");


MODULE_INFO(srcversion, "74AA13F7260507D02E11BCD");
