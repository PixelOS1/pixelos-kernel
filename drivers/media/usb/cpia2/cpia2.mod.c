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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xba288857, "v4l2_event_unsubscribe" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbe0367a5, "v4l2_ctrl_cluster" },
	{ 0xa0f569b6, "video_device_release_empty" },
	{ 0xee111615, "param_ops_int" },
	{ 0xa1c2e615, "v4l2_device_unregister" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x978e281e, "__video_register_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4a15d35f, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd909de9, "v4l2_ctrl_new_std_menu" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x222ec7a6, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xc23477d, "current_task" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8834fe98, "video_unregister_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xb1eb885c, "v4l2_ctrl_subscribe_event" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa85f262, "v4l2_fh_release" },
	{ 0x413a7aea, "v4l2_fh_is_singular" },
	{ 0x90233826, "v4l2_ctrl_new_custom" },
	{ 0x4c41b6, "__v4l2_ctrl_grab" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd595fd58, "v4l2_ctrl_handler_setup" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3000d0d6, "v4l2_fh_open" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0x98fcbae6, "v4l2_device_put" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9cc0f87c, "video_ioctl2" },
	{ 0x21b6ec5c, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v0553p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0151d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "18A16F3BA9DFFF1049D86AA");
