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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xf21fd35b, "rt2x00lib_dmastart" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfba3319d, "rt2x00queue_get_entry" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbf1182a2, "rt2x00lib_rxdone" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaae2ddcd, "rt2x00lib_dmadone" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "rt2x00lib");


MODULE_INFO(srcversion, "5B5FDEE66B4703465EC436D");
