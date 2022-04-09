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
	{ 0xf29dead6, "ath10k_core_unregister" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3796c6ed, "ath10k_bmi_start" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xe9baee10, "ath10k_coredump_new" },
	{ 0x30693701, "ath10k_core_register" },
	{ 0xd3fe94c8, "ath10k_core_napi_sync_disable" },
	{ 0xb17d5653, "sdio_writesb" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0x2e4e567c, "mmc_hw_reset" },
	{ 0x22d1c708, "mmc_wait_for_cmd" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x1e74b319, "ath10k_core_destroy" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x788c697a, "sdio_get_host_pm_caps" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xea82d402, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x2966993a, "ath10k_mac_tx_push_pending" },
	{ 0xf547a4b3, "ath10k_core_start_recovery" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3a7873f9, "ath10k_core_create" },
	{ 0x7d95aac8, "sdio_readl" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x81a1f34b, "sdio_readsb" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0x218eee0d, "sdio_set_host_pm_flags" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x4fd55f72, "ath10k_htc_process_trailer" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x749111fc, "ath10k_print_driver_info" },
	{ 0xdeb38c6e, "ath10k_err" },
	{ 0x92997ed8, "_printk" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x638a88a, "ath10k_htt_rx_hl_indication" },
	{ 0x53d96169, "sdio_f0_readb" },
	{ 0x4fb8700a, "ath10k_coredump_get_mem_layout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x50932f35, "ath10k_bmi_read_memory" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x6b69f578, "sdio_memcpy_toio" },
	{ 0x95418ebd, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8fff1d41, "sdio_memcpy_fromio" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0x97c42b0e, "ath10k_htc_notify_tx_completion" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xb53993ed, "ath10k_core_napi_enable" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0x91ef55e7, "sdio_release_host" },
};

MODULE_INFO(depends, "ath10k_core,mmc_core");

MODULE_ALIAS("sdio:c*v0271d050A*");
MODULE_ALIAS("sdio:c*v0271d0701*");

MODULE_INFO(srcversion, "5AD58AF8EA25B79ECB543A7");
