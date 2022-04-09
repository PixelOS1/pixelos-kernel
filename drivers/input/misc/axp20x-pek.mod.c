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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf7175300, "regmap_read" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x754d539c, "strlen" },
	{ 0x9166fada, "strncpy" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x423d2e97, "devm_request_any_context_irq" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x8ccf5210, "platform_get_irq_byname" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x331337dc, "input_event" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:axp20x-pek");
MODULE_ALIAS("platform:axp221-pek");

MODULE_INFO(srcversion, "6F0F93FA0D18A8F2CE5A8E3");
