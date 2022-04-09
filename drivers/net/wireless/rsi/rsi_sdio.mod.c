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
	{ 0xc5338cca, "rsi_91x_init" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb17d5653, "sdio_writesb" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0x5bafe2f4, "rsi_config_wowlan" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0x22d1c708, "mmc_wait_for_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xc23477d, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0x78931e71, "rsi_mac80211_detach" },
	{ 0x5eeb017c, "rsi_read_pkt" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x81a1f34b, "sdio_readsb" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0x694112a8, "sdio_f0_writeb" },
	{ 0x218eee0d, "sdio_set_host_pm_flags" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x53d96169, "sdio_f0_readb" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xaba32e84, "rsi_hal_device_init" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0x9e04d061, "rsi_91x_deinit" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0xb3d62000, "rsi_bt_ops" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0x91ef55e7, "sdio_release_host" },
};

MODULE_INFO(depends, "mmc_core,rsi_91x,btrsi");

MODULE_ALIAS("sdio:c*v041Bd9330*");
MODULE_ALIAS("sdio:c*v041Bd9116*");

MODULE_INFO(srcversion, "9DD949C6770AB9B57A3BF46");
