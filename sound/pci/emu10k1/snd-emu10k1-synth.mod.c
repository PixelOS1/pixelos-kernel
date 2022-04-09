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
	{ 0xcc22b9c8, "snd_emux_new" },
	{ 0x7c5070a6, "snd_emu10k1_synth_alloc" },
	{ 0x9b4c797b, "snd_emux_register" },
	{ 0x8e183a11, "snd_emu10k1_memblk_map" },
	{ 0x14cc64e0, "snd_emu10k1_voice_alloc" },
	{ 0xb70b0ca4, "__snd_seq_driver_register" },
	{ 0x101df8d2, "snd_emu10k1_synth_bzero" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3fefcd40, "snd_emux_free" },
	{ 0x17b98c66, "snd_emu10k1_ptr_write" },
	{ 0x5fc48eef, "snd_emu10k1_synth_free" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdc2d5cc2, "snd_emu10k1_voice_free" },
	{ 0x132d518, "snd_emu10k1_synth_copy_from_user" },
	{ 0x41f66ca8, "snd_emu10k1_ptr_read" },
	{ 0x7c62d180, "snd_seq_driver_unregister" },
};

MODULE_INFO(depends, "snd-emux-synth,snd-emu10k1,snd-seq-device");


MODULE_INFO(srcversion, "DB35E0C2D6426727C35B14B");
