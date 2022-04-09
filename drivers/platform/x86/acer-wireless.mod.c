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
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x331337dc, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:10251229:*");

MODULE_INFO(srcversion, "56D95D5DBDCF090188B8F5C");
