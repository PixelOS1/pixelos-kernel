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
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0xee111615, "param_ops_int" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xce807a25, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xff7f5ce3, "__rtnl_link_unregister" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xda59b65, "free_netdev" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0xf959a423, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x57bc19d2, "down_write" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xff2d96f4, "skb_pull_rcsum" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x86814848, "ether_setup" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F0C264AFDDB0A0909036010");
