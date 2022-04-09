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
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1564421, "request_firmware" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x8d69151d, "pci_wake_from_d3" },
	{ 0x6aea6a51, "dev_close" },
	{ 0xf7370f56, "system_state" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x133536b8, "register_netdev" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8e0ecc69, "device_set_wakeup_capable" },
	{ 0xef731740, "pci_find_capability" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xdc43bdc6, "pci_vpd_find_ro_info_keyword" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa7299ff3, "pci_enable_pcie_error_reporting" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x920e2463, "build_skb" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x3cf47bb0, "pci_disable_pcie_error_reporting" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xda59b65, "free_netdev" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x21075824, "__free_pages" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0x1da2875e, "netif_set_real_num_rx_queues" },
	{ 0x42a6f0, "netif_set_real_num_tx_queues" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfb578fc5, "memset" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x754d539c, "strlen" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x92997ed8, "_printk" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003101bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003106bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv0000103Csd00003102bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001639sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "98ADA27884E71832A6793AA");
