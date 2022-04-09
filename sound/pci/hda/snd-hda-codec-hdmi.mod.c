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
	{ 0xb563e547, "snd_hdac_i915_set_bclk" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0x35e8756a, "snd_hdac_regmap_sync" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc783ef4, "snd_hda_get_num_devices" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x917ebe46, "snd_hda_jack_detect_enable" },
	{ 0x5724d6c8, "snd_hda_multi_out_dig_prepare" },
	{ 0x5834eed, "snd_hdac_codec_read" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0x1dcd0985, "snd_pcm_hw_constraint_step" },
	{ 0xed9661a7, "snd_device_free" },
	{ 0xe4e07754, "snd_hdac_print_channel_allocation" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0x6ea00aa2, "snd_info_create_card_entry" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd349d253, "seq_printf" },
	{ 0x7f42571f, "snd_pci_quirk_lookup" },
	{ 0xeda3a721, "snd_print_pcm_bits" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x36e596f9, "snd_hdac_get_sub_nodes" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5940f56, "snd_hdac_acomp_exit" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x67bfe791, "snd_hdac_spk_to_chmap" },
	{ 0xb35275d8, "snd_hda_spdif_ctls_unassign" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x32d5da2b, "snd_hdac_get_stream_stripe_ctl" },
	{ 0xb675ab6, "snd_hdac_check_power_state" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4e894c30, "snd_hda_jack_detect_enable_callback_mst" },
	{ 0x62d7be72, "snd_hdac_acomp_get_eld" },
	{ 0xfee65d19, "snd_hdac_regmap_write_raw" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0x1a8c6c95, "snd_hdac_acomp_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4c7ec4b6, "snd_hdac_get_ch_alloc_from_ca" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x847733d5, "snd_hda_codec_set_power_to_all" },
	{ 0x7f236267, "snd_hdac_regmap_add_vendor_verb" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0xed89e8a1, "snd_hdac_setup_channel_mapping" },
	{ 0x3bd544c2, "snd_hdac_get_active_channels" },
	{ 0x7fb2225a, "snd_hda_set_dev_select" },
	{ 0x2ee71b2f, "snd_hdac_power_down_pm" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7aba1fee, "snd_jack_new" },
	{ 0xc31c04cd, "snd_hda_spdif_ctls_assign" },
	{ 0xf218ff02, "is_jack_detectable" },
	{ 0x470fb7bf, "snd_hdac_register_chmap_ops" },
	{ 0x3b0c15f5, "__hda_codec_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x3e42aa0d, "snd_hda_spdif_out_of_nid" },
	{ 0x85f4869, "snd_hdac_acomp_register_notifier" },
	{ 0x770f3113, "snd_hda_sequence_write" },
	{ 0xf3c06c26, "snd_hda_ctl_add" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xa85b3901, "snd_hda_multi_out_dig_close" },
	{ 0xc79df3fe, "snd_hda_create_dig_out_ctls" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3bd32d1d, "snd_hda_jack_pin_sense" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xace4910d, "_snd_hdac_read_parm" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x92b1bf79, "snd_hda_codec_update_widgets" },
	{ 0x1f2062e2, "snd_hda_get_dev_select" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x77c754a8, "snd_hdac_chmap_to_spk_mask" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x2232adfa, "__snd_hda_codec_cleanup_stream" },
	{ 0x75a21e9a, "snd_hda_codec_pcm_new" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd6cda68f, "snd_hdac_query_supported_pcm" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf88cc0fc, "snd_info_free_entry" },
	{ 0x9cd82a2, "snd_hda_multi_out_dig_open" },
	{ 0x47b2a913, "snd_hda_jack_tbl_get_mst" },
	{ 0x7583e2f, "snd_hda_jack_tbl_get_from_tag" },
	{ 0x96848186, "scnprintf" },
	{ 0xb921c501, "snd_hdac_codec_write" },
	{ 0xe0ba5e1c, "snd_hda_codec_get_pincfg" },
	{ 0xc1e351ba, "hda_codec_driver_unregister" },
	{ 0x836b943d, "snd_pcm_add_chmap_ctls" },
	{ 0xa86891d5, "snd_hdac_channel_allocation" },
	{ 0x592d16b0, "snd_hda_codec_setup_stream" },
	{ 0x8ff64688, "snd_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbafc8453, "snd_hda_jack_set_dirty_all" },
	{ 0xcfa0e9da, "snd_hdac_add_chmap_ctls" },
	{ 0xd4e2457d, "snd_hda_jack_report_sync" },
	{ 0xc33d8244, "snd_hdac_sync_audio_rate" },
	{ 0xbef03806, "snd_hdac_power_up_pm" },
	{ 0x8b5ff101, "snd_hdac_get_connections" },
};

MODULE_INFO(depends, "snd-hda-core,snd,snd-hda-codec,snd-pcm");

MODULE_ALIAS("hdaudio:v1002793Cr*a01*");
MODULE_ALIAS("hdaudio:v10027919r*a01*");
MODULE_ALIAS("hdaudio:v1002791Ar*a01*");
MODULE_ALIAS("hdaudio:v1002AA01r*a01*");
MODULE_ALIAS("hdaudio:v10951390r*a01*");
MODULE_ALIAS("hdaudio:v10951392r*a01*");
MODULE_ALIAS("hdaudio:v17E80047r*a01*");
MODULE_ALIAS("hdaudio:v10DE0001r*a01*");
MODULE_ALIAS("hdaudio:v10DE0002r*a01*");
MODULE_ALIAS("hdaudio:v10DE0003r*a01*");
MODULE_ALIAS("hdaudio:v10DE0004r*a01*");
MODULE_ALIAS("hdaudio:v10DE0005r*a01*");
MODULE_ALIAS("hdaudio:v10DE0006r*a01*");
MODULE_ALIAS("hdaudio:v10DE0007r*a01*");
MODULE_ALIAS("hdaudio:v10DE0008r*a01*");
MODULE_ALIAS("hdaudio:v10DE0009r*a01*");
MODULE_ALIAS("hdaudio:v10DE000Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE000Br*a01*");
MODULE_ALIAS("hdaudio:v10DE000Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE000Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE0010r*a01*");
MODULE_ALIAS("hdaudio:v10DE0011r*a01*");
MODULE_ALIAS("hdaudio:v10DE0012r*a01*");
MODULE_ALIAS("hdaudio:v10DE0013r*a01*");
MODULE_ALIAS("hdaudio:v10DE0014r*a01*");
MODULE_ALIAS("hdaudio:v10DE0015r*a01*");
MODULE_ALIAS("hdaudio:v10DE0016r*a01*");
MODULE_ALIAS("hdaudio:v10DE0018r*a01*");
MODULE_ALIAS("hdaudio:v10DE0019r*a01*");
MODULE_ALIAS("hdaudio:v10DE001Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE001Br*a01*");
MODULE_ALIAS("hdaudio:v10DE001Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE0020r*a01*");
MODULE_ALIAS("hdaudio:v10DE0022r*a01*");
MODULE_ALIAS("hdaudio:v10DE0028r*a01*");
MODULE_ALIAS("hdaudio:v10DE0029r*a01*");
MODULE_ALIAS("hdaudio:v10DE002Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE002Er*a01*");
MODULE_ALIAS("hdaudio:v10DE002Fr*a01*");
MODULE_ALIAS("hdaudio:v10DE0030r*a01*");
MODULE_ALIAS("hdaudio:v10DE0040r*a01*");
MODULE_ALIAS("hdaudio:v10DE0041r*a01*");
MODULE_ALIAS("hdaudio:v10DE0042r*a01*");
MODULE_ALIAS("hdaudio:v10DE0043r*a01*");
MODULE_ALIAS("hdaudio:v10DE0044r*a01*");
MODULE_ALIAS("hdaudio:v10DE0045r*a01*");
MODULE_ALIAS("hdaudio:v10DE0050r*a01*");
MODULE_ALIAS("hdaudio:v10DE0051r*a01*");
MODULE_ALIAS("hdaudio:v10DE0052r*a01*");
MODULE_ALIAS("hdaudio:v10DE0060r*a01*");
MODULE_ALIAS("hdaudio:v10DE0061r*a01*");
MODULE_ALIAS("hdaudio:v10DE0062r*a01*");
MODULE_ALIAS("hdaudio:v10DE0067r*a01*");
MODULE_ALIAS("hdaudio:v10DE0070r*a01*");
MODULE_ALIAS("hdaudio:v10DE0071r*a01*");
MODULE_ALIAS("hdaudio:v10DE0072r*a01*");
MODULE_ALIAS("hdaudio:v10DE0073r*a01*");
MODULE_ALIAS("hdaudio:v10DE0074r*a01*");
MODULE_ALIAS("hdaudio:v10DE0076r*a01*");
MODULE_ALIAS("hdaudio:v10DE007Br*a01*");
MODULE_ALIAS("hdaudio:v10DE007Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Er*a01*");
MODULE_ALIAS("hdaudio:v10DE0080r*a01*");
MODULE_ALIAS("hdaudio:v10DE0081r*a01*");
MODULE_ALIAS("hdaudio:v10DE0082r*a01*");
MODULE_ALIAS("hdaudio:v10DE0083r*a01*");
MODULE_ALIAS("hdaudio:v10DE0084r*a01*");
MODULE_ALIAS("hdaudio:v10DE0090r*a01*");
MODULE_ALIAS("hdaudio:v10DE0091r*a01*");
MODULE_ALIAS("hdaudio:v10DE0092r*a01*");
MODULE_ALIAS("hdaudio:v10DE0093r*a01*");
MODULE_ALIAS("hdaudio:v10DE0094r*a01*");
MODULE_ALIAS("hdaudio:v10DE0095r*a01*");
MODULE_ALIAS("hdaudio:v10DE0097r*a01*");
MODULE_ALIAS("hdaudio:v10DE0098r*a01*");
MODULE_ALIAS("hdaudio:v10DE0099r*a01*");
MODULE_ALIAS("hdaudio:v10DE009Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE009Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE009Er*a01*");
MODULE_ALIAS("hdaudio:v10DE009Fr*a01*");
MODULE_ALIAS("hdaudio:v10DE00A0r*a01*");
MODULE_ALIAS("hdaudio:v10DE8001r*a01*");
MODULE_ALIAS("hdaudio:v10DE8067r*a01*");
MODULE_ALIAS("hdaudio:v11069F80r*a01*");
MODULE_ALIAS("hdaudio:v11069F81r*a01*");
MODULE_ALIAS("hdaudio:v11069F84r*a01*");
MODULE_ALIAS("hdaudio:v11069F85r*a01*");
MODULE_ALIAS("hdaudio:v80860054r*a01*");
MODULE_ALIAS("hdaudio:v80862800r*a01*");
MODULE_ALIAS("hdaudio:v80862801r*a01*");
MODULE_ALIAS("hdaudio:v80862802r*a01*");
MODULE_ALIAS("hdaudio:v80862803r*a01*");
MODULE_ALIAS("hdaudio:v80862804r*a01*");
MODULE_ALIAS("hdaudio:v80862805r*a01*");
MODULE_ALIAS("hdaudio:v80862806r*a01*");
MODULE_ALIAS("hdaudio:v80862807r*a01*");
MODULE_ALIAS("hdaudio:v80862808r*a01*");
MODULE_ALIAS("hdaudio:v80862809r*a01*");
MODULE_ALIAS("hdaudio:v8086280Ar*a01*");
MODULE_ALIAS("hdaudio:v8086280Br*a01*");
MODULE_ALIAS("hdaudio:v8086280Cr*a01*");
MODULE_ALIAS("hdaudio:v8086280Dr*a01*");
MODULE_ALIAS("hdaudio:v8086280Fr*a01*");
MODULE_ALIAS("hdaudio:v80862812r*a01*");
MODULE_ALIAS("hdaudio:v80862814r*a01*");
MODULE_ALIAS("hdaudio:v80862815r*a01*");
MODULE_ALIAS("hdaudio:v80862816r*a01*");
MODULE_ALIAS("hdaudio:v80862819r*a01*");
MODULE_ALIAS("hdaudio:v8086281Ar*a01*");
MODULE_ALIAS("hdaudio:v8086281Br*a01*");
MODULE_ALIAS("hdaudio:v8086281Cr*a01*");
MODULE_ALIAS("hdaudio:v80862880r*a01*");
MODULE_ALIAS("hdaudio:v80862882r*a01*");
MODULE_ALIAS("hdaudio:v80862883r*a01*");
MODULE_ALIAS("hdaudio:v808629FBr*a01*");
MODULE_ALIAS("hdaudio:v00000101r*a01*");

MODULE_INFO(srcversion, "3C3108BC4BB10F41D6D24D5");
