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
	{ 0xf40f1d62, "ife_validate_meta_u16" },
	{ 0xd6fa3923, "ife_release_meta_gen" },
	{ 0xc5f19d57, "ife_alloc_meta_u16" },
	{ 0x1f032892, "ife_get_meta_u16" },
	{ 0x2eaba931, "unregister_ife_op" },
	{ 0x598648bc, "register_ife_op" },
	{ 0x2b39eeff, "ife_check_meta_u16" },
	{ 0x7fc610a3, "ife_encode_meta_u16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "act_ife");


MODULE_INFO(srcversion, "B81169E1BBD6E6BB8392ABE");
