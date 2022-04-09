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
	{ 0x25345a40, "crypto_alloc_skcipher" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0x53b954a2, "up_read" },
	{ 0x37037400, "skb_to_sgvec" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7e478053, "kernel_sendmsg" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0x38dcc0b, "bpf_trace_run7" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe35d6993, "_proc_mkdir" },
	{ 0x418dba4d, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x7adc0fbf, "rb_replace_node_rcu" },
	{ 0x7650c19b, "sock_release" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x307eaf37, "skb_copy" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xce489e24, "sock_no_getname" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2c913f97, "generic_key_instantiate" },
	{ 0x3e0d03b7, "request_key_tag" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc622556f, "prepare_to_wait_exclusive" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6b9d1bdd, "ip_sock_set_recverr" },
	{ 0x33c74099, "keyring_search" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x4094f035, "udp_sock_create6" },
	{ 0xbc208b44, "proc_remove" },
	{ 0x45ef50b6, "setup_udp_tunnel_sock" },
	{ 0x63dcb58f, "crypto_alloc_sync_skcipher" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0x1deb7ad8, "key_validate" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x3df4f3a, "key_revoke" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x8466b02b, "__sock_recv_wifi_status" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xc23477d, "current_task" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xd2c99738, "__kmalloc_track_caller" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x954f099c, "idr_preload" },
	{ 0x82b24054, "kernel_sock_shutdown" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4886abc9, "sock_wake_async" },
	{ 0x87f244b9, "sk_free" },
	{ 0xb0abe1cf, "bpf_trace_run5" },
	{ 0x6626afca, "down" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1935ab06, "ip_sock_set_mtu_discover" },
	{ 0x4796238, "sock_enable_timestamps" },
	{ 0xa07a37f0, "memchr" },
	{ 0x5efde8e6, "proc_doulongvec_ms_jiffies_minmax" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9c90320f, "key_put" },
	{ 0x657ef943, "__sock_recv_timestamp" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x15950b0c, "proto_register" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7ec60e66, "ip6_route_output_flags" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x2999843c, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x4aaa05cd, "sock_alloc_send_skb" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x21b84b5e, "put_cmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf51cfa5a, "proc_create_net_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xca4dfe81, "register_key_type" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xc84a0a7e, "seq_hlist_start_rcu" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x77d45a5f, "key_instantiate_and_link" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x716ba5e7, "csum_and_copy_from_iter" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x502e6667, "sock_dequeue_err_skb" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x253b868b, "key_type_keyring" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x46f1dcbd, "unregister_key_type" },
	{ 0xcf2a6966, "up" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x51c60bea, "bpf_trace_run6" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xd071739c, "udp_sock_create4" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0xff36afd2, "key_alloc" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "AF5264C2A241BB15CFDD6B4");