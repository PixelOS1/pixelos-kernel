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
	{ 0x1b8822d8, "pinctrl_gpio_direction_output" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfd5f20cf, "generic_handle_domain_irq" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x1bc5eebe, "pinctrl_gpio_direction_input" },
	{ 0x37771edf, "gpiochip_add_pin_range" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x2a0e2407, "handle_level_irq" },
	{ 0x27ecdc7f, "handle_edge_irq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf92c8476, "gpiochip_get_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb5a1d574, "irq_domain_associate_many" },
	{ 0xa81779fc, "__devm_irq_alloc_descs" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0x8b649654, "devm_gpiochip_add_data_with_key" },
	{ 0xb9ca8b33, "handle_bad_irq" },
	{ 0xf9a427da, "gpiochip_generic_free" },
	{ 0x29d72e8f, "gpiochip_generic_request" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x191cbdb3, "devm_pinctrl_register" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
	{ 0x92f71b5a, "devm_kmemdup" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9d9efa48, "intel_pinctrl_get_soc_data" },
	{ 0xd349d253, "seq_printf" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xe2b22f3c, "pinctrl_dev_get_drvdata" },
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pinctrl-intel");

MODULE_ALIAS("acpi*:INT33FF:*");

MODULE_INFO(srcversion, "2A5BDFDA8A8F514E7177813");
