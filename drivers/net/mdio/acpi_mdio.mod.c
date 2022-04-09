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
	{ 0x6f5ab52f, "acpi_get_local_address" },
	{ 0xa17ef8db, "set_primary_fwnode" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4901bf50, "fwnode_get_next_child_node" },
	{ 0x40e4e011, "fwnode_mdiobus_register_phy" },
	{ 0xa010ba68, "is_acpi_device_node" },
};

MODULE_INFO(depends, "libphy,fwnode_mdio");


MODULE_INFO(srcversion, "110E1DE550F728DB44CB499");
