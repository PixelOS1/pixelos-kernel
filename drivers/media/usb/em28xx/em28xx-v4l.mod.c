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
	{ 0x1ec5a896, "em28xx_read_reg" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xba288857, "v4l2_event_unsubscribe" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xa0f569b6, "video_device_release_empty" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x12b41126, "media_device_unregister_entity" },
	{ 0x662caf38, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x36a42b, "em28xx_write_regs" },
	{ 0x4bf103ef, "v4l2_ctrl_notify" },
	{ 0x7bd06389, "em28xx_setup_xc3028" },
	{ 0xa1c2e615, "v4l2_device_unregister" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0x7ee4ba7a, "vb2_fop_poll" },
	{ 0x36423e5f, "v4l2_mc_create_media_graph" },
	{ 0x2ae5ee7, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3ddbd123, "vb2_ops_wait_prepare" },
	{ 0x44fd70d3, "em28xx_init_usb_xfer" },
	{ 0x978e281e, "__video_register_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x56c8507e, "em28xx_register_extension" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdbd17b07, "media_entity_setup_link" },
	{ 0x4a15d35f, "v4l2_device_register" },
	{ 0xcb101fbd, "vb2_fop_read" },
	{ 0x222ec7a6, "v4l2_device_disconnect" },
	{ 0x8fed1643, "vb2_vmalloc_memops" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3f1b43a1, "vb2_fop_mmap" },
	{ 0x9ff869b1, "vb2_ioctl_qbuf" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8834fe98, "video_unregister_device" },
	{ 0xda48e803, "media_entity_pads_init" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xb1eb885c, "v4l2_ctrl_subscribe_event" },
	{ 0x5ef10057, "vb2_plane_vaddr" },
	{ 0x418c56a3, "vb2_buffer_done" },
	{ 0x7b86303e, "em28xx_unregister_extension" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce28ef42, "vb2_ioctl_prepare_buf" },
	{ 0xae43e8c9, "em28xx_uninit_usb_xfer" },
	{ 0x4da4fec1, "vb2_ioctl_create_bufs" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x520a7a46, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5660bee0, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x7a3762e3, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xa916b694, "strnlen" },
	{ 0xee21c197, "vb2_fop_release" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6f9f4dd9, "em28xx_audio_setup" },
	{ 0xd595fd58, "v4l2_ctrl_handler_setup" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8c2f013d, "v4l2_i2c_subdev_addr" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3000d0d6, "v4l2_fh_open" },
	{ 0xac7fd88f, "em28xx_set_mode" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xce1f4edb, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0xa2e86c27, "vb2_ops_wait_finish" },
	{ 0x9da5a1ed, "em28xx_stop_urbs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8aff2784, "em28xx_write_reg" },
	{ 0x1e0d0262, "em28xx_audio_analog_set" },
	{ 0x3b5c8c87, "vb2_ioctl_streamoff" },
	{ 0x9cc0f87c, "video_ioctl2" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x17ece49a, "em28xx_init_camera" },
	{ 0xe94b1796, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,em28xx,videodev,mc,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "67196A2C3CB48CA8AEA9C5A");
