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
	{ 0x38f48af7, "put_user_ifreq" },
	{ 0x4cee3f95, "dev_load" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0xa66bd3ac, "dev_getbyhwaddr_rcu" },
	{ 0x31c865cf, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd69e4840, "dev_get_by_name" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xce489e24, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf90d3ed4, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0xabf834cc, "sk_common_release" },
	{ 0x3226fc08, "sock_common_recvmsg" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0xd0458486, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc29fb1aa, "ieee802154_hdr_pull" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x6a551a05, "sock_no_socketpair" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0x595bcc8b, "sock_no_bind" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x23112f0a, "sock_no_listen" },
	{ 0x459f3f88, "skb_push" },
	{ 0x27a82dae, "sock_no_accept" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x722e0dfd, "dev_get_by_index" },
	{ 0x67d84bd0, "dev_remove_pack" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x25cd7fc1, "sock_no_shutdown" },
	{ 0xdd9494ea, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0x15950b0c, "proto_register" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8761c95e, "datagram_poll" },
	{ 0x2999843c, "sock_register" },
	{ 0x6e572bb2, "dev_getfirstbyhwtype" },
	{ 0x6799d664, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4aaa05cd, "sock_alloc_send_skb" },
	{ 0x21b84b5e, "put_cmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x800f4c17, "sock_common_setsockopt" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x76b51234, "sock_common_getsockopt" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x33fc2a31, "get_user_ifreq" },
	{ 0x705e1dc6, "dev_add_pack" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfd6c3908, "skb_free_datagram" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "057E4085EE52A8633A0E32A");
