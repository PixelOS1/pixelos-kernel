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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xec8952cf, "can_rx_register" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x31c865cf, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6670153b, "can_proto_unregister" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf90d3ed4, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xab768e31, "sock_recv_errqueue" },
	{ 0xd2c99738, "__kmalloc_track_caller" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0x87f244b9, "sk_free" },
	{ 0x722e0dfd, "dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0x46221b70, "can_send" },
	{ 0xdd9494ea, "__sock_recv_ts_and_drops" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8761c95e, "datagram_poll" },
	{ 0x92997ed8, "_printk" },
	{ 0x3207332, "can_proto_register" },
	{ 0x4aaa05cd, "sock_alloc_send_skb" },
	{ 0x9fa69b02, "sk_error_report" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9dd8badf, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x32f8d392, "can_rx_unregister" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3e5b6f64, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfd6c3908, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "254BEBA8C27A39202FA6267");
