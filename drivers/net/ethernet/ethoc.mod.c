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
	{ 0xee111615, "param_ops_int" },
	{ 0xe8bbaf9d, "phy_ethtool_set_link_ksettings" },
	{ 0x88f15d51, "phy_ethtool_get_link_ksettings" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x5d34fc48, "phy_ethtool_nway_reset" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x701a3149, "phy_find_first" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x133536b8, "register_netdev" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x373bca32, "phy_set_max_speed" },
	{ 0x8b64a28c, "phy_connect_direct" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xcc2400bd, "phy_start" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x9eb69b23, "phy_print_status" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xa4394e71, "phy_stop" },
	{ 0x72b9627d, "napi_disable" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x9bb4e317, "ioread32be" },
	{ 0x94c6ef8, "phy_mii_ioctl" },
	{ 0x5c86bb44, "mdiobus_get_phy" },
	{ 0xda59b65, "free_netdev" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("of:N*T*Copencores,ethoc");
MODULE_ALIAS("of:N*T*Copencores,ethocC*");

MODULE_INFO(srcversion, "E574D2F9C799B8A04A4B644");
