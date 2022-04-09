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
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x6ea09972, "snd_midi_channel_alloc_set" },
	{ 0xe2c004c0, "snd_device_register" },
	{ 0x738e5f68, "snd_opl3_reset" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb9948d2c, "snd_midi_channel_free_set" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x977b8eb5, "snd_seq_create_kernel_client" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb70b0ca4, "__snd_seq_driver_register" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x5873d84c, "snd_opl3_find_patch" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf912f0c8, "snd_midi_process_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdfbcf889, "module_put" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2f98bb8c, "snd_opl3_load_patch" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5060a19, "snd_opl3_regmap" },
	{ 0x4e9e641c, "snd_seq_device_new" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x21f4b818, "snd_seq_event_port_attach" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x7c62d180, "snd_seq_driver_unregister" },
};

MODULE_INFO(depends, "snd-seq-midi-emul,snd,snd-opl3-lib,snd-seq,snd-seq-device");


MODULE_INFO(srcversion, "41457A014186B3F93D1E759");
