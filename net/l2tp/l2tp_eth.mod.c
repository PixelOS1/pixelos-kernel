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
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x55b317d1, "l2tp_nl_register_ops" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0xa383b642, "l2tp_session_delete" },
	{ 0xda59b65, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x93371093, "l2tp_session_dec_refcount" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0x788ddfe7, "l2tp_session_register" },
	{ 0x332dbcb9, "l2tp_session_inc_refcount" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x3122bf01, "kernel_sock_ip_overhead" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x9ca05e96, "l2tp_session_create" },
	{ 0x754d539c, "strlen" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x28674aa3, "dst_release" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2bf28ceb, "__skb_ext_del" },
	{ 0xb6f0dba, "dev_forward_skb" },
	{ 0x29fdda20, "l2tp_xmit_skb" },
	{ 0xdfbcf889, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x86814848, "ether_setup" },
	{ 0xd349d253, "seq_printf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "0A1F67DCE4201271045C901");
