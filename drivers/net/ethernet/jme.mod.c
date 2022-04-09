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
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x1b331034, "pci_pme_active" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x133536b8, "register_netdev" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xde80cd09, "ioremap" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xa0965042, "pci_disable_link_state" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x72b9627d, "napi_disable" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x5012a70, "pv_ops" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xcfe23d5f, "generic_mii_ioctl" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x8ce7e22e, "netdev_update_features" },
	{ 0x754d539c, "strlen" },
	{ 0x1156afa, "mii_ethtool_get_link_ksettings" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xda59b65, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x10783aeb, "mii_ethtool_set_link_ksettings" },
	{ 0x92997ed8, "_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v0000197Bd00000250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00000260sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "17097D1E593118E5D153323");
