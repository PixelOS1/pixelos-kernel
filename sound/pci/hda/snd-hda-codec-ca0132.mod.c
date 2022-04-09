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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6da03c6e, "snd_hda_codec_load_dsp_prepare" },
	{ 0x5724d6c8, "snd_hda_multi_out_dig_prepare" },
	{ 0xe376a76c, "snd_hda_mixer_amp_volume_put" },
	{ 0x5834eed, "snd_hdac_codec_read" },
	{ 0x754d539c, "strlen" },
	{ 0xbfcb2f71, "snd_hda_codec_amp_stereo" },
	{ 0x463ef77f, "snd_hda_codec_load_dsp_trigger" },
	{ 0xeb863027, "__snd_hda_add_vmaster" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7f42571f, "snd_pci_quirk_lookup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbf0e44d6, "snd_hda_mixer_amp_tlv" },
	{ 0x46f46850, "snd_hda_jack_add_kctls" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdc809832, "snd_hda_jack_unsol_event" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaba1efb, "snd_hda_mixer_amp_switch_put" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4e894c30, "snd_hda_jack_detect_enable_callback_mst" },
	{ 0x829115ea, "snd_hda_mixer_amp_volume_get" },
	{ 0xf2bb95a, "snd_hda_codec_set_name" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x1fb0871e, "_snd_hda_set_pin_ctl" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6b5dac7d, "snd_hda_mixer_amp_switch_get" },
	{ 0x2ee71b2f, "snd_hdac_power_down_pm" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x722aa365, "snd_hda_create_spdif_in_ctls" },
	{ 0x8243b14, "snd_hda_parse_pin_defcfg" },
	{ 0x3b0c15f5, "__hda_codec_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xede1c9f1, "snd_hda_override_amp_caps" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x770f3113, "snd_hda_sequence_write" },
	{ 0x80c9fb52, "snd_hda_create_spdif_share_sw" },
	{ 0xf3c06c26, "snd_hda_ctl_add" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xa85b3901, "snd_hda_multi_out_dig_close" },
	{ 0xc79df3fe, "snd_hda_create_dig_out_ctls" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xace4910d, "_snd_hdac_read_parm" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x92b1bf79, "snd_hda_codec_update_widgets" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x90f8fc44, "snd_hda_multi_out_dig_cleanup" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x2232adfa, "__snd_hda_codec_cleanup_stream" },
	{ 0x75a21e9a, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9cd82a2, "snd_hda_multi_out_dig_open" },
	{ 0x47b2a913, "snd_hda_jack_tbl_get_mst" },
	{ 0xb921c501, "snd_hdac_codec_write" },
	{ 0x1564421, "request_firmware" },
	{ 0x5a806f4d, "snd_hda_apply_pincfgs" },
	{ 0xc1e351ba, "hda_codec_driver_unregister" },
	{ 0xdc453f3e, "snd_hda_mixer_amp_switch_info" },
	{ 0x836b943d, "snd_pcm_add_chmap_ctls" },
	{ 0xeb52a73e, "snd_hdac_power_down" },
	{ 0x592d16b0, "snd_hda_codec_setup_stream" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x546a9aa9, "snd_hda_jack_detect_state_mst" },
	{ 0x41d39b7c, "snd_hda_codec_load_dsp_cleanup" },
	{ 0x358986a9, "snd_hda_mixer_amp_volume_info" },
	{ 0xd4e2457d, "snd_hda_jack_report_sync" },
	{ 0xecce1fd7, "snd_hda_set_vmaster_tlv" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xbef03806, "snd_hdac_power_up_pm" },
	{ 0xb17515fb, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0x97e3e11, "snd_hda_codec_amp_update" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd,snd-pcm");

MODULE_ALIAS("hdaudio:v11020011r*a01*");

MODULE_INFO(srcversion, "E2FDCF549AECC87663E546F");
