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
	{ 0x77b43c6f, "snd_soc_dapm_kcontrol_widget" },
	{ 0xb2d5a5e5, "snd_hdac_codec_link_up" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x4a5a0dd5, "pm_runtime_force_suspend" },
	{ 0xd847b881, "hdac_get_device_id" },
	{ 0x685d5b31, "device_link_add" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x5834eed, "snd_hdac_codec_read" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0xa60642c9, "snd_hdac_ext_bus_get_link" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xd269668f, "snd_soc_add_card_controls" },
	{ 0xbab85700, "snd_hdac_ext_bus_link_put" },
	{ 0x45bf28cb, "snd_soc_dapm_info_pin_switch" },
	{ 0x68830608, "snd_soc_dapm_put_pin_switch" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa4cd87c0, "pm_runtime_force_resume" },
	{ 0x36e596f9, "snd_hdac_get_sub_nodes" },
	{ 0x64f36507, "snd_soc_dapm_new_controls" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaa6d2f5c, "snd_hda_ext_driver_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x195b4605, "snd_pcm_hw_constraint_eld" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb675ab6, "snd_hdac_check_power_state" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xebc7281d, "snd_soc_dapm_add_routes" },
	{ 0x5b81a2d1, "snd_pcm_hw_constraint_mask64" },
	{ 0x6e13e5f5, "snd_hda_ext_driver_register" },
	{ 0x7c04012c, "snd_hdac_display_power" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x62d7be72, "snd_hdac_acomp_get_eld" },
	{ 0xbc85fa84, "dapm_kcontrol_get_value" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9141a884, "snd_hdac_codec_link_down" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0xed89e8a1, "snd_hdac_setup_channel_mapping" },
	{ 0x3bd544c2, "snd_hdac_get_active_channels" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc6a16883, "snd_hdac_ext_bus_link_get" },
	{ 0x470fb7bf, "snd_hdac_register_chmap_ops" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x2021cce3, "snd_hdac_read_parm_uncached" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x92f71b5a, "devm_kmemdup" },
	{ 0x85f4869, "snd_hdac_acomp_register_notifier" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1eac9515, "snd_soc_dapm_get_pin_switch" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xace4910d, "_snd_hdac_read_parm" },
	{ 0x6f488baa, "devm_kstrdup" },
	{ 0xcc3f679a, "snd_soc_dapm_new_widgets" },
	{ 0x29e1e204, "hdmi_audio_infoframe_pack" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8c14a72f, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x289690ca, "snd_hdac_refresh_widgets" },
	{ 0xd6cda68f, "snd_hdac_query_supported_pcm" },
	{ 0xb1969174, "snd_soc_dapm_disable_pin" },
	{ 0x37663150, "snd_soc_dapm_enable_pin" },
	{ 0xb921c501, "snd_hdac_codec_write" },
	{ 0xb14ab1ef, "hdmi_audio_infoframe_init" },
	{ 0xa86891d5, "snd_hdac_channel_allocation" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4cb3da10, "snd_soc_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcfa0e9da, "snd_hdac_add_chmap_ctls" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0xb44853e7, "snd_hdac_sync_power_state" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8b5ff101, "snd_hdac_get_connections" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd-hda-core,snd-hda-ext-core,snd-pcm,snd");

MODULE_ALIAS("hdaudio:v80862809r00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Ar00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Br00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Cr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Dr00100000a02*");

MODULE_INFO(srcversion, "91062CB0386D74D4C9C8294");
