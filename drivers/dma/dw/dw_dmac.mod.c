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
	{ 0x1ee3e902, "idma32_dma_probe" },
	{ 0x815588a6, "clk_enable" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6c204264, "dw_dma_probe" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x6631a567, "devm_clk_get_optional" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xfd7d58c5, "dw_dma_acpi_controller_register" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x29e6423b, "dw_dma_remove" },
	{ 0x163ecea4, "do_dw_dma_enable" },
	{ 0x92f71b5a, "devm_kmemdup" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xefe0c5c2, "do_dw_dma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
	{ 0x15727ee9, "idma32_dma_remove" },
	{ 0x2fb02c98, "dw_dma_acpi_controller_free" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("acpi*:INTL9C60:*");
MODULE_ALIAS("acpi*:80862286:*");
MODULE_ALIAS("acpi*:808622C0:*");
MODULE_ALIAS("acpi*:80864BB4:*");
MODULE_ALIAS("acpi*:80864BB5:*");
MODULE_ALIAS("acpi*:80864BB6:*");

MODULE_INFO(srcversion, "7F088F58499F1D2E7B66201");
