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
	{ 0x85bd1608, "__request_region" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xed9661a7, "snd_device_free" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x6fc0cfdf, "snd_device_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3fb8f9e4, "snd_timer_new" },
	{ 0x6721d0f8, "snd_hwdep_new" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe0c2458, "snd_timer_interrupt" },
	{ 0x4e9e641c, "snd_seq_device_new" },
	{ 0x13c49cc2, "_copy_from_user" },
};

MODULE_INFO(depends, "snd,snd-timer,snd-hwdep,snd-seq-device");


MODULE_INFO(srcversion, "46D08EFA140F099E52CF4B4");
