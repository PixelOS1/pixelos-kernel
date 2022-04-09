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
	{ 0xc5338cca, "rsi_91x_init" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0x78931e71, "rsi_mac80211_detach" },
	{ 0x5eeb017c, "rsi_read_pkt" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x459f3f88, "skb_push" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xaba32e84, "rsi_hal_device_init" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x24e48d13, "skb_put" },
	{ 0x9e04d061, "rsi_91x_deinit" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xb3d62000, "rsi_bt_ops" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rsi_91x,btrsi");

MODULE_ALIAS("usb:v1618p9113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1618p9116d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "026AFB16CBD340BF35CEC55");
