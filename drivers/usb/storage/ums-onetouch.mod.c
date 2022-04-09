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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0xe1e35260, "usb_stor_post_reset" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x3fafbee2, "usb_stor_disconnect" },
	{ 0x331337dc, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x2f216816, "usb_stor_probe2" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xa44c0030, "usb_stor_host_template_init" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xfd80f3ab, "usb_stor_pre_reset" },
	{ 0x95153399, "usb_stor_reset_resume" },
	{ 0xf1508e38, "usb_stor_suspend" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x57db88ae, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x8edb6a58, "usb_stor_resume" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xefc7653c, "input_allocate_device" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "40449D9C00F755AFC178C6F");
