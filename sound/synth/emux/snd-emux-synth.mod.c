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
	{ 0xc59655e4, "snd_util_mem_avail" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c004c0, "snd_device_register" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xed9661a7, "snd_device_free" },
	{ 0x6ea00aa2, "snd_info_create_card_entry" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd349d253, "seq_printf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x977b8eb5, "snd_seq_create_kernel_client" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0xfb578fc5, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf912f0c8, "snd_midi_process_event" },
	{ 0x6721d0f8, "snd_hwdep_new" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdfbcf889, "module_put" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x833a3e07, "snd_midi_channel_set_clear" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf88cc0fc, "snd_info_free_entry" },
	{ 0xbf5f6b74, "snd_virmidi_new" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x4e9e641c, "snd_seq_device_new" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x21f4b818, "snd_seq_event_port_attach" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf32ea3d5, "try_module_get" },
};

MODULE_INFO(depends, "snd-util-mem,snd,snd-seq,snd-seq-midi-emul,snd-hwdep,snd-seq-virmidi,snd-seq-device");


MODULE_INFO(srcversion, "6178ACDA117C498DF50190E");
