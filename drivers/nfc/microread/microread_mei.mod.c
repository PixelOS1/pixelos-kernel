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
	{ 0x4eb39284, "nfc_mei_phy_free" },
	{ 0xebc692b2, "mei_cldev_get_drvdata" },
	{ 0xacedeaf3, "mei_phy_ops" },
	{ 0x2c651a71, "microread_probe" },
	{ 0x85721719, "__mei_cldev_driver_register" },
	{ 0x961f12d, "mei_cldev_driver_unregister" },
	{ 0xda091a51, "nfc_mei_phy_alloc" },
	{ 0x966b5ec7, "microread_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mei_phy,mei,microread");

MODULE_ALIAS("mei:microread:0bb17a78-2a8e-4c50-94d4-50266723775c:*:*");

MODULE_INFO(srcversion, "90D023DD75D7E9D35F48101");
