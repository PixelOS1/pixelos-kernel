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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x54a2d145, "hci_recv_frame" },
	{ 0xe1e9debf, "hci_register_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd00cee59, "hci_alloc_dev_priv" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0xe04da4f0, "pcmcia_request_irq" },
	{ 0xd0f80fce, "pcmcia_request_io" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x24e48d13, "skb_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x459f3f88, "skb_push" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x5012a70, "pv_ops" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x52996a04, "pcmcia_dev_present" },
	{ 0xc23477d, "current_task" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0xc93577bc, "hci_free_dev" },
	{ 0x582cd715, "hci_unregister_dev" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,bluetooth");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBAF16FBFpb657CC15Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3987764pb2524B59Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A0736ECpb24E6DFABpc*pd*");

MODULE_INFO(srcversion, "34A761266B261211BE921B8");
