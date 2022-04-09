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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x8d69151d, "pci_wake_from_d3" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x63bf1840, "netif_tx_unlock" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x4aafecd0, "netif_tx_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xef731740, "pci_find_capability" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x6aea6a51, "dev_close" },
	{ 0x8ce7e22e, "netdev_update_features" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x133536b8, "register_netdev" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xde80cd09, "ioremap" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x873e0964, "pci_pme_capable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xda59b65, "free_netdev" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0xc76137f2, "pci_read_vpd_any" },
	{ 0x8b31c042, "pci_write_vpd_any" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x754d539c, "strlen" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1a7401c8, "netdev_printk" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfb578fc5, "memset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001148d00009000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00009E00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00009E01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004342sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004343sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004344sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004345sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004346sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004351sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004352sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004355sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004356sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000435Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004361sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004363sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004364sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004365sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004366sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004367sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004369sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004370sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004380sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004382sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FC48086165E9F6369741578");
