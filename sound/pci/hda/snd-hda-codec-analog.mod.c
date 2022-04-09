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
	{ 0xbda7c992, "snd_hda_enum_helper_info" },
	{ 0xb1c14199, "snd_hda_gen_parse_auto_config" },
	{ 0x1e5e4c93, "snd_hda_apply_fixup" },
	{ 0x213aa545, "snd_hda_pick_fixup" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0xbf0e44d6, "snd_hda_mixer_amp_tlv" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe8ad9a28, "snd_hda_gen_build_pcms" },
	{ 0x8a1dba4, "snd_hda_override_conn_list" },
	{ 0xdc809832, "snd_hda_jack_unsol_event" },
	{ 0xe94a7902, "snd_hda_get_path_from_idx" },
	{ 0x829115ea, "snd_hda_mixer_amp_volume_get" },
	{ 0xfee65d19, "snd_hdac_regmap_write_raw" },
	{ 0x928a8e82, "snd_hda_get_path_idx" },
	{ 0x4b7b502e, "snd_hda_gen_check_power_status" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdf65ca34, "snd_hda_activate_path" },
	{ 0xe46e19a8, "snd_hda_gen_init" },
	{ 0x8243b14, "snd_hda_parse_pin_defcfg" },
	{ 0x3b0c15f5, "__hda_codec_driver_register" },
	{ 0xede1c9f1, "snd_hda_override_amp_caps" },
	{ 0xf3c06c26, "snd_hda_ctl_add" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xace4910d, "_snd_hdac_read_parm" },
	{ 0x94718172, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa13ba784, "snd_hda_gen_add_kctl" },
	{ 0xcde7de92, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xb921c501, "snd_hdac_codec_write" },
	{ 0xc1e351ba, "hda_codec_driver_unregister" },
	{ 0xdc453f3e, "snd_hda_mixer_amp_switch_info" },
	{ 0xe93066aa, "snd_hda_gen_spec_init" },
	{ 0x358986a9, "snd_hda_mixer_amp_volume_info" },
	{ 0x64b4fa70, "snd_hda_gen_build_controls" },
	{ 0xfddd9ca9, "snd_hda_get_connections" },
	{ 0x2e707bc8, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd");

MODULE_ALIAS("hdaudio:v11D4184Ar*a01*");
MODULE_ALIAS("hdaudio:v11D41882r*a01*");
MODULE_ALIAS("hdaudio:v11D41883r*a01*");
MODULE_ALIAS("hdaudio:v11D41884r*a01*");
MODULE_ALIAS("hdaudio:v11D4194Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4194Br*a01*");
MODULE_ALIAS("hdaudio:v11D41981r*a01*");
MODULE_ALIAS("hdaudio:v11D41983r*a01*");
MODULE_ALIAS("hdaudio:v11D41984r*a01*");
MODULE_ALIAS("hdaudio:v11D41986r*a01*");
MODULE_ALIAS("hdaudio:v11D41988r*a01*");
MODULE_ALIAS("hdaudio:v11D4198Br*a01*");
MODULE_ALIAS("hdaudio:v11D4882Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Br*a01*");

MODULE_INFO(srcversion, "DD587C9D5FAD79AF82B2758");
