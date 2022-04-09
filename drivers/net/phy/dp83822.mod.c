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
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0x7804184c, "phy_get_internal_delay" },
	{ 0xf3930255, "phy_modify_changed" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa4e1f88e, "genphy_suspend" },
	{ 0x9f14a8c0, "genphy_resume" },
	{ 0x1194b4a6, "genphy_read_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0x61495404, "phy_error" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0xb006ade4, "phy_write_mmd" },
	{ 0x6a18377, "phy_read_mmd" },
	{ 0x72219238, "phy_modify_mmd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0010000000000000101000100100????");
MODULE_ALIAS("mdio:0010000000000000101000010101????");
MODULE_ALIAS("mdio:0010000000000000101000010011????");
MODULE_ALIAS("mdio:0010000000000000101000010001????");
MODULE_ALIAS("mdio:0010000000000000101000010100????");
MODULE_ALIAS("mdio:0010000000000000101000010110????");
MODULE_ALIAS("mdio:0010000000000000101000010111????");

MODULE_INFO(srcversion, "8D641C11C930BE678A36217");
