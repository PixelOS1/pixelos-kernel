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
	{ 0x92997ed8, "_printk" },
	{ 0x550c12a1, "rc_free_device" },
	{ 0x538003d4, "rc_register_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xc410588, "rc_allocate_device" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x88f2d039, "rc_unregister_device" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x73795756, "rc_keydown" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v040Bp6521d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep0284d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "37582635D2F4511925AB43B");
