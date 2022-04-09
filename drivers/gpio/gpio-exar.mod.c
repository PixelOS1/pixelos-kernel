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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8b649654, "devm_gpiochip_add_data_with_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xaa33cf7b, "__devm_regmap_init_mmio_clk" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xffb7c514, "ida_free" },
	{ 0x89feef86, "regmap_test_bits" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xf92c8476, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "regmap-mmio");


MODULE_INFO(srcversion, "8D465DE0BBE5BACC06B56A2");
