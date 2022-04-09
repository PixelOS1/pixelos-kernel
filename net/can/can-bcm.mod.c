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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xec8952cf, "can_rx_register" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0xe35d6993, "_proc_mkdir" },
	{ 0x31c865cf, "sock_gettstamp" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x6670153b, "can_proto_unregister" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x82595815, "proc_create_net_single" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xce489e24, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0xf90d3ed4, "sock_queue_rcv_skb" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc68fb0a5, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0xacff9338, "sock_efree" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x595bcc8b, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x87f244b9, "sk_free" },
	{ 0x722e0dfd, "dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0x46221b70, "can_send" },
	{ 0xdd9494ea, "__sock_recv_ts_and_drops" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8761c95e, "datagram_poll" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3207332, "can_proto_register" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x9fa69b02, "sk_error_report" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x32f8d392, "can_rx_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0x3e5b6f64, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfd6c3908, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "E959ACFB517D4BFA5F4FE02");
