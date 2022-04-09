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
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0x6a18377, "phy_read_mmd" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x743dc506, "ethnl_cable_test_result" },
	{ 0xf1546621, "__mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb4a9ba85, "ethnl_cable_test_fault_length" },
	{ 0xb006ade4, "phy_write_mmd" },
	{ 0x1fbb70c0, "__mdiobus_read" },
	{ 0x61495404, "phy_error" },
};

MODULE_INFO(depends, "libphy");


MODULE_INFO(srcversion, "683CF9829660D09D5606D00");
