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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5855ceb, "pci_enable_sriov" },
	{ 0xd1cb3211, "pci_release_region" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xee111615, "param_ops_int" },
	{ 0xf3c35a84, "netdev_notice" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xebb49c23, "pci_disable_sriov" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xb24a808, "pci_find_ext_capability" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xeea2364e, "pci_request_region" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000017D5d00005733sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005833sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A85E649A93D324F20EABDFE");
