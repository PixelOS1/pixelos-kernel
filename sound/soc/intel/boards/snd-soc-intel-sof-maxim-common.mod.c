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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xd269668f, "snd_soc_add_card_controls" },
	{ 0x45bf28cb, "snd_soc_dapm_info_pin_switch" },
	{ 0x68830608, "snd_soc_dapm_put_pin_switch" },
	{ 0x64f36507, "snd_soc_dapm_new_controls" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xebc7281d, "snd_soc_dapm_add_routes" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1eac9515, "snd_soc_dapm_get_pin_switch" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8c14a72f, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1969174, "snd_soc_dapm_disable_pin" },
	{ 0x37663150, "snd_soc_dapm_enable_pin" },
	{ 0x4ab909f7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "EC272310AE264658D57D12D");
