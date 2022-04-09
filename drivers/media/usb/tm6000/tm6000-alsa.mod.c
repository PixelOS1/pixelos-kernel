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
	{ 0x78c2054, "param_ops_bool" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xee111615, "param_ops_int" },
	{ 0x132a33ac, "tm6000_unregister_extension" },
	{ 0xdbfdfd24, "tm6000_register_extension" },
	{ 0x249d047a, "tm6000_set_audio_bitrate" },
	{ 0x1e78ac5c, "tm6000_set_reg_mask" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x667d3e9e, "snd_component_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0x8329f23e, "snd_pcm_hw_constraint_integer" },
	{ 0x335873c6, "snd_pcm_hw_constraint_pow2" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0x92997ed8, "_printk" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xfff45b5d, "snd_pcm_stream_unlock" },
	{ 0x3751b18b, "snd_pcm_stream_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tm6000,snd,snd-pcm");


MODULE_INFO(srcversion, "53C366BD3E0F170C748D0BE");
