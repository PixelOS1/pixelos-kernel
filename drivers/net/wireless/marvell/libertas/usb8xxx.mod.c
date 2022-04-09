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
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4e978e0, "lbs_host_sleep_cfg" },
	{ 0x57e889a8, "lbs_resume" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe6612d69, "lbs_stop_card" },
	{ 0x34fbd499, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x126f6547, "lbs_start_card" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x32415a, "lbs_queue_event" },
	{ 0xbad32943, "lbs_send_tx_feedback" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x98c9896d, "lbs_get_firmware_async" },
	{ 0xe295bf28, "lbs_cmd_copyback" },
	{ 0x7275e4b0, "lbs_suspend" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa2d365e1, "lbs_remove_card" },
	{ 0x880c19c3, "lbs_process_rxed_packet" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0xb25d2d18, "lbs_host_to_card_done" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ad35ebe, "lbs_add_card" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x5c4a7df1, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "325A6BE8F6F93B96CE2BDBC");
