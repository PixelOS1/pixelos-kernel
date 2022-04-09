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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0x3f2a17a1, "_snd_pcm_stream_lock_irqsave" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x56c8507e, "em28xx_register_extension" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x8329f23e, "snd_pcm_hw_constraint_integer" },
	{ 0x5012a70, "pv_ops" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x82594cbd, "em28xx_read_ac97" },
	{ 0xfb578fc5, "memset" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x16e216cd, "em28xx_write_ac97" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x7b86303e, "em28xx_unregister_extension" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4c5b1b62, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x15f4f10f, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0x1e0d0262, "em28xx_audio_analog_set" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "em28xx,snd-pcm,snd");


MODULE_INFO(srcversion, "8D137D5F244D62FBB31B9E4");
