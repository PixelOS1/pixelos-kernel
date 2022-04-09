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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xb34fdfcf, "param_ops_byte" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x3f151964, "usbatm_usb_disconnect" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xa9dd129e, "usb_string" },
	{ 0x7efced49, "atm_dev_signal_change" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x37a0cba, "kfree" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x761ae28f, "usb_driver_claim_interface" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x92997ed8, "_printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x1564421, "request_firmware" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd6f46ea2, "usb_driver_release_interface" },
	{ 0x15f4f10f, "usb_ifnum_to_if" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x761aca9d, "usbatm_usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "33CD7E92BE9C5670004633E");
