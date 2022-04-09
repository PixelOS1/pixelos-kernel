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
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x10e0965b, "intel_th_alloc" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbd40e8d3, "intel_th_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xa010ba68, "is_acpi_device_node" },
};

MODULE_INFO(depends, "intel_th");

MODULE_ALIAS("acpi*:INTC1000:*");
MODULE_ALIAS("acpi*:INTC1001:*");

MODULE_INFO(srcversion, "FE51CA45152971D232C17F8");
