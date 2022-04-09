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
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xf9eb813f, "ntb_transport_unregister_client_dev" },
	{ 0xfac9bb94, "ntb_transport_unregister_client" },
	{ 0xc40757e2, "ntb_transport_register_client" },
	{ 0xf55d6313, "ntb_transport_register_client_dev" },
	{ 0x3d54dbfc, "ntb_transport_tx_enqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x862001f, "ntb_transport_tx_free_entry" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x32537aca, "ntb_transport_link_query" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x133536b8, "register_netdev" },
	{ 0x9de19b10, "ntb_transport_create_queue" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9c992c8f, "ntb_transport_link_up" },
	{ 0xc37d9036, "ntb_transport_rx_remove" },
	{ 0x436098aa, "ntb_transport_link_down" },
	{ 0x30934216, "ntb_transport_max_size" },
	{ 0x754d539c, "strlen" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xd40e7a02, "ntb_transport_rx_enqueue" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xda59b65, "free_netdev" },
	{ 0xc270dc24, "ntb_transport_free_queue" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb_transport");


MODULE_INFO(srcversion, "920ACE10A7BE0D2676DADC4");
