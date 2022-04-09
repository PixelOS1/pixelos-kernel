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
	{ 0xaffeeac8, "dev_mc_sync_multiple" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x14d481bb, "dev_mc_unsync" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3db41249, "vlan_uses_dev" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x146118c3, "vlan_vid_del" },
	{ 0x2b6af903, "call_netdevice_notifiers" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xa3e92283, "vlan_vid_add" },
	{ 0x618b1483, "vlan_vids_del_by_dev" },
	{ 0xa287b804, "vlan_vids_add_by_dev" },
	{ 0xdadd4fb7, "failover_register" },
	{ 0x891e6d8a, "netdev_lower_state_changed" },
	{ 0x33947cdf, "netdev_change_features" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0x77d10cac, "__ethtool_get_link_ksettings" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x6aea6a51, "dev_close" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x5c74cbaa, "dev_open" },
	{ 0xf8169cee, "netdev_pick_tx" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6d5ae3e7, "passthru_features_check" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x61b84239, "dev_uc_unsync" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x2728b7eb, "dev_uc_sync_multiple" },
	{ 0x6cc90aa4, "failover_slave_unregister" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xe1a456b2, "failover_unregister" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xf0937a14, "dev_get_stats" },
	{ 0x286a8573, "dev_set_mtu" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "failover");


MODULE_INFO(srcversion, "388ECF81F4637D5A4D92A49");
