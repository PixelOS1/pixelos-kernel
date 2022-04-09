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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xba288857, "v4l2_event_unsubscribe" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xa6e4ce74, "v4l2_event_queue_fh" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x436560f9, "vb2_mmap" },
	{ 0x6e936613, "usb_debug_root" },
	{ 0xa1c2e615, "v4l2_device_unregister" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xc9ec668c, "vb2_create_bufs" },
	{ 0x7ee4ba7a, "vb2_fop_poll" },
	{ 0x2ae5ee7, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3ddbd123, "vb2_ops_wait_prepare" },
	{ 0x978e281e, "__video_register_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x19b483b9, "usb_enable_autosuspend" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x82737e8, "v4l2_ctrl_merge" },
	{ 0x3ca4aa48, "dma_alloc_noncontiguous" },
	{ 0xdd64e639, "strscpy" },
	{ 0x2b2a924, "dma_free_noncontiguous" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5012a70, "pv_ops" },
	{ 0x4a15d35f, "v4l2_device_register" },
	{ 0x331337dc, "input_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6ec1522, "dma_sync_sg_for_device" },
	{ 0x8fed1643, "vb2_vmalloc_memops" },
	{ 0xa9dd129e, "usb_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3f1b43a1, "vb2_fop_mmap" },
	{ 0x9ff869b1, "vb2_ioctl_qbuf" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xe525699b, "v4l2_event_subscribe" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8834fe98, "video_unregister_device" },
	{ 0xda48e803, "media_entity_pads_init" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x2237660d, "v4l2_fh_init" },
	{ 0x5ef10057, "vb2_plane_vaddr" },
	{ 0x418c56a3, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc0ab925e, "usb_poison_urb" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x761ae28f, "usb_driver_claim_interface" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc982c45, "vb2_qbuf" },
	{ 0xce28ef42, "vb2_ioctl_prepare_buf" },
	{ 0x4da4fec1, "vb2_ioctl_create_bufs" },
	{ 0x3cd2da89, "dma_vmap_noncontiguous" },
	{ 0x13b101dc, "vb2_querybuf" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x520a7a46, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3acc2dd6, "media_device_cleanup" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xf50fecbc, "v4l2_ctrl_replace" },
	{ 0x84fd9db2, "vb2_streamon" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0xee21c197, "vb2_fop_release" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7ee742ab, "vb2_expbuf" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x470af718, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x91159164, "usb_clear_halt" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xd6f46ea2, "usb_driver_release_interface" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0xbfcc9a58, "v4l2_device_register_subdev" },
	{ 0x1bfb9a7c, "media_create_pad_link" },
	{ 0x798d7946, "vb2_reqbufs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xae1e7258, "usb_get_intf" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3000d0d6, "v4l2_fh_open" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xfab84c61, "v4l2_subdev_init" },
	{ 0xce1f4edb, "vb2_ioctl_querybuf" },
	{ 0xb95c6dda, "__media_device_register" },
	{ 0x21205b48, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x92b34aef, "usb_match_one_id" },
	{ 0xae48d48e, "dma_sync_sg_for_cpu" },
	{ 0x96848186, "scnprintf" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xa2e86c27, "vb2_ops_wait_finish" },
	{ 0xbb0a434f, "v4l2_fh_add" },
	{ 0x57bf1f64, "dma_vunmap_noncontiguous" },
	{ 0xcf25e737, "v4l2_fh_del" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x15f4f10f, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1aa1cd4b, "vb2_poll" },
	{ 0xd1d4b3a4, "media_device_init" },
	{ 0xfce98e7d, "usb_get_current_frame_number" },
	{ 0x28b12cc9, "v4l2_format_info" },
	{ 0x3b5c8c87, "vb2_ioctl_streamoff" },
	{ 0xdbc07a5c, "vb2_queue_release" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x6434837b, "vb2_streamoff" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x71095639, "media_device_unregister" },
	{ 0x9cc0f87c, "video_ioctl2" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xb1192c30, "usb_put_intf" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0xc18b8531, "v4l2_fh_exit" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xe94b1796, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc,mc");

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1BCFp0B40d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "3424C6612575BC1B47E5820");
