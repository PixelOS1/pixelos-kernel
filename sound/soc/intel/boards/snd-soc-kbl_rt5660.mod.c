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
	{ 0x8505272c, "snd_pcm_hw_constraint_msbits" },
	{ 0x3a2cbd36, "snd_soc_pm_ops" },
	{ 0x45bf28cb, "snd_soc_dapm_info_pin_switch" },
	{ 0x68830608, "snd_soc_dapm_put_pin_switch" },
	{ 0xf7998053, "snd_soc_dai_set_pll" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xf6f150fe, "hdac_hdmi_jack_port_init" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf8db5365, "devm_acpi_dev_add_driver_gpios" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1eac9515, "snd_soc_dapm_get_pin_switch" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x45b7b077, "snd_soc_dai_set_sysclk" },
	{ 0x673875ec, "snd_soc_card_jack_new" },
	{ 0xc467dca0, "hdac_hdmi_jack_init" },
	{ 0x71a2f43b, "snd_soc_dapm_force_enable_pin" },
	{ 0xece9fcba, "snd_soc_jack_add_gpios" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xb2922cca, "gpiod_put" },
	{ 0x2c360504, "gpiod_get" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-hdac-hdmi");

MODULE_ALIAS("platform:kbl_rt5660");

MODULE_INFO(srcversion, "0B3624C4E8195C428914E22");
