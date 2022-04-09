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
	{ 0xf8b13c6c, "parport_ieee1284_read_byte" },
	{ 0x5af425a6, "parport_ieee1284_read_nibble" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xc23477d, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x70dbc8a, "parport_announce_port" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0xf8301230, "parport_register_port" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8475ab59, "parport_put_port" },
	{ 0x541d327d, "parport_remove_port" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x4d2a941b, "parport_ieee1284_interrupt" },
	{ 0xa6257a2f, "complete" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x470af718, "usb_put_dev" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");

MODULE_ALIAS("usb:v047Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06C6p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0729p1284d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1293p0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "67D52847BF45DB37165B9A5");
