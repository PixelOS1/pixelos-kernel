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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x35e8756a, "snd_hdac_regmap_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe86dcd6a, "snd_hda_gen_free" },
	{ 0xe376a76c, "snd_hda_mixer_amp_volume_put" },
	{ 0x5834eed, "snd_hdac_codec_read" },
	{ 0xbda7c992, "snd_hda_enum_helper_info" },
	{ 0xb1c14199, "snd_hda_gen_parse_auto_config" },
	{ 0xb9d799eb, "snd_hda_add_verbs" },
	{ 0x1e5e4c93, "snd_hda_apply_fixup" },
	{ 0x213aa545, "snd_hda_pick_fixup" },
	{ 0xbf0e44d6, "snd_hda_mixer_amp_tlv" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe8ad9a28, "snd_hda_gen_build_pcms" },
	{ 0x8a1dba4, "snd_hda_override_conn_list" },
	{ 0x6811bc5d, "snd_hda_check_amp_list_power" },
	{ 0xdc809832, "snd_hda_jack_unsol_event" },
	{ 0x72e3b1b, "snd_hda_codec_set_pincfg" },
	{ 0xaba1efb, "snd_hda_mixer_amp_switch_put" },
	{ 0x829115ea, "snd_hda_mixer_amp_volume_get" },
	{ 0xf2bb95a, "snd_hda_codec_set_name" },
	{ 0x6b5dac7d, "snd_hda_mixer_amp_switch_get" },
	{ 0xe46e19a8, "snd_hda_gen_init" },
	{ 0x8243b14, "snd_hda_parse_pin_defcfg" },
	{ 0x3b0c15f5, "__hda_codec_driver_register" },
	{ 0xede1c9f1, "snd_hda_override_amp_caps" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0xb8392457, "snd_hda_get_bool_hint" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xace4910d, "_snd_hdac_read_parm" },
	{ 0x94718172, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa13ba784, "snd_hda_gen_add_kctl" },
	{ 0xcde7de92, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xb921c501, "snd_hdac_codec_write" },
	{ 0xe0ba5e1c, "snd_hda_codec_get_pincfg" },
	{ 0xc1e351ba, "hda_codec_driver_unregister" },
	{ 0xdc453f3e, "snd_hda_mixer_amp_switch_info" },
	{ 0xe93066aa, "snd_hda_gen_spec_init" },
	{ 0xe8e7dca, "snd_hdac_regmap_read_raw" },
	{ 0x358986a9, "snd_hda_mixer_amp_volume_info" },
	{ 0x64b4fa70, "snd_hda_gen_build_controls" },
	{ 0xfddd9ca9, "snd_hda_get_connections" },
	{ 0x2e707bc8, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd");

MODULE_ALIAS("hdaudio:v11061708r*a01*");
MODULE_ALIAS("hdaudio:v11061709r*a01*");
MODULE_ALIAS("hdaudio:v1106170Ar*a01*");
MODULE_ALIAS("hdaudio:v1106170Br*a01*");
MODULE_ALIAS("hdaudio:v1106E710r*a01*");
MODULE_ALIAS("hdaudio:v1106E711r*a01*");
MODULE_ALIAS("hdaudio:v1106E712r*a01*");
MODULE_ALIAS("hdaudio:v1106E713r*a01*");
MODULE_ALIAS("hdaudio:v1106E714r*a01*");
MODULE_ALIAS("hdaudio:v1106E715r*a01*");
MODULE_ALIAS("hdaudio:v1106E716r*a01*");
MODULE_ALIAS("hdaudio:v1106E717r*a01*");
MODULE_ALIAS("hdaudio:v1106E720r*a01*");
MODULE_ALIAS("hdaudio:v1106E721r*a01*");
MODULE_ALIAS("hdaudio:v1106E722r*a01*");
MODULE_ALIAS("hdaudio:v1106E723r*a01*");
MODULE_ALIAS("hdaudio:v1106E724r*a01*");
MODULE_ALIAS("hdaudio:v1106E725r*a01*");
MODULE_ALIAS("hdaudio:v1106E726r*a01*");
MODULE_ALIAS("hdaudio:v1106E727r*a01*");
MODULE_ALIAS("hdaudio:v11060397r*a01*");
MODULE_ALIAS("hdaudio:v11061397r*a01*");
MODULE_ALIAS("hdaudio:v11062397r*a01*");
MODULE_ALIAS("hdaudio:v11063397r*a01*");
MODULE_ALIAS("hdaudio:v11064397r*a01*");
MODULE_ALIAS("hdaudio:v11065397r*a01*");
MODULE_ALIAS("hdaudio:v11066397r*a01*");
MODULE_ALIAS("hdaudio:v11067397r*a01*");
MODULE_ALIAS("hdaudio:v11060398r*a01*");
MODULE_ALIAS("hdaudio:v11061398r*a01*");
MODULE_ALIAS("hdaudio:v11062398r*a01*");
MODULE_ALIAS("hdaudio:v11063398r*a01*");
MODULE_ALIAS("hdaudio:v11064398r*a01*");
MODULE_ALIAS("hdaudio:v11065398r*a01*");
MODULE_ALIAS("hdaudio:v11066398r*a01*");
MODULE_ALIAS("hdaudio:v11067398r*a01*");
MODULE_ALIAS("hdaudio:v11060428r*a01*");
MODULE_ALIAS("hdaudio:v11064428r*a01*");
MODULE_ALIAS("hdaudio:v11060441r*a01*");
MODULE_ALIAS("hdaudio:v11064441r*a01*");
MODULE_ALIAS("hdaudio:v11060433r*a01*");
MODULE_ALIAS("hdaudio:v1106A721r*a01*");
MODULE_ALIAS("hdaudio:v11060438r*a01*");
MODULE_ALIAS("hdaudio:v11064438r*a01*");
MODULE_ALIAS("hdaudio:v11060448r*a01*");
MODULE_ALIAS("hdaudio:v11060440r*a01*");
MODULE_ALIAS("hdaudio:v11060446r*a01*");
MODULE_ALIAS("hdaudio:v11068446r*a01*");
MODULE_ALIAS("hdaudio:v11064760r*a01*");
MODULE_ALIAS("hdaudio:v11064761r*a01*");
MODULE_ALIAS("hdaudio:v11064762r*a01*");

MODULE_INFO(srcversion, "2ABF6550552AABC5B456704");
