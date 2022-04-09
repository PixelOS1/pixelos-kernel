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
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xa2c315fe, "sys_imageblit" },
	{ 0xbf7f6e5, "sys_copyarea" },
	{ 0xb18ce31a, "sys_fillrect" },
	{ 0xf74cb00f, "fb_sys_write" },
	{ 0xcd777a6a, "fb_sys_read" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x2c499467, "platform_device_put" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x7bbd139b, "remap_vmalloc_range" },
	{ 0x92997ed8, "_printk" },
	{ 0x85adfc97, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x6740950a, "fb_find_mode" },
	{ 0xca1b5ed8, "framebuffer_alloc" },
	{ 0xb1beb31, "vmalloc_32_user" },
	{ 0xbb525c35, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x999e8297, "vfree" },
	{ 0xd5f6d7cc, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CEA7F1983B0453EDFCBC09C");
