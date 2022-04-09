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
	{ 0x9065a1b6, "snd_hda_gen_add_mute_led_cdev" },
	{ 0xe86dcd6a, "snd_hda_gen_free" },
	{ 0x4cb6900e, "snd_hda_codec_get_pin_target" },
	{ 0xe376a76c, "snd_hda_mixer_amp_volume_put" },
	{ 0xf8dc35ac, "snd_hda_input_mux_info" },
	{ 0xb1c14199, "snd_hda_gen_parse_auto_config" },
	{ 0x1e5e4c93, "snd_hda_apply_fixup" },
	{ 0x213aa545, "snd_hda_pick_fixup" },
	{ 0xbf0e44d6, "snd_hda_mixer_amp_tlv" },
	{ 0xe8ad9a28, "snd_hda_gen_build_pcms" },
	{ 0xdc809832, "snd_hda_jack_unsol_event" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x453052cb, "snd_hda_gen_update_outputs" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe94a7902, "snd_hda_get_path_from_idx" },
	{ 0x829115ea, "snd_hda_mixer_amp_volume_get" },
	{ 0xfee65d19, "snd_hdac_regmap_write_raw" },
	{ 0x4b7b502e, "snd_hda_gen_check_power_status" },
	{ 0x3ba1b942, "snd_hda_codec_set_pin_target" },
	{ 0x7f236267, "snd_hdac_regmap_add_vendor_verb" },
	{ 0xad34695, "snd_hda_gen_add_micmute_led_cdev" },
	{ 0xdf65ca34, "snd_hda_activate_path" },
	{ 0xe46e19a8, "snd_hda_gen_init" },
	{ 0x8243b14, "snd_hda_parse_pin_defcfg" },
	{ 0x95aa915, "snd_hda_jack_set_gating_jack" },
	{ 0x3b0c15f5, "__hda_codec_driver_register" },
	{ 0xede1c9f1, "snd_hda_override_amp_caps" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xace4910d, "_snd_hdac_read_parm" },
	{ 0x94718172, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa13ba784, "snd_hda_gen_add_kctl" },
	{ 0xcde7de92, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xb921c501, "snd_hdac_codec_write" },
	{ 0x469ed2c2, "snd_hda_add_new_path" },
	{ 0xc1e351ba, "hda_codec_driver_unregister" },
	{ 0xdc453f3e, "snd_hda_mixer_amp_switch_info" },
	{ 0xe93066aa, "snd_hda_gen_spec_init" },
	{ 0x546a9aa9, "snd_hda_jack_detect_state_mst" },
	{ 0xe8e7dca, "snd_hdac_regmap_read_raw" },
	{ 0x358986a9, "snd_hda_mixer_amp_volume_info" },
	{ 0xc3e68630, "query_amp_caps" },
	{ 0xcde5018b, "snd_hda_gen_mic_autoswitch" },
	{ 0x64b4fa70, "snd_hda_gen_build_controls" },
	{ 0xb17515fb, "snd_hda_add_new_ctls" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd");

MODULE_ALIAS("hdaudio:v14F11F86r*a01*");
MODULE_ALIAS("hdaudio:v14F12008r*a01*");
MODULE_ALIAS("hdaudio:v14F120D0r*a01*");
MODULE_ALIAS("hdaudio:v14F15045r*a01*");
MODULE_ALIAS("hdaudio:v14F15047r*a01*");
MODULE_ALIAS("hdaudio:v14F15051r*a01*");
MODULE_ALIAS("hdaudio:v14F15066r*a01*");
MODULE_ALIAS("hdaudio:v14F15067r*a01*");
MODULE_ALIAS("hdaudio:v14F15068r*a01*");
MODULE_ALIAS("hdaudio:v14F15069r*a01*");
MODULE_ALIAS("hdaudio:v14F1506Cr*a01*");
MODULE_ALIAS("hdaudio:v14F1506Er*a01*");
MODULE_ALIAS("hdaudio:v14F15097r*a01*");
MODULE_ALIAS("hdaudio:v14F15098r*a01*");
MODULE_ALIAS("hdaudio:v14F150A1r*a01*");
MODULE_ALIAS("hdaudio:v14F150A2r*a01*");
MODULE_ALIAS("hdaudio:v14F150ABr*a01*");
MODULE_ALIAS("hdaudio:v14F150ACr*a01*");
MODULE_ALIAS("hdaudio:v14F150B8r*a01*");
MODULE_ALIAS("hdaudio:v14F150B9r*a01*");
MODULE_ALIAS("hdaudio:v14F150F1r*a01*");
MODULE_ALIAS("hdaudio:v14F150F2r*a01*");
MODULE_ALIAS("hdaudio:v14F150F3r*a01*");
MODULE_ALIAS("hdaudio:v14F150F4r*a01*");
MODULE_ALIAS("hdaudio:v14F1510Fr*a01*");
MODULE_ALIAS("hdaudio:v14F15110r*a01*");
MODULE_ALIAS("hdaudio:v14F15111r*a01*");
MODULE_ALIAS("hdaudio:v14F15113r*a01*");
MODULE_ALIAS("hdaudio:v14F15114r*a01*");
MODULE_ALIAS("hdaudio:v14F15115r*a01*");
MODULE_ALIAS("hdaudio:v14F151D7r*a01*");

MODULE_INFO(srcversion, "386AF24E73A216A732B456C");
