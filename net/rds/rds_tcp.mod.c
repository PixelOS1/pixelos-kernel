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
	{ 0x72d2aef2, "sock_set_keepalive" },
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x35be7868, "sock_no_linger" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0xc1f5f9f4, "rds_trans_register" },
	{ 0x7e478053, "kernel_sendmsg" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x34b0df76, "sock_create_lite" },
	{ 0xb4652521, "ipv6_chk_addr" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xff8fd6d1, "rds_conn_path_drop" },
	{ 0xa4e58fcd, "tcp_sock_set_nodelay" },
	{ 0xb715888a, "tcp_sock_set_keepidle" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x7650c19b, "sock_release" },
	{ 0x7e5fa21c, "rds_inc_path_init" },
	{ 0x36087aa4, "rds_stats" },
	{ 0x973eec32, "rds_send_ping" },
	{ 0x9afb9510, "rds_conn_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd65e4b2a, "sock_create_kern" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd054e53c, "rds_recv_incoming" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xff7d12f3, "rds_connect_path_complete" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x4fd8c016, "pskb_extract" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x45e3b59b, "inet_addr_type" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xd6bfe6d4, "rds_info_register_func" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2a215aea, "rds_inc_put" },
	{ 0x85e4e520, "rds_stats_info_copy" },
	{ 0xc2dab779, "rds_info_copy" },
	{ 0x82b24054, "kernel_sock_shutdown" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0x6cc4e470, "rds_send_path_drop_acked" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc2f90dce, "rds_conn_destroy" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa467af, "rds_wq" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{  0xde996, "tcp_sock_set_keepcnt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xfa2c10ac, "rds_info_deregister_func" },
	{ 0x82eb6f5d, "rds_trans_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0x45a4781e, "rds_addr_cmp" },
	{ 0x9a788d63, "rds_conn_path_connect_if_down" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xd3fb201b, "tcp_read_sock" },
	{ 0xd13fed89, "rds_send_path_reset" },
	{ 0x64528b8e, "tcp_sock_set_cork" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xfd22dd56, "rds_cong_map_updated" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x200b2041, "in6addr_any" },
	{ 0xe1bac3b5, "tcp_sock_set_keepintvl" },
};

MODULE_INFO(depends, "rds");


MODULE_INFO(srcversion, "0A490C56EC21B4805CC1494");
