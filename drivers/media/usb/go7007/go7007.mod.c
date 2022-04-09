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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xba288857, "v4l2_event_unsubscribe" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xa0f569b6, "video_device_release_empty" },
	{ 0xee111615, "param_ops_int" },
	{ 0xd3e21a82, "v4l2_event_queue" },
	{ 0xa9f007c9, "v4l2_ctrl_log_status" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xd03e3ff5, "v4l2_subdev_call_wrappers" },
	{ 0xa1c2e615, "v4l2_device_unregister" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0x27074bf6, "v4l2_ctrl_g_ctrl" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0x7ee4ba7a, "vb2_fop_poll" },
	{ 0x2ae5ee7, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3ddbd123, "vb2_ops_wait_prepare" },
	{ 0x978e281e, "__video_register_device" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0x4a15d35f, "v4l2_device_register" },
	{ 0xcb101fbd, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd909de9, "v4l2_ctrl_new_std_menu" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0x8fed1643, "vb2_vmalloc_memops" },
	{ 0x6fc0cfdf, "snd_device_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3f1b43a1, "vb2_fop_mmap" },
	{ 0x9ff869b1, "vb2_ioctl_qbuf" },
	{ 0xe525699b, "v4l2_event_subscribe" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0xb1eb885c, "v4l2_ctrl_subscribe_event" },
	{ 0x5ef10057, "vb2_plane_vaddr" },
	{ 0x418c56a3, "vb2_buffer_done" },
	{ 0x84da05bd, "snd_card_free_when_closed" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x90233826, "v4l2_ctrl_new_custom" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x520a7a46, "vb2_ioctl_dqbuf" },
	{ 0x4c41b6, "__v4l2_ctrl_grab" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xee21c197, "vb2_fop_release" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3000d0d6, "v4l2_fh_open" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xce1f4edb, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0xa2e86c27, "vb2_ops_wait_finish" },
	{ 0x1564421, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xdf7e1c1f, "v4l2_i2c_new_subdev_board" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3b5c8c87, "vb2_ioctl_streamoff" },
	{ 0x98fcbae6, "v4l2_device_put" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9cc0f87c, "video_ioctl2" },
	{ 0xe94b1796, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,snd,i2c-core,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "C99AE3AB05CCA4EE25F7BD4");
