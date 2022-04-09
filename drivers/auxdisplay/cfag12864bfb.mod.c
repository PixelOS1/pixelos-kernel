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
	{ 0xa2c315fe, "sys_imageblit" },
	{ 0xbf7f6e5, "sys_copyarea" },
	{ 0xb18ce31a, "sys_fillrect" },
	{ 0xf74cb00f, "fb_sys_write" },
	{ 0xcd777a6a, "fb_sys_read" },
	{ 0xecb2e5d, "cfag12864b_disable" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x2c499467, "platform_device_put" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x3389f926, "cfag12864b_enable" },
	{ 0x2ff9464, "cfag12864b_isinited" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1af4cfd8, "vm_map_pages_zero" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x92997ed8, "_printk" },
	{ 0x85adfc97, "register_framebuffer" },
	{ 0xc48e9d95, "cfag12864b_buffer" },
	{ 0xca1b5ed8, "framebuffer_alloc" },
	{ 0xbb525c35, "framebuffer_release" },
	{ 0xd5f6d7cc, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfag12864b");


MODULE_INFO(srcversion, "3F184061B3D765A7E552307");
