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
	{ 0x2d3385d3, "system_wq" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x8e4160f, "device_remove_bin_file" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x58f8f851, "netdev_master_upper_dev_get_rcu" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7a713a14, "in_dev_finish_destroy" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xa7299ff3, "pci_enable_pcie_error_reporting" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x8518a4a6, "_raw_spin_trylock_bh" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x5a921311, "strncmp" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xfa227d2f, "device_wakeup_enable" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x47b47c05, "vlan_dev_real_dev" },
	{ 0xef731740, "pci_find_capability" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x383d2889, "device_create_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x3cf47bb0, "pci_disable_pcie_error_reporting" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xedc03953, "iounmap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xb24a808, "pci_find_ext_capability" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00004040d00000001sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00004040d00000002sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00004040d00000003sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00004040d00000004sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00004040d00000005sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00004040d00000024sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00004040d00000025sv*sd*bc02sc00i00*");
MODULE_ALIAS("pci:v00004040d00000100sv*sd*bc02sc00i00*");

MODULE_INFO(srcversion, "1167BFC3770B249E8BE83B1");
