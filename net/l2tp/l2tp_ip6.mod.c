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
	{ 0xbeb98222, "ipv6_getsockopt" },
	{ 0x309cacec, "ipv6_setsockopt" },
	{ 0x36c6d0b4, "l2tp_ioctl" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x3226fc08, "sock_common_recvmsg" },
	{ 0xd5f94b54, "inet_sendmsg" },
	{ 0x76b51234, "sock_common_getsockopt" },
	{ 0x800f4c17, "sock_common_setsockopt" },
	{ 0x6bc86291, "inet_shutdown" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x31c865cf, "sock_gettstamp" },
	{ 0x69cabc2d, "inet6_compat_ioctl" },
	{ 0xa8c0903e, "inet6_ioctl" },
	{ 0x8761c95e, "datagram_poll" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0xd68dc507, "inet_dgram_connect" },
	{ 0xc47c792f, "inet6_bind" },
	{ 0x3a4c8418, "inet6_release" },
	{ 0xa2393f6c, "inet6_del_protocol" },
	{ 0x8c6ef5cc, "inet6_unregister_protosw" },
	{ 0xa131a591, "inet6_register_protosw" },
	{ 0x6799d664, "proto_unregister" },
	{ 0xe921762f, "inet6_add_protocol" },
	{ 0x15950b0c, "proto_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x87f244b9, "sk_free" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xc80696ae, "__xfrm_policy_check" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xa341a1d0, "__sk_receive_skb" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x93371093, "l2tp_session_dec_refcount" },
	{ 0x767257ac, "l2tp_recv_common" },
	{ 0x4df57d0, "l2tp_session_get" },
	{ 0xf4a5c6a7, "__fl6_sock_lookup" },
	{ 0xa6bbff67, "ip6_dst_hoplimit" },
	{ 0xb2b84b23, "ip6_push_pending_frames" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0x69054b21, "ip6_datagram_send_ctl" },
	{ 0x28674aa3, "dst_release" },
	{ 0xbbf3a104, "ip6_append_data" },
	{ 0x426d5dbf, "ip_generic_getfrag" },
	{ 0xef113c84, "ip6_dst_lookup_flow" },
	{ 0xf59a8fc2, "security_sk_classify_flow" },
	{ 0x3f2092e3, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0xad17176f, "fl6_merge_options" },
	{ 0xabf834cc, "sk_common_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb4652521, "ipv6_chk_addr" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xf90d3ed4, "sock_queue_rcv_skb" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe09eae7e, "__ip6_datagram_connect" },
	{ 0xba1769d1, "__udp_disconnect" },
	{ 0xd9eb8189, "inet6_destroy_sock" },
	{ 0x95977ba9, "l2tp_tunnel_delete" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x845e516e, "ip6_flush_pending_frames" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x58eadfb5, "l2tp_sk_to_tunnel" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8466b02b, "__sock_recv_wifi_status" },
	{ 0xf711653f, "ip6_datagram_recv_ctl" },
	{ 0x657ef943, "__sock_recv_timestamp" },
	{ 0xb0574cd4, "ipv6_recv_error" },
	{ 0xfd6c3908, "skb_free_datagram" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_ip,l2tp_core");


MODULE_INFO(srcversion, "565AA43486D2C9A05AA9728");
