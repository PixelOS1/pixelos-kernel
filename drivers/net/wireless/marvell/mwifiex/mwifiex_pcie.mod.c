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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd1cb3211, "pci_release_region" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xae723064, "mwifiex_cancel_hs" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf2e954a4, "mwifiex_disable_auto_ds" },
	{ 0x595e2eef, "pci_try_reset_function" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xee3d0010, "mwifiex_write_data_complete" },
	{ 0x870f2c44, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa731f83e, "mwifiex_queue_main_work" },
	{ 0x5b4898ef, "mwifiex_prepare_fw_dump_info" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x239607ff, "_mwifiex_dbg" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xb9d5bb0b, "mwifiex_add_card" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xb19b445, "ioread8" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x3bedbe85, "mwifiex_shutdown_sw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x5dc388ec, "mwifiex_reinit_sw" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x953209b1, "mwifiex_handle_rx_packet" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x87c0ad2c, "mwifiex_deauthenticate_all" },
	{ 0xf0f23d05, "mwifiex_remove_card" },
	{ 0xc5aa6521, "mwifiex_enable_hs" },
	{ 0x77ec1d2b, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xef82f477, "mwifiex_drv_info_dump" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xf693803b, "mwifiex_init_shutdown_fw" },
	{ 0xeea2364e, "pci_request_region" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("pci:v000011ABd00002B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00002B42sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6210091E950AE02101F9A50");
