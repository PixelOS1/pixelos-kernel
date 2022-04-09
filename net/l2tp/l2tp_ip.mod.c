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
	{ 0x93371093, "l2tp_session_dec_refcount" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0x9681d8dd, "ip_getsockopt" },
	{ 0xeeefd7cd, "ip_setsockopt" },
	{ 0x9b404c39, "sk_setup_caps" },
	{ 0x31c865cf, "sock_gettstamp" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x767257ac, "l2tp_recv_common" },
	{ 0xf90d3ed4, "sock_queue_rcv_skb" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0xd5f94b54, "inet_sendmsg" },
	{ 0x8c0042bc, "inet_del_protocol" },
	{ 0xabf834cc, "sk_common_release" },
	{ 0xd68dc507, "inet_dgram_connect" },
	{ 0x3226fc08, "sock_common_recvmsg" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0x8466b02b, "__sock_recv_wifi_status" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0xf59a8fc2, "security_sk_classify_flow" },
	{ 0x45e3b59b, "inet_addr_type" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x87f244b9, "sk_free" },
	{ 0x6bc86291, "inet_shutdown" },
	{ 0xe8d92e70, "inet_add_protocol" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x657ef943, "__sock_recv_timestamp" },
	{ 0xb6ebe868, "inet_ioctl" },
	{ 0xa341a1d0, "__sk_receive_skb" },
	{ 0xb90a0926, "ip_cmsg_recv_offset" },
	{ 0x15950b0c, "proto_register" },
	{ 0x4e26988, "__sk_dst_check" },
	{ 0xeb439e6e, "inet_release" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8761c95e, "datagram_poll" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0x800f4c17, "sock_common_setsockopt" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xc80696ae, "__xfrm_policy_check" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x9783262a, "inet_register_protosw" },
	{ 0xba1769d1, "__udp_disconnect" },
	{ 0x95977ba9, "l2tp_tunnel_delete" },
	{ 0x5aceb40c, "inet_bind" },
	{ 0x76b51234, "sock_common_getsockopt" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x4977377f, "__ip4_datagram_connect" },
	{ 0xafbe5fc, "sock_wmalloc" },
	{ 0x4df57d0, "l2tp_session_get" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0xed7d77a3, "ip_queue_xmit" },
	{ 0x58eadfb5, "l2tp_sk_to_tunnel" },
	{ 0xc3b686ab, "inet_unregister_protosw" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfd6c3908, "skb_free_datagram" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "D172510D2E6796E9296EB36");
