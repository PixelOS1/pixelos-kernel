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
	{ 0xd93a9c2c, "release_sock" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x38f48af7, "put_user_ifreq" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x60db5ae0, "proc_create_seq_private" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x31c865cf, "sock_gettstamp" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x307eaf37, "skb_copy" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf90d3ed4, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf91c8bc0, "skb_realloc_headroom" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0x3c08c820, "proc_mkdir" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0xc23477d, "current_task" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x459f3f88, "skb_push" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x87f244b9, "sk_free" },
	{ 0x67d84bd0, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xa23e77f6, "register_snap_client" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x15950b0c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8761c95e, "datagram_poll" },
	{ 0x2999843c, "sock_register" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4aaa05cd, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1e652bf1, "__dev_get_by_name" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa271ea4a, "remove_proc_subtree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x4a855958, "unregister_snap_client" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x33fc2a31, "get_user_ifreq" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x705e1dc6, "dev_add_pack" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0x24e48d13, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3a9f0715, "sock_i_uid" },
	{ 0x958840a0, "dev_mc_add_global" },
	{ 0xfd6c3908, "skb_free_datagram" },
};

MODULE_INFO(depends, "psnap");


MODULE_INFO(srcversion, "F2495D8873595F38A7752F1");
