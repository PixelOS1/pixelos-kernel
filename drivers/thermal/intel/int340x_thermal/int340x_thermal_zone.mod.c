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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xdaa06dc1, "acpi_lpat_raw_to_temp" },
	{ 0xff241572, "thermal_zone_device_register" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xdb63a944, "acpi_lpat_get_conversion_table" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7e9c3c56, "thermal_zone_device_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x7de65a03, "acpi_lpat_free_conversion_table" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb46f8f6b, "thermal_zone_device_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD90E035C9F04CB7EEE49F2");
