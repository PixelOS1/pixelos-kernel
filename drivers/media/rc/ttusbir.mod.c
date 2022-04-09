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
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x550c12a1, "rc_free_device" },
	{ 0x538003d4, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xc410588, "rc_allocate_device" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x418ffa0d, "ir_raw_event_handle" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0xe21b2d6, "ir_raw_event_store_with_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x88f2d039, "rc_unregister_device" },
	{ 0x38bf3116, "led_classdev_suspend" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x45efe5ab, "led_classdev_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v0B48p2003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "68B0C158BDBAD15EF59BDEB");
