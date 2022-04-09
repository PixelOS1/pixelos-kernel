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
	{ 0xf6a4fd55, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xba288857, "v4l2_event_unsubscribe" },
	{ 0x3b9372a1, "media_device_usb_allocate" },
	{ 0x88f2d039, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2a1192b0, "__media_pipeline_start" },
	{ 0xc6b2c03f, "media_device_unregister_entity_notify" },
	{ 0xbd5e2fbc, "_vb2_fop_release" },
	{ 0xa0f569b6, "video_device_release_empty" },
	{ 0xee111615, "param_ops_int" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa8d65c10, "dvb_unregister_adapter" },
	{ 0x12b41126, "media_device_unregister_entity" },
	{ 0x662caf38, "v4l2_i2c_new_subdev" },
	{ 0x1c370a01, "dvb_create_media_graph" },
	{ 0xa9f007c9, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x8c79cc62, "dvb_frontend_suspend" },
	{ 0x9e573434, "dvb_register_frontend" },
	{ 0xa1c2e615, "v4l2_device_unregister" },
	{ 0x459ac6a8, "dvb_frontend_resume" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0x7ee4ba7a, "vb2_fop_poll" },
	{ 0x36423e5f, "v4l2_mc_create_media_graph" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2ae5ee7, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc28cac53, "v4l_disable_media_source" },
	{ 0x3ddbd123, "vb2_ops_wait_prepare" },
	{ 0x41993878, "media_device_delete" },
	{ 0x5d8cc662, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x978e281e, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdbd17b07, "media_entity_setup_link" },
	{ 0x1eeebc48, "media_get_pad_index" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x5012a70, "pv_ops" },
	{ 0xc410588, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0xdf5f3197, "dvb_frontend_detach" },
	{ 0x4a15d35f, "v4l2_device_register" },
	{ 0xcb101fbd, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x222ec7a6, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0x8fed1643, "vb2_vmalloc_memops" },
	{ 0x550c12a1, "rc_free_device" },
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3f1b43a1, "vb2_fop_mmap" },
	{ 0x9ff869b1, "vb2_ioctl_qbuf" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x360e621, "dvb_dmxdev_release" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xda48e803, "media_entity_pads_init" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xb1eb885c, "v4l2_ctrl_subscribe_event" },
	{ 0x5ef10057, "vb2_plane_vaddr" },
	{ 0x418c56a3, "vb2_buffer_done" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x538003d4, "rc_register_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce28ef42, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x93630ea6, "tveeprom_read" },
	{ 0x4da4fec1, "vb2_ioctl_create_bufs" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x520a7a46, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x128c619d, "v4l_enable_media_source" },
	{ 0x5660bee0, "media_device_register_entity" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd24cda59, "media_device_register_entity_notify" },
	{ 0xa916b694, "strnlen" },
	{ 0x18acd31f, "dvb_dmx_swfilter_packets" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8fd20658, "__media_pipeline_stop" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x1bfb9a7c, "media_create_pad_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9e9bf1ab, "dvb_register_adapter" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x686577c9, "vb2_video_unregister_device" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3000d0d6, "v4l2_fh_open" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0xce1f4edb, "vb2_ioctl_querybuf" },
	{ 0xb95c6dda, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4fb2d1c, "__media_entity_setup_link" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xa2e86c27, "vb2_ops_wait_finish" },
	{ 0x2ce47abe, "ir_raw_event_store" },
	{ 0x8a9b0b58, "i2c_probe_func_quick_read" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x15f4f10f, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x83810131, "vb2_ioctl_expbuf" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3b5c8c87, "vb2_ioctl_streamoff" },
	{ 0x98fcbae6, "v4l2_device_put" },
	{ 0x418ffa0d, "ir_raw_event_handle" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x9cc0f87c, "video_ioctl2" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xe5462348, "dvb_dmxdev_init" },
	{ 0xe94b1796, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,rc-core,dvb-core,tveeprom,i2c-core,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "226E934857B392D106D1F5B");
