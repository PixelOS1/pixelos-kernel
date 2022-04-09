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
	{ 0xab057ded, "dp_altmode_probe" },
	{ 0xb264b89f, "typec_altmode_unregister_driver" },
	{ 0x34a0027e, "dp_altmode_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce6b6840, "__typec_altmode_register_driver" },
};

MODULE_INFO(depends, "typec_displayport,typec");

MODULE_ALIAS("typec:id0955m*");

MODULE_INFO(srcversion, "73D0859BACFAB19497B1B7B");
