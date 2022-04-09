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
	{ 0x3f351d42, "snd_hdac_power_up" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9065a1b6, "snd_hda_gen_add_mute_led_cdev" },
	{ 0xe86dcd6a, "snd_hda_gen_free" },
	{ 0xf8dc35ac, "snd_hda_input_mux_info" },
	{ 0xe376a76c, "snd_hda_mixer_amp_volume_put" },
	{ 0x4ee13bf9, "snd_hda_codec_eapd_power_filter" },
	{ 0x5834eed, "snd_hdac_codec_read" },
	{ 0xb1c14199, "snd_hda_gen_parse_auto_config" },
	{ 0xb9d799eb, "snd_hda_add_verbs" },
	{ 0x1e5e4c93, "snd_hda_apply_fixup" },
	{ 0x213aa545, "snd_hda_pick_fixup" },
	{ 0xc788b8c9, "snd_hda_input_mux_put" },
	{ 0xd349d253, "seq_printf" },
	{ 0xbf0e44d6, "snd_hda_mixer_amp_tlv" },
	{ 0xe8ad9a28, "snd_hda_gen_build_pcms" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0xdc809832, "snd_hda_jack_unsol_event" },
	{ 0x72e3b1b, "snd_hda_codec_set_pincfg" },
	{ 0xaba1efb, "snd_hda_mixer_amp_switch_put" },
	{ 0x453052cb, "snd_hda_gen_update_outputs" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4e894c30, "snd_hda_jack_detect_enable_callback_mst" },
	{ 0x829115ea, "snd_hda_mixer_amp_volume_get" },
	{ 0xfee65d19, "snd_hdac_regmap_write_raw" },
	{ 0x1fb0871e, "_snd_hda_set_pin_ctl" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc358a24c, "snd_hda_gen_fix_pin_power" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x6b5dac7d, "snd_hda_mixer_amp_switch_get" },
	{ 0x7f236267, "snd_hdac_regmap_add_vendor_verb" },
	{ 0xad34695, "snd_hda_gen_add_micmute_led_cdev" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xee4c9acb, "snd_hda_gen_path_power_filter" },
	{ 0xf218ff02, "is_jack_detectable" },
	{ 0xe46e19a8, "snd_hda_gen_init" },
	{ 0x8243b14, "snd_hda_parse_pin_defcfg" },
	{ 0x3b0c15f5, "__hda_codec_driver_register" },
	{ 0xede1c9f1, "snd_hda_override_amp_caps" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0xf6f18778, "snd_hda_get_int_hint" },
	{ 0xb8392457, "snd_hda_get_bool_hint" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xace4910d, "_snd_hdac_read_parm" },
	{ 0xd1a6d607, "snd_hda_add_imux_item" },
	{ 0x94718172, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x1d569fd0, "snd_hda_enable_beep_device" },
	{ 0xa13ba784, "snd_hda_gen_add_kctl" },
	{ 0x47b2a913, "snd_hda_jack_tbl_get_mst" },
	{ 0xcde7de92, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xb921c501, "snd_hdac_codec_write" },
	{ 0xe0ba5e1c, "snd_hda_codec_get_pincfg" },
	{ 0x5a806f4d, "snd_hda_apply_pincfgs" },
	{ 0xc1e351ba, "hda_codec_driver_unregister" },
	{ 0xdc453f3e, "snd_hda_mixer_amp_switch_info" },
	{ 0xeb52a73e, "snd_hdac_power_down" },
	{ 0xe93066aa, "snd_hda_gen_spec_init" },
	{ 0x546a9aa9, "snd_hda_jack_detect_state_mst" },
	{ 0x358986a9, "snd_hda_mixer_amp_volume_info" },
	{ 0xc3e68630, "query_amp_caps" },
	{ 0x4b5f74d8, "snd_hda_codec_amp_init_stereo" },
	{ 0x64b4fa70, "snd_hda_gen_build_controls" },
	{ 0xfddd9ca9, "snd_hda_get_connections" },
	{ 0x2e707bc8, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd");

MODULE_ALIAS("hdaudio:v83847690r*a01*");
MODULE_ALIAS("hdaudio:v83847882r*a01*");
MODULE_ALIAS("hdaudio:v83847680r*a01*");
MODULE_ALIAS("hdaudio:v83847880r*a01*");
MODULE_ALIAS("hdaudio:v83847681r*a01*");
MODULE_ALIAS("hdaudio:v83847682r*a01*");
MODULE_ALIAS("hdaudio:v83847683r*a01*");
MODULE_ALIAS("hdaudio:v83847618r*a01*");
MODULE_ALIAS("hdaudio:v83847619r*a01*");
MODULE_ALIAS("hdaudio:v83847638r*a01*");
MODULE_ALIAS("hdaudio:v83847616r*a01*");
MODULE_ALIAS("hdaudio:v83847617r*a01*");
MODULE_ALIAS("hdaudio:v83847614r*a01*");
MODULE_ALIAS("hdaudio:v83847615r*a01*");
MODULE_ALIAS("hdaudio:v83847620r*a01*");
MODULE_ALIAS("hdaudio:v83847621r*a01*");
MODULE_ALIAS("hdaudio:v83847622r*a01*");
MODULE_ALIAS("hdaudio:v83847623r*a01*");
MODULE_ALIAS("hdaudio:v83847624r*a01*");
MODULE_ALIAS("hdaudio:v83847625r*a01*");
MODULE_ALIAS("hdaudio:v83847626r*a01*");
MODULE_ALIAS("hdaudio:v83847627r*a01*");
MODULE_ALIAS("hdaudio:v83847628r*a01*");
MODULE_ALIAS("hdaudio:v83847629r*a01*");
MODULE_ALIAS("hdaudio:v83847632r*a01*");
MODULE_ALIAS("hdaudio:v83847633r*a01*");
MODULE_ALIAS("hdaudio:v83847634r*a01*");
MODULE_ALIAS("hdaudio:v83847635r*a01*");
MODULE_ALIAS("hdaudio:v83847636r*a01*");
MODULE_ALIAS("hdaudio:v83847637r*a01*");
MODULE_ALIAS("hdaudio:v83847645r*a01*");
MODULE_ALIAS("hdaudio:v83847646r*a01*");
MODULE_ALIAS("hdaudio:v83847661r*a01*");
MODULE_ALIAS("hdaudio:v83847662r*a01*");
MODULE_ALIAS("hdaudio:v83847664r*a01*");
MODULE_ALIAS("hdaudio:v83847698r*a01*");
MODULE_ALIAS("hdaudio:v838476A0r*a01*");
MODULE_ALIAS("hdaudio:v838476A1r*a01*");
MODULE_ALIAS("hdaudio:v838476A2r*a01*");
MODULE_ALIAS("hdaudio:v838476A3r*a01*");
MODULE_ALIAS("hdaudio:v838476A4r*a01*");
MODULE_ALIAS("hdaudio:v838476A5r*a01*");
MODULE_ALIAS("hdaudio:v838476A6r*a01*");
MODULE_ALIAS("hdaudio:v838476A7r*a01*");
MODULE_ALIAS("hdaudio:v111D7603r*a01*");
MODULE_ALIAS("hdaudio:v111D7604r*a01*");
MODULE_ALIAS("hdaudio:v111D76D4r*a01*");
MODULE_ALIAS("hdaudio:v111D7605r*a01*");
MODULE_ALIAS("hdaudio:v111D76D5r*a01*");
MODULE_ALIAS("hdaudio:v111D76D1r*a01*");
MODULE_ALIAS("hdaudio:v111D76D9r*a01*");
MODULE_ALIAS("hdaudio:v111D7666r*a01*");
MODULE_ALIAS("hdaudio:v111D7667r*a01*");
MODULE_ALIAS("hdaudio:v111D7668r*a01*");
MODULE_ALIAS("hdaudio:v111D7669r*a01*");
MODULE_ALIAS("hdaudio:v111D7608r*a01*");
MODULE_ALIAS("hdaudio:v111D7674r*a01*");
MODULE_ALIAS("hdaudio:v111D7675r*a01*");
MODULE_ALIAS("hdaudio:v111D7676r*a01*");
MODULE_ALIAS("hdaudio:v111D7695r*a01*");
MODULE_ALIAS("hdaudio:v111D76B0r*a01*");
MODULE_ALIAS("hdaudio:v111D76B1r*a01*");
MODULE_ALIAS("hdaudio:v111D76B2r*a01*");
MODULE_ALIAS("hdaudio:v111D76B3r*a01*");
MODULE_ALIAS("hdaudio:v111D76B4r*a01*");
MODULE_ALIAS("hdaudio:v111D76B5r*a01*");
MODULE_ALIAS("hdaudio:v111D76B6r*a01*");
MODULE_ALIAS("hdaudio:v111D76B7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C0r*a01*");
MODULE_ALIAS("hdaudio:v111D76C1r*a01*");
MODULE_ALIAS("hdaudio:v111D76C2r*a01*");
MODULE_ALIAS("hdaudio:v111D76C3r*a01*");
MODULE_ALIAS("hdaudio:v111D76C4r*a01*");
MODULE_ALIAS("hdaudio:v111D76C5r*a01*");
MODULE_ALIAS("hdaudio:v111D76C6r*a01*");
MODULE_ALIAS("hdaudio:v111D76C7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C8r*a01*");
MODULE_ALIAS("hdaudio:v111D76C9r*a01*");
MODULE_ALIAS("hdaudio:v111D76CAr*a01*");
MODULE_ALIAS("hdaudio:v111D76CBr*a01*");
MODULE_ALIAS("hdaudio:v111D76CCr*a01*");
MODULE_ALIAS("hdaudio:v111D76CDr*a01*");
MODULE_ALIAS("hdaudio:v111D76CEr*a01*");
MODULE_ALIAS("hdaudio:v111D76DFr*a01*");
MODULE_ALIAS("hdaudio:v111D76E0r*a01*");
MODULE_ALIAS("hdaudio:v111D76E3r*a01*");
MODULE_ALIAS("hdaudio:v111D76E5r*a01*");
MODULE_ALIAS("hdaudio:v111D76E7r*a01*");
MODULE_ALIAS("hdaudio:v111D76E8r*a01*");
MODULE_ALIAS("hdaudio:v111D76E9r*a01*");
MODULE_ALIAS("hdaudio:v111D76EAr*a01*");
MODULE_ALIAS("hdaudio:v111D76EBr*a01*");
MODULE_ALIAS("hdaudio:v111D76ECr*a01*");
MODULE_ALIAS("hdaudio:v111D76EDr*a01*");
MODULE_ALIAS("hdaudio:v111D76EEr*a01*");
MODULE_ALIAS("hdaudio:v111D76EFr*a01*");
MODULE_ALIAS("hdaudio:v111D76F0r*a01*");
MODULE_ALIAS("hdaudio:v111D76F1r*a01*");
MODULE_ALIAS("hdaudio:v111D76F2r*a01*");
MODULE_ALIAS("hdaudio:v111D76F3r*a01*");

MODULE_INFO(srcversion, "62D3ABCD3134904487430CB");
