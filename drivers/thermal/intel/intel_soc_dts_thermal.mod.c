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
	{ 0xee111615, "param_ops_int" },
	{ 0x168b127c, "intel_soc_dts_iosf_exit" },
	{ 0x7b5452b8, "acpi_unregister_gsi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xea850c32, "intel_soc_dts_iosf_add_read_only_critical_trip" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7078a97c, "acpi_register_gsi" },
	{ 0xb7dcf911, "intel_soc_dts_iosf_init" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x58f23253, "intel_soc_dts_iosf_interrupt_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_soc_dts_iosf");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0037:feature:*");

MODULE_INFO(srcversion, "D069B30D94521647CD387A5");
