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
	{ 0xabaee24e, "ieee80211_rx_napi" },
	{ 0x3c7b0298, "rtw_fw_c2h_cmd_rx_irqsafe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7c68767d, "init_dummy_netdev" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xa5c6e51b, "rtw_tx_write_data_h2c_get" },
	{ 0xece6b817, "rtw_power_mode_change" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x19c37a0e, "rtw_ops" },
	{ 0x211f969b, "rtw_core_deinit" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xec7b5ffa, "rtw_register_hw" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x391580dc, "rtw_rx_stats" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x419d6dcb, "ieee80211_stop_queue" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x9a02e83f, "rtw_tx_write_data_rsvd_page_get" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x8e065c8d, "rtw_core_init" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x459f3f88, "skb_push" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0x5ff463f6, "rtw_tx_fill_tx_desc" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xad0a5f60, "rtw_unregister_hw" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x63a45c6a, "rtw_fw_c2h_cmd_isr" },
	{ 0x2f6258a6, "rtw_chip_info_setup" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdedd0f83, "ieee80211_tx_status_irqsafe" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9381a653, "ieee80211_wake_queue" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xf75c5991, "rtw_tx_report_enqueue" },
};

MODULE_INFO(depends, "mac80211,rtw88_core");


MODULE_INFO(srcversion, "77C850008814F48D5BD33EA");
