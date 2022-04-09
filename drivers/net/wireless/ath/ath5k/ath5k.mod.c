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
	{ 0x9f13fd41, "ieee80211_rts_duration" },
	{ 0xabaee24e, "ieee80211_rx_napi" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd1cb3211, "pci_release_region" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x32e84752, "ieee80211_queue_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xa6b9a850, "seq_open" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xca76a1a3, "ath_key_delete" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd8b88a68, "ath_regd_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ffd2fb2, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8ee68c68, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x94216657, "seq_read" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x5012a70, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x419d6dcb, "ieee80211_stop_queue" },
	{ 0x293c1990, "ieee80211_tx_status" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x86632d5a, "default_llseek" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x814d6241, "ieee80211_free_txskb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xc2b012f1, "ath_is_mybeacon" },
	{ 0x5a921311, "strncmp" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x22749e72, "simple_open" },
	{ 0x3a6a0e57, "debugfs_create_bool" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xf473e0c2, "ath_reg_notifier_apply" },
	{ 0xe3b9a1d6, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xa0965042, "pci_disable_link_state" },
	{ 0xf3f6dc84, "ath_hw_get_listen_time" },
	{ 0xb1ab353, "ath_regd_get_band_ctl" },
	{ 0x6b8a1365, "__ieee80211_get_rx_led_name" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x84edb417, "ath_hw_cycle_counters_update" },
	{ 0x92997ed8, "_printk" },
	{ 0x7d6551aa, "ieee80211_get_tx_rates" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3b865cca, "ieee80211_get_buffered_bc" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x3bafb2d, "__ieee80211_get_tx_led_name" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x108b188f, "ath_is_49ghz_allowed" },
	{ 0xb830146f, "ath_hw_setbssidmask" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9381a653, "ieee80211_wake_queue" },
	{ 0xfc699255, "ieee80211_generic_frame_duration" },
	{ 0x5d3c4d7a, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2c9ff847, "ieee80211_ctstoself_duration" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xb88bec8e, "regulatory_hint" },
	{ 0xb4e119dc, "ath_rxbuf_alloc" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x96848186, "scnprintf" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7da295e7, "seq_release" },
	{ 0xb0e602eb, "memmove" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xf3ae74a1, "ath_key_config" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x9c9959e8, "ath_hw_keyreset" },
	{ 0xeea2364e, "pci_request_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,ath,cfg80211");

MODULE_ALIAS("pci:v0000168Cd00000207sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000A727d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "91AFA27BEE9B33D96AC042C");
