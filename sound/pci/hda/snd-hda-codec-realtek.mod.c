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
	{ 0x74b19b38, "snd_hda_jack_add_kctl_mst" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x35e8756a, "snd_hdac_regmap_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9065a1b6, "snd_hda_gen_add_mute_led_cdev" },
	{ 0xe86dcd6a, "snd_hda_gen_free" },
	{ 0x4cb6900e, "snd_hda_codec_get_pin_target" },
	{ 0xffdda54f, "component_unbind_all" },
	{ 0xe376a76c, "snd_hda_mixer_amp_volume_put" },
	{ 0x5834eed, "snd_hdac_codec_read" },
	{ 0x754d539c, "strlen" },
	{ 0xb1c14199, "snd_hda_gen_parse_auto_config" },
	{ 0x1e5e4c93, "snd_hda_apply_fixup" },
	{ 0xb9d799eb, "snd_hda_add_verbs" },
	{ 0x213aa545, "snd_hda_pick_fixup" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x7f42571f, "snd_pci_quirk_lookup" },
	{ 0x3c99228e, "component_bind_all" },
	{ 0xbf0e44d6, "snd_hda_mixer_amp_tlv" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe8ad9a28, "snd_hda_gen_build_pcms" },
	{ 0xc3a1d832, "component_match_add_release" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x8a1dba4, "snd_hda_override_conn_list" },
	{ 0xdc809832, "snd_hda_jack_unsol_event" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x72e3b1b, "snd_hda_codec_set_pincfg" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0xaba1efb, "snd_hda_mixer_amp_switch_put" },
	{ 0x453052cb, "snd_hda_gen_update_outputs" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x331337dc, "input_event" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4e894c30, "snd_hda_jack_detect_enable_callback_mst" },
	{ 0x829115ea, "snd_hda_mixer_amp_volume_get" },
	{ 0xf2bb95a, "snd_hda_codec_set_name" },
	{ 0xfee65d19, "snd_hdac_regmap_write_raw" },
	{ 0x1fb0871e, "_snd_hda_set_pin_ctl" },
	{ 0xd9f0419d, "snd_hda_gen_hp_automute" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4b7b502e, "snd_hda_gen_check_power_status" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3ba1b942, "snd_hda_codec_set_pin_target" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x6b5dac7d, "snd_hda_mixer_amp_switch_get" },
	{ 0xad34695, "snd_hda_gen_add_micmute_led_cdev" },
	{ 0x2ee71b2f, "snd_hdac_power_down_pm" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xee4c9acb, "snd_hda_gen_path_power_filter" },
	{ 0xf218ff02, "is_jack_detectable" },
	{ 0xe46e19a8, "snd_hda_gen_init" },
	{ 0x8243b14, "snd_hda_parse_pin_defcfg" },
	{ 0x95aa915, "snd_hda_jack_set_gating_jack" },
	{ 0x3b0c15f5, "__hda_codec_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xede1c9f1, "snd_hda_override_amp_caps" },
	{ 0x3c42af53, "snd_hda_jack_bind_keymap" },
	{ 0xb2786cb3, "snd_hda_find_mixer_ctl" },
	{ 0x770f3113, "snd_hda_sequence_write" },
	{ 0xb8392457, "snd_hda_get_bool_hint" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x7a86634a, "snd_hdac_override_parm" },
	{ 0xb04e3e7c, "snd_hda_pick_pin_fixup" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xace4910d, "_snd_hdac_read_parm" },
	{ 0x94718172, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa13ba784, "snd_hda_gen_add_kctl" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xcde7de92, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0xb921c501, "snd_hdac_codec_write" },
	{ 0xe0ba5e1c, "snd_hda_codec_get_pincfg" },
	{ 0x5a806f4d, "snd_hda_apply_pincfgs" },
	{ 0xc1e351ba, "hda_codec_driver_unregister" },
	{ 0xdc453f3e, "snd_hda_mixer_amp_switch_info" },
	{ 0x6ef2e71f, "snd_hda_jack_set_button_state" },
	{ 0x8a96c71f, "component_master_add_with_match" },
	{ 0xe93066aa, "snd_hda_gen_spec_init" },
	{ 0x546a9aa9, "snd_hda_jack_detect_state_mst" },
	{ 0x358986a9, "snd_hda_mixer_amp_volume_info" },
	{ 0xc3e68630, "query_amp_caps" },
	{ 0x64b4fa70, "snd_hda_gen_build_controls" },
	{ 0xbef03806, "snd_hdac_power_up_pm" },
	{ 0x848d93c5, "snd_hda_apply_verbs" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x2e707bc8, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec,snd-hda-core,snd-hda-codec-generic,snd");

MODULE_ALIAS("hdaudio:v10EC0215r*a01*");
MODULE_ALIAS("hdaudio:v10EC0221r*a01*");
MODULE_ALIAS("hdaudio:v10EC0222r*a01*");
MODULE_ALIAS("hdaudio:v10EC0225r*a01*");
MODULE_ALIAS("hdaudio:v10EC0230r*a01*");
MODULE_ALIAS("hdaudio:v10EC0231r*a01*");
MODULE_ALIAS("hdaudio:v10EC0233r*a01*");
MODULE_ALIAS("hdaudio:v10EC0234r*a01*");
MODULE_ALIAS("hdaudio:v10EC0235r*a01*");
MODULE_ALIAS("hdaudio:v10EC0236r*a01*");
MODULE_ALIAS("hdaudio:v10EC0245r*a01*");
MODULE_ALIAS("hdaudio:v10EC0255r*a01*");
MODULE_ALIAS("hdaudio:v10EC0256r*a01*");
MODULE_ALIAS("hdaudio:v10EC0257r*a01*");
MODULE_ALIAS("hdaudio:v10EC0260r*a01*");
MODULE_ALIAS("hdaudio:v10EC0262r*a01*");
MODULE_ALIAS("hdaudio:v10EC0267r*a01*");
MODULE_ALIAS("hdaudio:v10EC0268r*a01*");
MODULE_ALIAS("hdaudio:v10EC0269r*a01*");
MODULE_ALIAS("hdaudio:v10EC0270r*a01*");
MODULE_ALIAS("hdaudio:v10EC0272r*a01*");
MODULE_ALIAS("hdaudio:v10EC0274r*a01*");
MODULE_ALIAS("hdaudio:v10EC0275r*a01*");
MODULE_ALIAS("hdaudio:v10EC0276r*a01*");
MODULE_ALIAS("hdaudio:v10EC0280r*a01*");
MODULE_ALIAS("hdaudio:v10EC0282r*a01*");
MODULE_ALIAS("hdaudio:v10EC0283r*a01*");
MODULE_ALIAS("hdaudio:v10EC0284r*a01*");
MODULE_ALIAS("hdaudio:v10EC0285r*a01*");
MODULE_ALIAS("hdaudio:v10EC0286r*a01*");
MODULE_ALIAS("hdaudio:v10EC0287r*a01*");
MODULE_ALIAS("hdaudio:v10EC0288r*a01*");
MODULE_ALIAS("hdaudio:v10EC0289r*a01*");
MODULE_ALIAS("hdaudio:v10EC0290r*a01*");
MODULE_ALIAS("hdaudio:v10EC0292r*a01*");
MODULE_ALIAS("hdaudio:v10EC0293r*a01*");
MODULE_ALIAS("hdaudio:v10EC0294r*a01*");
MODULE_ALIAS("hdaudio:v10EC0295r*a01*");
MODULE_ALIAS("hdaudio:v10EC0298r*a01*");
MODULE_ALIAS("hdaudio:v10EC0299r*a01*");
MODULE_ALIAS("hdaudio:v10EC0300r*a01*");
MODULE_ALIAS("hdaudio:v10EC0623r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r00100340a01*");
MODULE_ALIAS("hdaudio:v10EC0660r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r*a01*");
MODULE_ALIAS("hdaudio:v10EC0862r*a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100002a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100300a01*");
MODULE_ALIAS("hdaudio:v10EC0663r*a01*");
MODULE_ALIAS("hdaudio:v10EC0665r*a01*");
MODULE_ALIAS("hdaudio:v10EC0667r*a01*");
MODULE_ALIAS("hdaudio:v10EC0668r*a01*");
MODULE_ALIAS("hdaudio:v10EC0670r*a01*");
MODULE_ALIAS("hdaudio:v10EC0671r*a01*");
MODULE_ALIAS("hdaudio:v10EC0680r*a01*");
MODULE_ALIAS("hdaudio:v10EC0700r*a01*");
MODULE_ALIAS("hdaudio:v10EC0701r*a01*");
MODULE_ALIAS("hdaudio:v10EC0703r*a01*");
MODULE_ALIAS("hdaudio:v10EC0711r*a01*");
MODULE_ALIAS("hdaudio:v10EC0867r*a01*");
MODULE_ALIAS("hdaudio:v10EC0880r*a01*");
MODULE_ALIAS("hdaudio:v10EC0882r*a01*");
MODULE_ALIAS("hdaudio:v10EC0883r*a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100103a01*");
MODULE_ALIAS("hdaudio:v10EC0885r*a01*");
MODULE_ALIAS("hdaudio:v10EC0887r*a01*");
MODULE_ALIAS("hdaudio:v10EC0888r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0888r*a01*");
MODULE_ALIAS("hdaudio:v10EC0889r*a01*");
MODULE_ALIAS("hdaudio:v10EC0892r*a01*");
MODULE_ALIAS("hdaudio:v10EC0897r*a01*");
MODULE_ALIAS("hdaudio:v10EC0899r*a01*");
MODULE_ALIAS("hdaudio:v10EC0900r*a01*");
MODULE_ALIAS("hdaudio:v10EC0B00r*a01*");
MODULE_ALIAS("hdaudio:v10EC1168r*a01*");
MODULE_ALIAS("hdaudio:v10EC1220r*a01*");

MODULE_INFO(srcversion, "BA10D9B04ED65B9F60D8B03");
