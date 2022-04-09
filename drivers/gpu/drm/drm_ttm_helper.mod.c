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
	{ 0x6473876f, "ttm_bo_vmap" },
	{ 0xb03f8eaf, "ttm_bo_mmap_obj" },
	{ 0x28779e52, "drm_printf" },
	{ 0x32a0cc37, "drm_print_bits" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xe7f8fc9, "ttm_bo_vunmap" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd6fdddea, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ttm,drm");


MODULE_INFO(srcversion, "779782F7409CC3AFD9D9D00");
