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
	{ 0x9b02585d, "single_release" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x94216657, "seq_read" },
	{ 0xee111615, "param_ops_int" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x652032cb, "mac_pton" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x9493fc86, "node_states" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x9604dda, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xa6257a2f, "complete" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3e41ccff, "skb_checksum" },
	{ 0x1776f9ae, "udp4_hwcsum" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x4853003b, "pktgen_xfrm_outer_mode_output" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x2124474, "ip_send_check" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x459f3f88, "skb_push" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x1000e51, "schedule" },
	{ 0x6712eccf, "hrtimer_sleeper_start_expires" },
	{ 0x1f978c85, "hrtimer_init_sleeper" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x28b7b84a, "softnet_data" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd69e4840, "dev_get_by_name" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0xa916b694, "strnlen" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc6cbbc89, "capable" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x1bf9b7de, "kthread_bind" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x36a8a87e, "proc_create" },
	{ 0x3c08c820, "proc_mkdir" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x999e8297, "vfree" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0xf8af7c22, "__put_task_struct" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfb86ebc2, "__xfrm_state_destroy" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x4166aaa4, "__alloc_pages" },
	{ 0xfb578fc5, "memset" },
	{ 0x24e48d13, "skb_put" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdfbcf889, "module_put" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xc23477d, "current_task" },
	{ 0x92997ed8, "_printk" },
	{ 0x79037e4d, "proc_create_data" },
	{ 0xbc208b44, "proc_remove" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x618911fc, "numa_node" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xc4479bca, "xfrm_stateonly_find" },
	{ 0xb4b94e1a, "xfrm_state_lookup_byspi" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd349d253, "seq_printf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xe4345174, "single_open" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B36214BBFB75CFEBC4FE6A3");
