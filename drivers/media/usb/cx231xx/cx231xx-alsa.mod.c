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
	{ 0x2d3385d3, "system_wq" },
	{ 0x986e105d, "is_fw_load" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xd03e3ff5, "v4l2_subdev_call_wrappers" },
	{ 0x3f2a17a1, "_snd_pcm_stream_lock_irqsave" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x8329f23e, "snd_pcm_hw_constraint_integer" },
	{ 0x5012a70, "pv_ops" },
	{ 0xa668d6b3, "cx231xx_register_extension" },
	{ 0xfb578fc5, "memset" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x84da05bd, "snd_card_free_when_closed" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4c5b1b62, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xaa004d7e, "cx231xx_capture_start" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xef67201b, "cx231xx_set_alt_setting" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xa8c82426, "cx231xx_unregister_extension" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "cx231xx,snd-pcm,videodev,snd");


MODULE_INFO(srcversion, "0C14BF5DE2AD350512AFC6A");
