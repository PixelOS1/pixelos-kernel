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
	{ 0xa4335e53, "ath6kl_core_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1824e849, "ath6kl_hif_intr_bh_handler" },
	{ 0x37a9c9c7, "ath6kl_core_cleanup" },
	{ 0x91cfb84a, "ath6kl_hif_rw_comp_handler" },
	{ 0x9584185d, "ath6kl_dbg" },
	{ 0xf20be5d, "ath6kl_core_create" },
	{ 0xb17d5653, "sdio_writesb" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0x22d1c708, "mmc_wait_for_cmd" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x788c697a, "sdio_get_host_pm_caps" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd5e6175f, "mmc_wait_for_req" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x8eedc1e0, "ath6kl_dbg_dump" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0xa0119d08, "mmc_set_data_timeout" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x64902323, "ath6kl_cfg80211_suspend" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x81a1f34b, "sdio_readsb" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0x218eee0d, "sdio_set_host_pm_flags" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x50835e66, "ath6kl_cfg80211_resume" },
	{ 0x645443bf, "ath6kl_stop_txrx" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf8a48766, "ath6kl_core_init" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6b69f578, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0x8fff1d41, "sdio_memcpy_fromio" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0x91ef55e7, "sdio_release_host" },
};

MODULE_INFO(depends, "ath6kl_core,mmc_core");

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
MODULE_ALIAS("sdio:c*v0271d0402*");
MODULE_ALIAS("sdio:c*v0271d0418*");
MODULE_ALIAS("sdio:c*v0271d0419*");

MODULE_INFO(srcversion, "F2A5137E8F6DAFD31AC940E");
