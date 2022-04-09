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
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0x92997ed8, "_printk" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0xa67ae5a2, "zero_fill_bio" },
	{ 0xd1f93394, "bio_endio" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "64DADF790B85D2CF2F5D979");
