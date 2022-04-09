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
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xee111615, "param_ops_int" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x594bf15b, "ioport_map" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x133536b8, "register_netdev" },
	{ 0xcdca3691, "nr_irqs" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x848d372e, "iowrite8" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x22529725, "mii_check_media" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x6cc09945, "ioread32_rep" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb19b445, "ioread8" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xcfe23d5f, "generic_mii_ioctl" },
	{ 0x754d539c, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0xb60bbac0, "mii_nway_restart" },
	{ 0x1156afa, "mii_ethtool_get_link_ksettings" },
	{ 0x10783aeb, "mii_ethtool_set_link_ksettings" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xda59b65, "free_netdev" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x92997ed8, "_printk" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v000010B7d00005900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005970sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005950sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005951sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005952sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000900Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000905Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00007646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005B57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005157sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005257sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006564sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009210sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6E48B3094AD829B42179FEF");
