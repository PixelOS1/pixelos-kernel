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
	{ 0x1c97c80, "usb_serial_generic_unthrottle" },
	{ 0x45b49ad4, "usb_serial_generic_throttle" },
	{ 0xa6844538, "usb_serial_deregister_drivers" },
	{ 0xf0aa6e92, "usb_serial_register_drivers" },
	{ 0x93a772d6, "usb_serial_generic_open" },
	{ 0x91159164, "usb_clear_halt" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x636171c0, "tty_flip_buffer_push" },
	{ 0xadfce41f, "tty_insert_flip_string_fixed_flag" },
	{ 0xa2e328d4, "usb_serial_generic_close" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xd9657ffa, "usb_serial_port_softint" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v065Ap0009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6BC55C155328BB6D03CB38B");
