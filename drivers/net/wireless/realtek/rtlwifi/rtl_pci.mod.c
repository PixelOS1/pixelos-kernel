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
	{ 0x6807038e, "ieee80211_rx_irqsafe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcbdd8da4, "rtl_swlps_beacon" },
	{ 0x4fa46303, "rtl_deinit_deferred_work" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x952a6676, "rtl_efuse_ops_init" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x64fdc0ee, "rtl_deinit_core" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x90250703, "read_efuse_byte" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xcb49aecb, "rtl_collect_scan_list" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x419d6dcb, "ieee80211_stop_queue" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4e94cd48, "rtl_global_var" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4d5863e8, "rtl_init_core" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x41f9f91d, "rtl_action_proc" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0xff5c6af4, "rtl_init_rx_config" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x97e05663, "rtl_tid_to_ac" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdedd0f83, "ieee80211_tx_status_irqsafe" },
	{ 0xfc8bf0ae, "rtl_ops" },
	{ 0x70e9f320, "rtl_deinit_rfkill" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8f75fa32, "rtl_p2p_info" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9381a653, "ieee80211_wake_queue" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0xdf9203cd, "rtl_lps_leave" },
	{ 0x428c9823, "rtl_recognize_peer" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xf354534e, "rtl_is_special_data" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xfb4c61a3, "rtl_tx_ackqueue" },
	{ 0x7fd1cd49, "rtl_init_rfkill" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0xcb764d30, "rtl_c2hcmd_enqueue" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xca1e666c, "rtl_tx_mgmt_proc" },
	{ 0x8b4e9090, "rtl_beacon_statistic" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "06806EBDC3AF1E40909449B");
