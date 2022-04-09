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
	{ 0xd3cdb504, "gpiochip_generic_config" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x1b8822d8, "pinctrl_gpio_direction_output" },
	{ 0xf9a427da, "gpiochip_generic_free" },
	{ 0xd349d253, "seq_printf" },
	{ 0x27ecdc7f, "handle_edge_irq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3b655c11, "gpiochip_line_is_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x854dcea, "__irq_resolve_mapping" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x1635878b, "gpiochip_is_requested" },
	{ 0x191cbdb3, "devm_pinctrl_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf92c8476, "gpiochip_get_data" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb9ca8b33, "handle_bad_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe2b22f3c, "pinctrl_dev_get_drvdata" },
	{ 0x37771edf, "gpiochip_add_pin_range" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8b649654, "devm_gpiochip_add_data_with_key" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x29d72e8f, "gpiochip_generic_request" },
	{ 0x1bc5eebe, "pinctrl_gpio_direction_input" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x2a0e2407, "handle_level_irq" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "01C0C8076C2BF508AE8168B");
