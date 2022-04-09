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
	{ 0x570c8604, "fwnode_property_read_u8_array" },
	{ 0xee111615, "param_ops_int" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x764a945, "acpi_fetch_acpi_dev" },
	{ 0x9c5d0384, "fwnode_get_named_child_node" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C66D32FD381188908EDE134");
