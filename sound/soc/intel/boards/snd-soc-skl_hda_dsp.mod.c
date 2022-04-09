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
	{ 0xf295d712, "devm_snd_soc_register_card" },
	{ 0xfe1543ff, "hda_dsp_hdmi_build_controls" },
	{ 0x3a2cbd36, "snd_soc_pm_ops" },
	{ 0xea6e2497, "snd_hda_set_power_save" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf6f150fe, "hdac_hdmi_jack_port_init" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf9b5cd80, "snd_jack_add_new_kctl" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x673875ec, "snd_soc_card_jack_new" },
	{ 0xc467dca0, "hdac_hdmi_jack_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-intel-hda-dsp-common,snd-hda-codec,snd-soc-hdac-hdmi,snd");


MODULE_INFO(srcversion, "DC0BD8C0FE7CD3370ECD132");
