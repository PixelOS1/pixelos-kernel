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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x5ca65702, "usb_get_from_anchor" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x21d2cac8, "usb_autopm_put_interface_async" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xadfce41f, "tty_insert_flip_string_fixed_flag" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xf120fcfb, "usb_autopm_get_interface_async" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf4936f92, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x636171c0, "tty_flip_buffer_push" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd9657ffa, "usb_serial_port_softint" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbserial");


MODULE_INFO(srcversion, "0F0569F8CBE07F95850FF86");
