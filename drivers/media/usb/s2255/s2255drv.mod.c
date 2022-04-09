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
	{ 0xee111615, "param_ops_int" },
	{ 0xa2e86c27, "vb2_ops_wait_finish" },
	{ 0x3ddbd123, "vb2_ops_wait_prepare" },
	{ 0xee21c197, "vb2_fop_release" },
	{ 0x3f1b43a1, "vb2_fop_mmap" },
	{ 0x9cc0f87c, "video_ioctl2" },
	{ 0x7ee4ba7a, "vb2_fop_poll" },
	{ 0xcb101fbd, "vb2_fop_read" },
	{ 0xba288857, "v4l2_event_unsubscribe" },
	{ 0xb1eb885c, "v4l2_ctrl_subscribe_event" },
	{ 0xa9f007c9, "v4l2_ctrl_log_status" },
	{ 0x3b5c8c87, "vb2_ioctl_streamoff" },
	{ 0x2ae5ee7, "vb2_ioctl_streamon" },
	{ 0x520a7a46, "vb2_ioctl_dqbuf" },
	{ 0x9ff869b1, "vb2_ioctl_qbuf" },
	{ 0xce1f4edb, "vb2_ioctl_querybuf" },
	{ 0xf6a4fd55, "vb2_ioctl_reqbufs" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x3000d0d6, "v4l2_fh_open" },
	{ 0x8834fe98, "video_unregister_device" },
	{ 0x222ec7a6, "v4l2_device_disconnect" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x978e281e, "__video_register_device" },
	{ 0xe94b1796, "vb2_queue_init" },
	{ 0x8fed1643, "vb2_vmalloc_memops" },
	{ 0xa1c2e615, "v4l2_device_unregister" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0x90233826, "v4l2_ctrl_new_custom" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0x4a15d35f, "v4l2_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x1564421, "request_firmware" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x999e8297, "vfree" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3b8dc0a0, "__v4l2_ctrl_s_ctrl" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x418c56a3, "vb2_buffer_done" },
	{ 0x5ef10057, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa916b694, "strnlen" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x92997ed8, "_printk" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6FE0135517C909431A9F37F");
