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
	{ 0x27ecdc7f, "handle_edge_irq" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x854dcea, "__irq_resolve_mapping" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x7b6f9536, "acpi_register_wakeup_handler" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb7214e95, "pm_wakeup_dev_event" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a45a555, "acpi_unregister_wakeup_handler" },
	{ 0x8b649654, "devm_gpiochip_add_data_with_key" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xcea381dd, "x86_match_cpu" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT0002:*");

MODULE_INFO(srcversion, "7EDBBBC393213430AF46889");
