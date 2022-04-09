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
	{ 0xc7d30f91, "input_register_device" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x754d539c, "strlen" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x331337dc, "input_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0E20p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F66B2CAE974FE9B056112B2");