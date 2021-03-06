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
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x331337dc, "input_event" },
	{ 0x92997ed8, "_printk" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v077Dp0410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Dp04AAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05F3p0240d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "450560C5F73F86008941529");
