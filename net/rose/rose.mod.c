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
	{ 0xff80ab3, "skb_queue_head" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x60db5ae0, "proc_create_seq_private" },
	{ 0xb2666ec2, "skb_append" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4502c65a, "asc2ax" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x3f1f9b5c, "send_sig" },
	{ 0x31c865cf, "sock_gettstamp" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2ae70342, "ax25_linkfail_release" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6b97c538, "skb_set_owner_w" },
	{ 0x45d1abed, "ax25_register_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0xac47c400, "__sock_queue_rcv_skb" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0x61fe279f, "ax25_find_cb" },
	{ 0xc23477d, "current_task" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0xc16ba91d, "ax25_listen_release" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xda59b65, "free_netdev" },
	{ 0xd43ecbf1, "null_ax25_address" },
	{ 0x133536b8, "register_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x87f244b9, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x242852b9, "ax25_uid_policy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x3620f016, "sk_filter_trim_cap" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x81ffe1a8, "ax25_send_frame" },
	{ 0x15950b0c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8761c95e, "datagram_poll" },
	{ 0x2999843c, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4aaa05cd, "sock_alloc_send_skb" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1e652bf1, "__dev_get_by_name" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8ede9e26, "ax25_protocol_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6b66c154, "ax25_listen_register" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14cecd59, "ax25_display_timer" },
	{ 0xc1444946, "ax25cmp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xee02e420, "ax25_findbyuid" },
	{ 0x6429c02d, "ax25_linkfail_register" },
	{ 0x53dea1ff, "ax2asc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfd6c3908, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "AA72CAAB800BDB4B10A006C");
