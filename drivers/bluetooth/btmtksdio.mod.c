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
	{ 0x78c2054, "param_ops_bool" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0xbf36f4cd, "btmtk_setup_firmware_79xx" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x49843e91, "__hci_cmd_sync" },
	{ 0x3dcf5738, "btmtk_setup_firmware" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x37a0cba, "kfree" },
	{ 0xc933c314, "__hci_cmd_send" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x81a1f34b, "sdio_readsb" },
	{ 0x24e48d13, "skb_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xb17d5653, "sdio_writesb" },
	{ 0x459f3f88, "skb_push" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x214e4265, "bt_warn" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xe1e9debf, "hci_register_dev" },
	{ 0xfd0c902a, "btmtk_set_bdaddr" },
	{ 0xd00cee59, "hci_alloc_dev_priv" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8fde019c, "hci_recv_diag" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x54a2d145, "hci_recv_frame" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xc93577bc, "hci_free_dev" },
	{ 0x582cd715, "hci_unregister_dev" },
	{ 0x218eee0d, "sdio_set_host_pm_flags" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x91ef55e7, "sdio_release_host" },
	{ 0x718b8b7, "bt_info" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7d95aac8, "sdio_readl" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xea82d402, "sdio_writel" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core,btmtk,bluetooth");

MODULE_ALIAS("sdio:c*v037Ad7663*");
MODULE_ALIAS("sdio:c*v037Ad7668*");
MODULE_ALIAS("sdio:c*v037Ad7961*");

MODULE_INFO(srcversion, "92D64F37046F24ED3D639F0");
