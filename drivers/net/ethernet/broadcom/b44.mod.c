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
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0xb3e80bf2, "ssb_driver_unregister" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xaa7aec52, "__ssb_driver_register" },
	{ 0xfb68aeb5, "ssb_pcihost_register" },
	{ 0xcc2400bd, "phy_start" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xa4394e71, "phy_stop" },
	{ 0x72b9627d, "napi_disable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa0ead61d, "__napi_alloc_skb" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x92d3e4a4, "phy_ethtool_ksettings_set" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x92997ed8, "_printk" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x8e0ecc69, "device_set_wakeup_capable" },
	{ 0xfd1c647, "phy_attached_info" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x3d07ff5f, "phy_connect" },
	{ 0x3c4ac9ea, "mdiobus_is_registered_device" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x133536b8, "register_netdev" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x1dc04c7e, "ssb_dma_translation" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x649cdecc, "ssb_bus_powerup" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xe57d4c78, "ssb_clockspeed" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x82a33227, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x45b8ebc6, "ssb_device_enable" },
	{ 0x85946615, "ssb_device_is_enabled" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0xda59b65, "free_netdev" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0xfc5b83b8, "ssb_bus_may_powerdown" },
	{ 0xa7028d89, "ssb_device_disable" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x9eb69b23, "phy_print_status" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xcfe23d5f, "generic_mii_ioctl" },
	{ 0x94c6ef8, "phy_mii_ioctl" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x754d539c, "strlen" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x40a78094, "phy_ethtool_ksettings_get" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ssb,libphy,mii");

MODULE_ALIAS("ssb:v4243id0806rev*");
MODULE_ALIAS("pci:v000014E4d00004401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004402sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8A3028498359CCAC42BBB53");
