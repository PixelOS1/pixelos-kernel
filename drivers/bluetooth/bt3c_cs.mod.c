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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe1e9debf, "hci_register_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0x582cd715, "hci_unregister_dev" },
	{ 0xc93577bc, "hci_free_dev" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1564421, "request_firmware" },
	{ 0xd00cee59, "hci_alloc_dev_priv" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0xe04da4f0, "pcmcia_request_irq" },
	{ 0xda20bae, "pcmcia_loop_config" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x54a2d145, "hci_recv_frame" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x24e48d13, "skb_put" },
	{ 0x718b8b7, "bt_info" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x459f3f88, "skb_push" },
	{ 0xd0f80fce, "pcmcia_request_io" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x52996a04, "pcmcia_dev_present" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,bluetooth");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEFCE0A31pb*pcD4CE9B02pd*");

MODULE_INFO(srcversion, "961A8E992FFA2DCD4023B7C");
