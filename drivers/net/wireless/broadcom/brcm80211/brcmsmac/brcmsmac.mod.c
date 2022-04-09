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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6807038e, "ieee80211_rx_irqsafe" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xba43a266, "bcma_pmu_spuravoid_pllupdate" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xe4345174, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2fd6d7b5, "bcma_host_pci_down" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x272d6487, "bcma_chipco_pll_write" },
	{ 0x1906648e, "brcmu_boardrev_str" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x6f26a144, "_dev_crit" },
	{ 0x9b02585d, "single_release" },
	{ 0x14559ce6, "brcmu_pkt_buf_get_skb" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6844f7eb, "bcma_host_pci_up" },
	{ 0xc215cb68, "freq_reg_info" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xbaa467f1, "wiphy_rfkill_start_polling" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8ee68c68, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94216657, "seq_read" },
	{ 0xcd34d80, "skb_unlink" },
	{ 0x6b006f4a, "bcma_chipco_pll_maskset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x419d6dcb, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7e431c15, "cordic_calc_iq" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x22cbcf0a, "bcma_chipco_regctl_maskset" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x2ce7e85e, "wiphy_apply_custom_regulatory" },
	{ 0xe6d1b227, "bcma_core_set_clockmode" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf598b6e7, "__bcma_driver_register" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x837b1e4d, "ieee80211_proberesp_get" },
	{ 0xd1aecac8, "gpiochip_free_own_desc" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe3b9a1d6, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xb64b049d, "bcma_host_pci_irq_ctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8e2c1520, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x108b468, "bcma_chipco_gpio_control" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x96e653af, "bcma_core_is_enabled" },
	{ 0x519dad68, "bcma_core_enable" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe324a86a, "bcma_driver_unregister" },
	{ 0x4096722, "bcma_chipco_gpio_out" },
	{ 0xdedd0f83, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9381a653, "ieee80211_wake_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3952e149, "__ieee80211_get_radio_led_name" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8f60f032, "ieee80211_restart_hw" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xb88bec8e, "regulatory_hint" },
	{ 0xc0f8bc4c, "bcma_chipco_gpio_outen" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1564421, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x6d6a470d, "brcmu_pkt_buf_free_skb" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0xddbb6996, "bcma_chipco_chipctl_maskset" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x286f8bb2, "bcma_chipco_get_alp_clock" },
	{ 0x207be8d0, "bcma_core_pci_power_save" },
	{ 0x9c755fe7, "gpiochip_request_own_desc" },
	{ 0xab747de5, "bcma_core_disable" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x410ecd91, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,bcma,brcmutil,cfg80211,cordic,rfkill");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");

MODULE_INFO(srcversion, "713BEF0C9E85131033EE035");
