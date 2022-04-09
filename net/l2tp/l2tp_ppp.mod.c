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
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0xdc79d05b, "pppox_compat_ioctl" },
	{ 0x8e06f792, "pppox_ioctl" },
	{ 0x8761c95e, "datagram_poll" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0x595bcc8b, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x6799d664, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x55b317d1, "l2tp_nl_register_ops" },
	{ 0xba0e5aaa, "register_pppox_proto" },
	{ 0x15950b0c, "proto_register" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x29fdda20, "l2tp_xmit_skb" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x24e48d13, "skb_put" },
	{ 0xafbe5fc, "sock_wmalloc" },
	{ 0x34b2e3fa, "l2tp_session_set_header_len" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe022bf4e, "pppox_unbind_sock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd80bf7c1, "ppp_dev_name" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x87f244b9, "sk_free" },
	{ 0x7322ba5d, "l2tp_tunnel_get_nth" },
	{ 0xb6a8e1e, "l2tp_session_get_nth" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0xa383b642, "l2tp_session_delete" },
	{ 0x20320dd1, "ppp_register_net_channel" },
	{ 0x28674aa3, "dst_release" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0x332dbcb9, "l2tp_session_inc_refcount" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x95977ba9, "l2tp_tunnel_delete" },
	{ 0x6bdd9453, "l2tp_tunnel_get_session" },
	{ 0x756847b4, "l2tp_tunnel_register" },
	{ 0x3488dc5d, "l2tp_tunnel_inc_refcount" },
	{ 0x25fe8aad, "l2tp_tunnel_create" },
	{ 0x60594d6e, "l2tp_tunnel_get" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x92997ed8, "_printk" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xed18bb02, "ppp_input" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf90d3ed4, "sock_queue_rcv_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x124103e, "l2tp_tunnel_dec_refcount" },
	{ 0xf51cfa5a, "proc_create_net_data" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xcdd91516, "l2tp_udp_encap_recv" },
	{ 0x93371093, "l2tp_session_dec_refcount" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x788ddfe7, "l2tp_session_register" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9ca05e96, "l2tp_session_create" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core,ppp_generic");


MODULE_INFO(srcversion, "AE00F1660DE5F8B741CF374");
