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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6eb704bc, "rt5682_readable_register" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x43386e72, "rt5682_reset" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf7175300, "regmap_read" },
	{ 0x6631a567, "devm_clk_get_optional" },
	{ 0x2c8da5cf, "rt5682_apply_patch_list" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0xf9619ca2, "rt5682_aif2_dai_ops" },
	{ 0xe8b9c7c7, "rt5682_volatile_register" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x125627a1, "rt5682_aif1_dai_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x28730696, "rt5682_supply_names" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xdb9a1ff1, "rt5682_calibrate" },
	{ 0xc3e41dfd, "rt5682_soc_component_dev" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3cfdcf52, "devm_gpio_request_one" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xb897de56, "rt5682_reg" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xdcf6541c, "rt5682_register_dai_clks" },
	{ 0x59d3d967, "rt5682_jack_detect_handler" },
	{ 0x835107c5, "rt5682_parse_dt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xad44d8dd, "snd_soc_component_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
};

MODULE_INFO(depends, "snd-soc-rt5682,i2c-core,regmap-i2c,snd-soc-core");

MODULE_ALIAS("i2c:rt5682");
MODULE_ALIAS("acpi*:10EC5682:*");
MODULE_ALIAS("of:N*T*Crealtek,rt5682i");
MODULE_ALIAS("of:N*T*Crealtek,rt5682iC*");

MODULE_INFO(srcversion, "82AC1F440EAC842C6C09C84");
