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
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x54a2d145, "hci_recv_frame" },
	{ 0x24e48d13, "skb_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x81a1f34b, "sdio_readsb" },
	{ 0x984e4952, "sdio_readb" },
	{ 0xe1e9debf, "hci_register_dev" },
	{ 0xd00cee59, "hci_alloc_dev_priv" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xb17d5653, "sdio_writesb" },
	{ 0x459f3f88, "skb_push" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0x91ef55e7, "sdio_release_host" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0x829ec15f, "sdio_writeb" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc93577bc, "hci_free_dev" },
	{ 0x582cd715, "hci_unregister_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core,bluetooth");

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "714164F30492122374EEF3C");
