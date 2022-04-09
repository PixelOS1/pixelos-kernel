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
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x133536b8, "register_netdev" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x622ae652, "pci_unmap_rom" },
	{ 0xeabf254f, "pci_map_rom" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xde80cd09, "ioremap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x72b9627d, "napi_disable" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x83a8e44f, "sungem_phy_probe" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcdd0eff2, "pci_status_get_and_clear_errors" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x24e48d13, "skb_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x754d539c, "strlen" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xda59b65, "free_netdev" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x92997ed8, "_printk" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sungem_phy");

MODULE_ALIAS("pci:v0000108Ed00002BADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Ed00001101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00000051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd0000006Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C4FAFC2FD51A331036BEEDE");
