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
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb29ba1da, "ib_create_ah_from_wc" },
	{ 0x754d539c, "strlen" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x1134a019, "ib_find_pkey" },
	{ 0x39b6939b, "ib_register_mad_agent" },
	{ 0x9f666988, "ib_free_recv_mad" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x31646171, "linkwatch_fire_event" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xca0b8641, "ib_free_send_mad" },
	{ 0xf5461416, "rdma_destroy_ah_user" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x133536b8, "register_netdev" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0xc5067ebf, "ib_set_client_data" },
	{ 0xaf1178a0, "ib_create_send_mad" },
	{ 0x33758ecf, "ib_post_send_mad" },
	{ 0x2f5a3ead, "ib_unregister_mad_agent" },
	{ 0xd1a7a58, "ib_register_client" },
	{ 0xa1aa83c6, "ib_unregister_event_handler" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd04820ea, "ib_register_event_handler" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x9b4f8716, "rdma_create_ah" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf6f4aaa6, "eth_commit_mac_addr_change" },
	{ 0x86814848, "ether_setup" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xd449e898, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xc906ef7d, "ib_unregister_client" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0x286a8573, "dev_set_mtu" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "9B22900E34A020DB949334F");
