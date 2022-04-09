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
	{ 0x5834eed, "snd_hdac_codec_read" },
	{ 0xb1c14199, "snd_hda_gen_parse_auto_config" },
	{ 0x1e5e4c93, "snd_hda_apply_fixup" },
	{ 0x213aa545, "snd_hda_pick_fixup" },
	{ 0xe8ad9a28, "snd_hda_gen_build_pcms" },
	{ 0xdc809832, "snd_hda_jack_unsol_event" },
	{ 0x72e3b1b, "snd_hda_codec_set_pincfg" },
	{ 0x453052cb, "snd_hda_gen_update_outputs" },
	{ 0x4e894c30, "snd_hda_jack_detect_enable_callback_mst" },
	{ 0x1fb0871e, "_snd_hda_set_pin_ctl" },
	{ 0xc358a24c, "snd_hda_gen_fix_pin_power" },
	{ 0xe46e19a8, "snd_hda_gen_init" },
	{ 0x8243b14, "snd_hda_parse_pin_defcfg" },
	{ 0x3b0c15f5, "__hda_codec_driver_register" },
	{ 0xede1c9f1, "snd_hda_override_amp_caps" },
	{ 0xb2786cb3, "snd_hda_find_mixer_ctl" },
	{ 0x770f3113, "snd_hda_sequence_write" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa13ba784, "snd_hda_gen_add_kctl" },
	{ 0xb921c501, "snd_hdac_codec_write" },
	{ 0xe0ba5e1c, "snd_hda_codec_get_pincfg" },
	{ 0x5a806f4d, "snd_hda_apply_pincfgs" },
	{ 0xc1e351ba, "hda_codec_driver_unregister" },
	{ 0xe93066aa, "snd_hda_gen_spec_init" },
	{ 0x546a9aa9, "snd_hda_jack_detect_state_mst" },
	{ 0xc3e68630, "query_amp_caps" },
	{ 0x64b4fa70, "snd_hda_gen_build_controls" },
	{ 0x2e707bc8, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-core,snd-hda-codec");

MODULE_ALIAS("hdaudio:v10134206r*a01*");
MODULE_ALIAS("hdaudio:v10134207r*a01*");
MODULE_ALIAS("hdaudio:v10134208r*a01*");
MODULE_ALIAS("hdaudio:v10134210r*a01*");
MODULE_ALIAS("hdaudio:v10134213r*a01*");

MODULE_INFO(srcversion, "472DCA09A7BA8B547A61541");
