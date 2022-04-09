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
	{ 0xabaee24e, "ieee80211_rx_napi" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1dc04c7e, "ssb_dma_translation" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xba43a266, "bcma_pmu_spuravoid_pllupdate" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x754d539c, "strlen" },
	{ 0x32e84752, "ieee80211_queue_work" },
	{ 0x2fd6d7b5, "bcma_host_pci_down" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0x3e2e63ab, "ieee80211_rts_get" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2dfcae06, "ssb_commit_settings" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x649cdecc, "ssb_bus_powerup" },
	{ 0x6844f7eb, "bcma_host_pci_up" },
	{ 0x58cc5358, "ssb_bus_sdiobus_register" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xbaa467f1, "wiphy_rfkill_start_polling" },
	{ 0x62667f6b, "__ieee80211_get_assoc_led_name" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8ee68c68, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa7aec52, "__ssb_driver_register" },
	{ 0xc8a016aa, "param_ops_string" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x419d6dcb, "ieee80211_stop_queue" },
	{ 0x293c1990, "ieee80211_tx_status" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xb3e80bf2, "ssb_driver_unregister" },
	{ 0xb48a1c92, "ssb_chipco_gpio_control" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7e431c15, "cordic_calc_iq" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0x546a64fa, "bcma_core_dma_translation" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x814d6241, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x45b8ebc6, "ssb_device_enable" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe6d1b227, "bcma_core_set_clockmode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf598b6e7, "__bcma_driver_register" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x4be2a747, "ieee80211_ctstoself_get" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xb64b049d, "bcma_host_pci_irq_ctl" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x108b468, "bcma_chipco_gpio_control" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6b8a1365, "__ieee80211_get_rx_led_name" },
	{ 0x96e653af, "bcma_core_is_enabled" },
	{ 0x58f6dcab, "ssb_pmu_set_ldo_voltage" },
	{ 0xa7028d89, "ssb_device_disable" },
	{ 0x519dad68, "bcma_core_enable" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe324a86a, "bcma_driver_unregister" },
	{ 0x7792a571, "bcma_core_pll_ctl" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x617b026c, "hwrng_register" },
	{ 0x3bafb2d, "__ieee80211_get_tx_led_name" },
	{ 0xfdb35ebf, "ssb_set_devtypedata" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9381a653, "ieee80211_wake_queue" },
	{ 0xfc699255, "ieee80211_generic_frame_duration" },
	{ 0x3952e149, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xac6bf244, "ssb_bus_unregister" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x1564421, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0xfc5b83b8, "ssb_bus_may_powerdown" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0x82a33227, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0xce8c6e68, "ssb_pmu_set_ldo_paref" },
	{ 0xd57fbd31, "hwrng_unregister" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0x85946615, "ssb_device_is_enabled" },
	{ 0xab747de5, "bcma_core_disable" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9a64ffa2, "ssb_pmu_spuravoid_pllupdate" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x63f5308, "ieee80211_get_tkip_p1k_iv" },
	{ 0x32c0e042, "ieee80211_get_response_rate" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x91ef55e7, "sdio_release_host" },
};

MODULE_INFO(depends, "mac80211,ssb,bcma,mmc_core,cfg80211,cordic");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "63A111D0CFA7D1C675382EB");
