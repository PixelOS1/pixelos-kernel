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
	{ 0x25e423d8, "clk_hw_register_fixed_factor" },
	{ 0xb6897bf3, "clk_hw_get_name" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xaa33cf7b, "__devm_regmap_init_mmio_clk" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x3419636e, "platform_get_resource_byname" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x82ff4b95, "clk_hw_unregister_fixed_factor" },
	{ 0xf4f69d1f, "clk_hw_unregister_gate" },
	{ 0xb233c09e, "clk_hw_get_parent" },
	{ 0x92997ed8, "_printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa4b8c44c, "clk_hw_set_rate_range" },
	{ 0x1fd6b8ac, "devm_clk_hw_register" },
	{ 0x773f2713, "clk_hw_unregister_mux" },
	{ 0x66b26b2b, "clk_hw_unregister_divider" },
	{ 0x978070df, "__clk_hw_register_gate" },
	{ 0x55d10913, "__clk_hw_register_divider" },
	{ 0xfa77922d, "__clk_hw_register_mux" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "regmap-mmio");

MODULE_ALIAS("of:N*T*Cxlnx,vcu");
MODULE_ALIAS("of:N*T*Cxlnx,vcuC*");
MODULE_ALIAS("of:N*T*Cxlnx,vcu-logicoreip-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,vcu-logicoreip-1.0C*");

MODULE_INFO(srcversion, "2E7FCC6071AC56BCA0B709A");
