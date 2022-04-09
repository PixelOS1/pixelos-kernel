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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x6dbc2faa, "devm_extcon_dev_register" },
	{ 0xc89c60ff, "devm_extcon_dev_allocate" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xf8db5365, "devm_acpi_dev_add_driver_gpios" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x89c207f0, "extcon_set_state_sync" },
	{ 0xf9cd2564, "gpiod_direction_output" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT3496:*");

MODULE_INFO(srcversion, "FF97F96CBB8D3585F17C80E");
