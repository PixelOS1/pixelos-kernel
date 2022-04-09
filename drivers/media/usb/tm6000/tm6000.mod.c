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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3b602dff, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xba288857, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x88f2d039, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa0f569b6, "video_device_release_empty" },
	{ 0xee111615, "param_ops_int" },
	{ 0x63f62265, "videobuf_mmap_mapper" },
	{ 0x662caf38, "v4l2_i2c_new_subdev" },
	{ 0xa1c2e615, "v4l2_device_unregister" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0x949468a4, "videobuf_queue_vmalloc_init" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xfb70323f, "usb_reset_configuration" },
	{ 0xda90aebe, "videobuf_streamon" },
	{ 0x978e281e, "__video_register_device" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc7c850d5, "videobuf_iolock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0xc410588, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0x4a15d35f, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfb578fc5, "memset" },
	{ 0x550c12a1, "rc_free_device" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9068bde, "videobuf_qbuf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8834fe98, "video_unregister_device" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x2237660d, "v4l2_fh_init" },
	{ 0xc5cb0bb9, "v4l2_event_pending" },
	{ 0xb1eb885c, "v4l2_ctrl_subscribe_event" },
	{ 0x73795756, "rc_keydown" },
	{ 0xe619ca04, "videobuf_querybuf" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x538003d4, "rc_register_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xad07a20a, "videobuf_read_stream" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6e66056, "videobuf_vmalloc_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc5579b1e, "videobuf_to_vmalloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2e11e88f, "videobuf_dqbuf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x112863c4, "videobuf_reqbufs" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xbb0a434f, "v4l2_fh_add" },
	{ 0xcf25e737, "v4l2_fh_del" },
	{ 0x714714c8, "v4l2_ctrl_add_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x9cc0f87c, "video_ioctl2" },
	{ 0x21b6ec5c, "v4l2_ctrl_poll" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xc18b8531, "v4l2_fh_exit" },
	{ 0xca5d14d3, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-core,videodev,rc-core,videobuf-vmalloc,i2c-core");

MODULE_ALIAS("usb:v6000p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pF332d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pB339d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "26BD1AE18930960DEC84556");
