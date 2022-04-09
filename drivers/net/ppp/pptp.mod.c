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
	{ 0x850ab1fa, "sock_no_recvmsg" },
	{ 0xd68a37d4, "sock_no_sendmsg" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0xdc79d05b, "pppox_compat_ioctl" },
	{ 0x8e06f792, "pppox_ioctl" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x999e8297, "vfree" },
	{ 0x58662282, "gre_del_protocol" },
	{ 0x6799d664, "proto_unregister" },
	{ 0xba0e5aaa, "register_pppox_proto" },
	{ 0x15950b0c, "proto_register" },
	{ 0x20a93878, "gre_add_protocol" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x87f244b9, "sk_free" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xed18bb02, "ppp_input" },
	{ 0xf90d3ed4, "sock_queue_rcv_skb" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xdfa6106a, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0x8ddc6a19, "__ip_select_ident" },
	{ 0x459f3f88, "skb_push" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x6b97c538, "skb_set_owner_w" },
	{ 0xf91c8bc0, "skb_realloc_headroom" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xa341a1d0, "__sk_receive_skb" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x33def6bb, "ppp_register_channel" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0x9b404c39, "sk_setup_caps" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0xf59a8fc2, "security_sk_classify_flow" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe022bf4e, "pppox_unbind_sock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x28674aa3, "dst_release" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,gre,ppp_generic");


MODULE_INFO(srcversion, "3018F41E0D0CBFAB06102FE");
