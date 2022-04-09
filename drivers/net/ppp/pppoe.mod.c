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
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x67d84bd0, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x705e1dc6, "dev_add_pack" },
	{ 0x6799d664, "proto_unregister" },
	{ 0xba0e5aaa, "register_pppox_proto" },
	{ 0x15950b0c, "proto_register" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0xed18bb02, "ppp_input" },
	{ 0xf90d3ed4, "sock_queue_rcv_skb" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xa6287d29, "dev_get_by_name_rcu" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x3f48bb55, "pskb_trim_rcsum_slow" },
	{ 0xa341a1d0, "__sk_receive_skb" },
	{ 0xff2d96f4, "skb_pull_rcsum" },
	{ 0x87f244b9, "sk_free" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x20320dd1, "ppp_register_net_channel" },
	{ 0xe022bf4e, "pppox_unbind_sock" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xd69e4840, "dev_get_by_name" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd349d253, "seq_printf" },
	{ 0xf51cfa5a, "proc_create_net_data" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x7265be9b, "iov_iter_revert" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x24e48d13, "skb_put" },
	{ 0xafbe5fc, "sock_wmalloc" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xa0bf779a, "skb_copy_datagram_iter" },
	{ 0x801ba6fd, "skb_recv_datagram" },
	{ 0xdf150c04, "sock_init_data" },
	{ 0xca1dc550, "sk_alloc" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,ppp_generic");


MODULE_INFO(srcversion, "33897DF6BFF149AC56CD219");
