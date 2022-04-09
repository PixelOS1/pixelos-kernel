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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xaa10ea97, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x4a5a0dd5, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0x75ff8ef3, "regmap_multi_reg_write" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xa4cd87c0, "pm_runtime_force_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x8685ce01, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0xece9fcba, "snd_soc_jack_add_gpios" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core");

MODULE_ALIAS("acpi*:14F10720:*");
MODULE_ALIAS("i2c:cx20721");
MODULE_ALIAS("i2c:cx20723");

MODULE_INFO(srcversion, "F3F5C35699DB3B66BB74D16");
