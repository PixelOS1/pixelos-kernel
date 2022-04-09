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
	{ 0xd7a9660c, "ife_validate_meta_u32" },
	{ 0xd6fa3923, "ife_release_meta_gen" },
	{ 0xe239e82d, "ife_alloc_meta_u32" },
	{ 0xeabc1b95, "ife_get_meta_u32" },
	{ 0x2eaba931, "unregister_ife_op" },
	{ 0x598648bc, "register_ife_op" },
	{ 0xc22e18d3, "ife_check_meta_u32" },
	{ 0xde7fddf8, "ife_encode_meta_u32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "act_ife");


MODULE_INFO(srcversion, "9118F4D5AF293D4D5D875F2");
