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
	{ 0xe8bbaf9d, "phy_ethtool_set_link_ksettings" },
	{ 0x88f15d51, "phy_ethtool_get_link_ksettings" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x6d1b375f, "phy_do_ioctl_running" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xa4394e71, "phy_stop" },
	{ 0x72b9627d, "napi_disable" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfd1c647, "phy_attached_info" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc7dbf4ca, "phy_support_asym_pause" },
	{ 0x373bca32, "phy_set_max_speed" },
	{ 0x3d07ff5f, "phy_connect" },
	{ 0x701a3149, "phy_find_first" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
	{ 0xed990cc7, "phy_register_fixup_for_uid" },
	{ 0x133536b8, "register_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbda2b00, "devm_platform_get_and_ioremap_resource" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xcc2400bd, "phy_start" },
	{ 0x2cc3125d, "phy_start_aneg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x92997ed8, "_printk" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0xda59b65, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");


MODULE_INFO(srcversion, "8DF0405265DA585DF73A39D");
