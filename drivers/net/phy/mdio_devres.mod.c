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
	{ 0xfe40fa67, "devres_find" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0x16720bc7, "__devres_alloc_node" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4faa6c8, "devres_add" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "libphy");


MODULE_INFO(srcversion, "597BB33F688CE29310407B4");
