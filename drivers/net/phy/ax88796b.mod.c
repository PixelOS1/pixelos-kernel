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
	{ 0x9f14a8c0, "genphy_resume" },
	{ 0xa4e1f88e, "genphy_suspend" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0xc6572bf5, "phy_resolve_aneg_linkmode" },
	{ 0x281adbcd, "genphy_read_lpa" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0x499f0de3, "genphy_update_link" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfec4b87c, "genphy_soft_reset" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:00000000001110110001100001100001");
MODULE_ALIAS("mdio:00000000001110110001100010000001");
MODULE_ALIAS("mdio:0000000000111011000110000100????");

MODULE_INFO(srcversion, "F2C92657490CFD26774E04D");
