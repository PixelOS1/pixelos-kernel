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
	{ 0x829ec15f, "sdio_writeb" },
	{ 0x984e4952, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0xae723064, "mwifiex_cancel_hs" },
	{ 0xb17d5653, "sdio_writesb" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0x2e4e567c, "mmc_hw_reset" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf2e954a4, "mwifiex_disable_auto_ds" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x870f2c44, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xf30856fc, "mwifiex_main_process" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b4898ef, "mwifiex_prepare_fw_dump_info" },
	{ 0x788c697a, "sdio_get_host_pm_caps" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x239607ff, "_mwifiex_dbg" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb9d5bb0b, "mwifiex_add_card" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3bedbe85, "mwifiex_shutdown_sw" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x81a1f34b, "sdio_readsb" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0x218eee0d, "sdio_set_host_pm_flags" },
	{ 0xcf0a1cae, "mwifiex_dnld_fw" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x53d96169, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5dc388ec, "mwifiex_reinit_sw" },
	{ 0x953209b1, "mwifiex_handle_rx_packet" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x87c0ad2c, "mwifiex_deauthenticate_all" },
	{ 0xf0f23d05, "mwifiex_remove_card" },
	{ 0xc5aa6521, "mwifiex_enable_hs" },
	{ 0x77ec1d2b, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0xef82f477, "mwifiex_drv_info_dump" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xf693803b, "mwifiex_init_shutdown_fw" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0x91ef55e7, "sdio_release_host" },
};

MODULE_INFO(depends, "mmc_core,mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "DEF02E58B7FE6D9047E5B88");
