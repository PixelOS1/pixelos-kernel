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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5834eed, "snd_hdac_codec_read" },
	{ 0xfee65d19, "snd_hdac_regmap_write_raw" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0x7f236267, "snd_hdac_regmap_add_vendor_verb" },
	{ 0x3b0c15f5, "__hda_codec_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x75a21e9a, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xb921c501, "snd_hdac_codec_write" },
	{ 0xc1e351ba, "hda_codec_driver_unregister" },
	{ 0x592d16b0, "snd_hda_codec_setup_stream" },
	{ 0xb17515fb, "snd_hda_add_new_ctls" },
};

MODULE_INFO(depends, "snd-hda-core,snd-pcm,snd-hda-codec,snd");

MODULE_ALIAS("hdaudio:v163C3055r*a01*");
MODULE_ALIAS("hdaudio:v163C3155r*a01*");
MODULE_ALIAS("hdaudio:v11C13026r*a01*");
MODULE_ALIAS("hdaudio:v11C13055r*a01*");
MODULE_ALIAS("hdaudio:v11C13155r*a01*");
MODULE_ALIAS("hdaudio:v10573055r*a01*");
MODULE_ALIAS("hdaudio:v10573057r*a01*");
MODULE_ALIAS("hdaudio:v10573155r*a01*");
MODULE_ALIAS("hdaudio:v11063288r*a01*");
MODULE_ALIAS("hdaudio:v15433155r*a01*");
MODULE_ALIAS("hdaudio:v18540018r*a01*");

MODULE_INFO(srcversion, "1E17270744F52D5FAE03A2F");
