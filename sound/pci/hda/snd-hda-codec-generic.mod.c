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
	{ 0xfaf598c6, "snd_ctl_request_layer" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x35e8756a, "snd_hdac_regmap_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4cb6900e, "snd_hda_codec_get_pin_target" },
	{ 0x349cba85, "strchr" },
	{ 0x5724d6c8, "snd_hda_multi_out_dig_prepare" },
	{ 0xe376a76c, "snd_hda_mixer_amp_volume_put" },
	{ 0xf8dc35ac, "snd_hda_input_mux_info" },
	{ 0x5834eed, "snd_hdac_codec_read" },
	{ 0x754d539c, "strlen" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0x99f477a2, "snd_hda_get_default_vref" },
	{ 0xbda7c992, "snd_hda_enum_helper_info" },
	{ 0x1e5e4c93, "snd_hda_apply_fixup" },
	{ 0x82bec043, "snd_hda_sync_vmaster_hook" },
	{ 0xbfcb2f71, "snd_hda_codec_amp_stereo" },
	{ 0xeb863027, "__snd_hda_add_vmaster" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0xbf0e44d6, "snd_hda_mixer_amp_tlv" },
	{ 0x46f46850, "snd_hda_jack_add_kctls" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x6811bc5d, "snd_hda_check_amp_list_power" },
	{ 0xdc809832, "snd_hda_jack_unsol_event" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe118de5d, "snd_pcm_2_1_chmaps" },
	{ 0xaba1efb, "snd_hda_mixer_amp_switch_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xce593c22, "ledtrig_audio_get" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x79ca2a50, "snd_hda_check_amp_caps" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4e894c30, "snd_hda_jack_detect_enable_callback_mst" },
	{ 0x829115ea, "snd_hda_mixer_amp_volume_get" },
	{ 0xfee65d19, "snd_hdac_regmap_write_raw" },
	{ 0x11089ac7, "_ctype" },
	{ 0x1fb0871e, "_snd_hda_set_pin_ctl" },
	{ 0xa7a93117, "snd_hda_attach_beep_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x3ba1b942, "snd_hda_codec_set_pin_target" },
	{ 0x6b5dac7d, "snd_hda_mixer_amp_switch_get" },
	{ 0x9f5f4fe8, "snd_hda_get_conn_list" },
	{ 0xbc9c1981, "snd_ctl_boolean_stereo_info" },
	{ 0x563f7a08, "snd_hda_multi_out_analog_prepare" },
	{ 0xf942e391, "snd_hda_multi_out_analog_cleanup" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf218ff02, "is_jack_detectable" },
	{ 0x722aa365, "snd_hda_create_spdif_in_ctls" },
	{ 0x92204e27, "snd_hda_codec_amp_init" },
	{ 0x8243b14, "snd_hda_parse_pin_defcfg" },
	{ 0xb7c0f443, "sort" },
	{ 0x3b0c15f5, "__hda_codec_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf6f18778, "snd_hda_get_int_hint" },
	{ 0xb2786cb3, "snd_hda_find_mixer_ctl" },
	{ 0x80c9fb52, "snd_hda_create_spdif_share_sw" },
	{ 0xb8392457, "snd_hda_get_bool_hint" },
	{ 0x81d38c5f, "snd_hda_multi_out_analog_open" },
	{ 0x72f150e0, "snd_hda_get_conn_index" },
	{ 0xa85b3901, "snd_hda_multi_out_dig_close" },
	{ 0xc79df3fe, "snd_hda_create_dig_out_ctls" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xace4910d, "_snd_hdac_read_parm" },
	{ 0x31956e3b, "snd_hda_correct_pin_ctl" },
	{ 0xd1a6d607, "snd_hda_add_imux_item" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x691e69b1, "snd_hda_get_pin_label" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x90f8fc44, "snd_hda_multi_out_dig_cleanup" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3a95d03d, "snd_ctl_sync_vmaster" },
	{ 0x2232adfa, "__snd_hda_codec_cleanup_stream" },
	{ 0x75a21e9a, "snd_hda_codec_pcm_new" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ff71a6, "snd_hda_add_vmaster_hook" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9cd82a2, "snd_hda_multi_out_dig_open" },
	{ 0x47b2a913, "snd_hda_jack_tbl_get_mst" },
	{ 0x96848186, "scnprintf" },
	{ 0xb921c501, "snd_hdac_codec_write" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe0ba5e1c, "snd_hda_codec_get_pincfg" },
	{ 0xc1e351ba, "hda_codec_driver_unregister" },
	{ 0xdc453f3e, "snd_hda_mixer_amp_switch_info" },
	{ 0x592d16b0, "snd_hda_codec_setup_stream" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x546a9aa9, "snd_hda_jack_detect_state_mst" },
	{ 0x358986a9, "snd_hda_mixer_amp_volume_info" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc3e68630, "query_amp_caps" },
	{ 0xc206b734, "hda_get_autocfg_input_label" },
	{ 0xecce1fd7, "snd_hda_set_vmaster_tlv" },
	{ 0x4b5f74d8, "snd_hda_codec_amp_init_stereo" },
	{ 0xfddd9ca9, "snd_hda_get_connections" },
	{ 0xb17515fb, "snd_hda_add_new_ctls" },
	{ 0x97e3e11, "snd_hda_codec_amp_update" },
	{ 0x848d93c5, "snd_hda_apply_verbs" },
};

MODULE_INFO(depends, "snd,snd-hda-core,snd-hda-codec,ledtrig-audio");

MODULE_ALIAS("hdaudio:v00000201r*a01*");

MODULE_INFO(srcversion, "806A8CDA367CBE91117A531");
