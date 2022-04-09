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
	{ 0xbb4f9d1f, "sdw_intel_acpi_scan" },
	{ 0xee111615, "param_ops_int" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa010ba68, "is_acpi_device_node" },
};

MODULE_INFO(depends, "snd-intel-sdw-acpi");


MODULE_INFO(srcversion, "3E4463BCD77E1BF614071E6");
