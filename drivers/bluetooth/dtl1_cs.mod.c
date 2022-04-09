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
	{ 0x9d8a8bca, "pcmcia_unregister_driver" },
	{ 0x136c7ecb, "pcmcia_register_driver" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x459f3f88, "skb_push" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe1e9debf, "hci_register_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd00cee59, "hci_alloc_dev_priv" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0xe04da4f0, "pcmcia_request_irq" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0xc93577bc, "hci_free_dev" },
	{ 0x582cd715, "hci_unregister_dev" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xda20bae, "pcmcia_loop_config" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x54a2d145, "hci_recv_frame" },
	{ 0x24e48d13, "skb_put" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x52996a04, "pcmcia_dev_present" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,bluetooth");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE1BFDD64pbE168480Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE1BFDD64pb9102BC82pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB38BCC2Epb44EBF863pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB38BCC2EpbE732BAE3pc*pd*");

MODULE_INFO(srcversion, "A6E5A74E170B1EF365AC383");
