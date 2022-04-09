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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xba288857, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xbd5e2fbc, "_vb2_fop_release" },
	{ 0xfbd84ed6, "i2c_mux_add_adapter" },
	{ 0xa0f569b6, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xee111615, "param_ops_int" },
	{ 0x662caf38, "v4l2_i2c_new_subdev" },
	{ 0xa9f007c9, "v4l2_ctrl_log_status" },
	{ 0xd03e3ff5, "v4l2_subdev_call_wrappers" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x129da2cf, "i2c_mux_del_adapters" },
	{ 0xa5d9cabe, "usb_reset_endpoint" },
	{ 0xa1c2e615, "v4l2_device_unregister" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0x31d760f9, "__media_device_usb_init" },
	{ 0xfd8c3560, "cx2341x_handler_set_50hz" },
	{ 0x83d2f83e, "cx2341x_handler_init" },
	{ 0x7ee4ba7a, "vb2_fop_poll" },
	{ 0x36423e5f, "v4l2_mc_create_media_graph" },
	{ 0x2ae5ee7, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3ddbd123, "vb2_ops_wait_prepare" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x978e281e, "__video_register_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdbd17b07, "media_entity_setup_link" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x5012a70, "pv_ops" },
	{ 0xc410588, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0x4a15d35f, "v4l2_device_register" },
	{ 0xcb101fbd, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x8fed1643, "vb2_vmalloc_memops" },
	{ 0xc618b354, "i2c_mux_alloc" },
	{ 0xc0c3502a, "v4l2_s_ctrl" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3f1b43a1, "vb2_fop_mmap" },
	{ 0x9ff869b1, "vb2_ioctl_qbuf" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8834fe98, "video_unregister_device" },
	{ 0xda48e803, "media_entity_pads_init" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xb1eb885c, "v4l2_ctrl_subscribe_event" },
	{ 0x5ef10057, "vb2_plane_vaddr" },
	{ 0x418c56a3, "vb2_buffer_done" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x520a7a46, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3acc2dd6, "media_device_cleanup" },
	{ 0x5660bee0, "media_device_register_entity" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0x500d0eff, "cx2341x_handler_setup" },
	{ 0xee21c197, "vb2_fop_release" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x91159164, "usb_clear_halt" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3000d0d6, "v4l2_fh_open" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0xce1f4edb, "vb2_ioctl_querybuf" },
	{ 0xb95c6dda, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xa2e86c27, "vb2_ops_wait_finish" },
	{ 0x1564421, "request_firmware" },
	{ 0x714714c8, "v4l2_ctrl_add_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0x74db0f1f, "v4l2_ctrl_radio_filter" },
	{ 0x3b5c8c87, "vb2_ioctl_streamoff" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x71095639, "media_device_unregister" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9cc0f87c, "video_ioctl2" },
	{ 0x21b6ec5c, "v4l2_ctrl_poll" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xe94b1796, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,i2c-mux,tveeprom,i2c-core,mc,cx2341x,rc-core,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB124d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "911671118CF304C86EAB7B9");
