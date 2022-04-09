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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x67d84bd0, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x705e1dc6, "dev_add_pack" },
	{ 0x60db5ae0, "proc_create_seq_private" },
	{ 0xda59b65, "free_netdev" },
	{ 0x6aea6a51, "dev_close" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x5a921311, "strncmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x8cd4afa5, "ax25_ip_xmit" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x459f3f88, "skb_push" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd349d253, "seq_printf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x221582bf, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "46E6EC536DFE2BF8F93B26D");
