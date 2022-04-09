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
	{ 0xd138b7aa, "ath10k_ce_completed_recv_next_nolock" },
	{ 0x8d8faffb, "ath10k_htt_txrx_compl_task" },
	{ 0xf29dead6, "ath10k_core_unregister" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x221f9fe7, "ath10k_htt_t2h_msg_handler" },
	{ 0xd1cb3211, "pci_release_region" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xf09b32a3, "ath10k_info" },
	{ 0xe9baee10, "ath10k_coredump_new" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x30693701, "ath10k_core_register" },
	{ 0xd3fe94c8, "ath10k_core_napi_sync_disable" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3755ec0c, "ath10k_ce_init_pipe" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xab8e5003, "ath10k_ce_deinit_pipe" },
	{ 0x99f8ff49, "ath10k_htc_rx_completion_handler" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x1e74b319, "ath10k_core_destroy" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x4c52bdfe, "ath10k_htt_rx_pktlog_completion_handler" },
	{ 0x80356e50, "__ath10k_ce_rx_num_free_bufs" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf547a4b3, "ath10k_core_start_recovery" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3a7873f9, "ath10k_core_create" },
	{ 0xef204ddb, "ath10k_ce_rx_post_buf" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x9fff3003, "ath10k_ce_enable_interrupts" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x226d3cf4, "ath10k_ce_per_engine_service_any" },
	{ 0x6915daba, "ath10k_ce_dump_registers" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd17c8c99, "ath10k_ce_completed_send_next" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x491b18f7, "ath10k_htc_tx_completion_handler" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x48f71705, "ath10k_ce_completed_recv_next" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0xee21271, "ath10k_ce_revoke_recv_next" },
	{ 0xdd1deb4f, "ath10k_ce_free_pipe" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xada6d870, "__ath10k_ce_send_revert" },
	{ 0x4f9b295f, "ath10k_htt_hif_tx_complete" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa95d5cfe, "ath10k_ce_rx_update_write_idx" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcf8ae56, "ath10k_ce_num_free_src_entries" },
	{ 0x749111fc, "ath10k_print_driver_info" },
	{ 0x1000e51, "schedule" },
	{ 0xdeb38c6e, "ath10k_err" },
	{ 0x92997ed8, "_printk" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x4fb8700a, "ath10k_coredump_get_mem_layout" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4667e9b1, "ath10k_ce_send" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0xb50147d1, "ath10k_ce_cancel_send_next" },
	{ 0x6fb470de, "ath10k_ce_per_engine_service" },
	{ 0x95418ebd, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2246c1ee, "ath10k_ce_alloc_pipe" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x480ce83c, "ath10k_ce_send_nolock" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xb53993ed, "ath10k_core_napi_enable" },
	{ 0x54101891, "pcie_capability_write_word" },
	{ 0xeea2364e, "pci_request_region" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xa1ae5a94, "ath10k_ce_disable_interrupts" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ath10k_core");

MODULE_ALIAS("pci:v00000777d000011ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000050sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AC44BF95FEE0AA1AAE3299B");
