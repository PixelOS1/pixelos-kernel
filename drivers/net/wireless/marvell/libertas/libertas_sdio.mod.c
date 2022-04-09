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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x57e889a8, "lbs_resume" },
	{ 0xb17d5653, "sdio_writesb" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe6612d69, "lbs_stop_card" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x1231e28a, "netdev_alert" },
	{ 0x34fbd499, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x788c697a, "sdio_get_host_pm_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x126f6547, "lbs_start_card" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x32415a, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x98c9896d, "lbs_get_firmware_async" },
	{ 0xe295bf28, "lbs_cmd_copyback" },
	{ 0x7275e4b0, "lbs_suspend" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x81a1f34b, "sdio_readsb" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0xa2d365e1, "lbs_remove_card" },
	{ 0x694112a8, "sdio_f0_writeb" },
	{ 0x218eee0d, "sdio_set_host_pm_flags" },
	{ 0x880c19c3, "lbs_process_rxed_packet" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb25d2d18, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x34fffb49, "sdio_align_size" },
	{ 0x8ad35ebe, "lbs_add_card" },
	{ 0x53d96169, "sdio_f0_readb" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0x24e48d13, "skb_put" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0x91ef55e7, "sdio_release_host" },
	{ 0x5c4a7df1, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "mmc_core,libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "12BEFE9A4E42403FC050CA3");
