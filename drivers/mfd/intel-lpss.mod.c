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
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x5a9b22b7, "mfd_remove_devices" },
	{ 0xa20311be, "clk_register_fractional_divider" },
	{ 0xfbeabbe6, "dev_pm_qos_hide_latency_tolerance" },
	{ 0x39e60e9d, "debugfs_create_x32" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x5d9dfb8d, "mfd_add_devices" },
	{ 0xffb7c514, "ida_free" },
	{ 0xf409a7e4, "devm_ioremap_uc" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x5d5f5d8e, "clk_register_fixed_rate" },
	{ 0x92f71b5a, "devm_kmemdup" },
	{ 0xea85470f, "device_for_each_child_reverse" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0x65464c16, "clkdev_drop" },
	{ 0x86b427ce, "clkdev_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x35e60961, "dev_pm_qos_expose_latency_tolerance" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x5b78ad8c, "clk_register_gate" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "mfd-core");


MODULE_INFO(srcversion, "E515B8FC06ADC0BF1AED508");
