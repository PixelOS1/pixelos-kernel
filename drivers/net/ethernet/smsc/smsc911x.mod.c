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
	{ 0x6d1b375f, "phy_do_ioctl_running" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x133536b8, "register_netdev" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x81f466c5, "device_property_present" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x2d22b2aa, "device_get_mac_address" },
	{ 0x2d440df6, "device_get_phy_mode" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0xf906590d, "clk_get" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xdf45e79a, "regulator_bulk_get" },
	{ 0xde80cd09, "ioremap" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xcc2400bd, "phy_start" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xc7dbf4ca, "phy_support_asym_pause" },
	{ 0x373bca32, "phy_set_max_speed" },
	{ 0xfd1c647, "phy_attached_info" },
	{ 0x8b64a28c, "phy_connect_direct" },
	{ 0x701a3149, "phy_find_first" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0xa4394e71, "phy_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x72b9627d, "napi_disable" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xda59b65, "free_netdev" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x44bfda28, "regulator_bulk_free" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x3419636e, "platform_get_resource_byname" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x6cc09945, "ioread32_rep" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x754d539c, "strlen" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("acpi*:ARMH9118:*");

MODULE_INFO(srcversion, "E50E090810D685776E67BC4");
