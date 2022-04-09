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
	{ 0x331337dc, "input_event" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ASIM0000:*");

MODULE_INFO(srcversion, "0BECF14DE9887040D59099F");
