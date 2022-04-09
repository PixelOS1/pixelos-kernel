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
	{ 0xfd5f20cf, "generic_handle_domain_irq" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x7b6f9536, "acpi_register_wakeup_handler" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x37771edf, "gpiochip_add_pin_range" },
	{ 0x27d9398f, "gpiochip_add_data_with_key" },
	{ 0xf8049ecb, "handle_simple_irq" },
	{ 0x191cbdb3, "devm_pinctrl_register" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xe2b22f3c, "pinctrl_dev_get_drvdata" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd349d253, "seq_printf" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x2a0e2407, "handle_level_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x27ecdc7f, "handle_edge_irq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf92c8476, "gpiochip_get_data" },
	{ 0x8a45a555, "acpi_unregister_wakeup_handler" },
	{ 0x837887c6, "gpiochip_remove" },
	{ 0x3b655c11, "gpiochip_line_is_irq" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:AMD0030:*");
MODULE_ALIAS("acpi*:AMDI0030:*");
MODULE_ALIAS("acpi*:AMDI0031:*");

MODULE_INFO(srcversion, "EB91CC09BA9F4A087CFCF0F");
