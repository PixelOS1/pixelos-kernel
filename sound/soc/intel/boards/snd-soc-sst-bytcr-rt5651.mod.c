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
	{ 0xf295d712, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xee111615, "param_ops_int" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x38d8baf3, "device_add_software_node" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0xd269668f, "snd_soc_add_card_controls" },
	{ 0x3a2cbd36, "snd_soc_pm_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x45bf28cb, "snd_soc_dapm_info_pin_switch" },
	{ 0x68830608, "snd_soc_dapm_put_pin_switch" },
	{ 0xf7998053, "snd_soc_dai_set_pll" },
	{ 0x6f734d78, "snd_soc_component_update_bits" },
	{ 0x6631a567, "devm_clk_get_optional" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xabfc1a9f, "snd_jack_set_key" },
	{ 0x268c8090, "device_remove_software_node" },
	{ 0xebc7281d, "snd_soc_dapm_add_routes" },
	{ 0x2911f3d3, "acpi_get_first_physical_node" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0xa2f7d24c, "devm_fwnode_gpiod_get_index" },
	{ 0x5a921311, "strncmp" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf8db5365, "devm_acpi_dev_add_driver_gpios" },
	{ 0x1eac9515, "snd_soc_dapm_get_pin_switch" },
	{ 0x6ac34c66, "fwnode_create_software_node" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6f488baa, "devm_kstrdup" },
	{ 0x2279f2e9, "snd_soc_component_set_jack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x45b7b077, "snd_soc_dai_set_sysclk" },
	{ 0x16e6d67f, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x673875ec, "snd_soc_card_jack_new" },
	{ 0x861ea35f, "snd_soc_dai_set_fmt" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x4ab909f7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xbadb6a35, "to_software_node" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x6c5d2bcd, "snd_soc_acpi_find_package_from_hid" },
	{ 0x406c510c, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm,snd-soc-acpi");


MODULE_INFO(srcversion, "7BBB0E5AEE8915A6E852858");
