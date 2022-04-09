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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7c68767d, "init_dummy_netdev" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0x4c395365, "qtnf_get_debugfs_dir" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x31fab83c, "qtnf_chipid_to_string" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x46622c36, "pcie_get_mps" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x9316d2e0, "qtnf_trans_handle_rx_ctl_packet" },
	{ 0xfb578fc5, "memset" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0x7bc8acc, "pcie_set_mps" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x761527a1, "put_device" },
	{ 0xc26f8803, "debugfs_create_devm_seqfile" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc4fd1679, "pci_intx" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x9f7598a2, "qtnf_classify_skb" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x2339a4c2, "qtnf_core_detach" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9df088ed, "qtnf_wake_all_queues" },
	{ 0x16e6d67f, "get_device" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0xb34fdfcf, "param_ops_byte" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x99eea043, "qtnf_core_attach" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe9a18439, "pci_save_state" },
};

MODULE_INFO(depends, "qtnfmac");

MODULE_ALIAS("pci:v00001BB5d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C2F33E95A5CE2631E775D6D");
