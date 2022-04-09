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
	{ 0xe86dcd6a, "snd_hda_gen_free" },
	{ 0xe376a76c, "snd_hda_mixer_amp_volume_put" },
	{ 0xb1c14199, "snd_hda_gen_parse_auto_config" },
	{ 0xbf0e44d6, "snd_hda_mixer_amp_tlv" },
	{ 0xe8ad9a28, "snd_hda_gen_build_pcms" },
	{ 0xdc809832, "snd_hda_jack_unsol_event" },
	{ 0x829115ea, "snd_hda_mixer_amp_volume_get" },
	{ 0xe46e19a8, "snd_hda_gen_init" },
	{ 0x8243b14, "snd_hda_parse_pin_defcfg" },
	{ 0x3b0c15f5, "__hda_codec_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa13ba784, "snd_hda_gen_add_kctl" },
	{ 0xe0ba5e1c, "snd_hda_codec_get_pincfg" },
	{ 0xc1e351ba, "hda_codec_driver_unregister" },
	{ 0xe93066aa, "snd_hda_gen_spec_init" },
	{ 0x358986a9, "snd_hda_mixer_amp_volume_info" },
	{ 0x64b4fa70, "snd_hda_gen_build_controls" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec");

MODULE_ALIAS("hdaudio:v13F68888r*a01*");
MODULE_ALIAS("hdaudio:v13F69880r*a01*");
MODULE_ALIAS("hdaudio:v434D4980r*a01*");

MODULE_INFO(srcversion, "E1B935BD40B89F7860916B8");
