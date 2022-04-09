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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3f2a17a1, "_snd_pcm_stream_lock_irqsave" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd349d253, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6fc0cfdf, "snd_device_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4c5b1b62, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x131c05d3, "snd_ctl_free_one" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7108062d, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xea272603, "snd_pcm_stop" },
	{ 0xb74b614, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "093F33BA97452D58EE17D21");
