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
	{ 0x9cc0f87c, "video_ioctl2" },
	{ 0xba288857, "v4l2_event_unsubscribe" },
	{ 0xb1eb885c, "v4l2_ctrl_subscribe_event" },
	{ 0xa9f007c9, "v4l2_ctrl_log_status" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x13c5442a, "videobuf_queue_is_busy" },
	{ 0xa62e9152, "videobuf_read_one" },
	{ 0xda90aebe, "videobuf_streamon" },
	{ 0x3b602dff, "videobuf_mmap_free" },
	{ 0x98fcbae6, "v4l2_device_put" },
	{ 0x222ec7a6, "v4l2_device_disconnect" },
	{ 0x8834fe98, "video_unregister_device" },
	{ 0xa1c2e615, "v4l2_device_unregister" },
	{ 0xcdef13f6, "v4l2_ctrl_handler_free" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x978e281e, "__video_register_device" },
	{ 0x949468a4, "videobuf_queue_vmalloc_init" },
	{ 0xd595fd58, "v4l2_ctrl_handler_setup" },
	{ 0x999e8297, "vfree" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa0f569b6, "video_device_release_empty" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x57220fb, "v4l2_ctrl_new_std" },
	{ 0xc1c32573, "v4l2_ctrl_handler_init_class" },
	{ 0x4a15d35f, "v4l2_device_register" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5579b1e, "videobuf_to_vmalloc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa85f262, "v4l2_fh_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x63f62265, "videobuf_mmap_mapper" },
	{ 0xb68ff58d, "videobuf_poll_stream" },
	{ 0x21b6ec5c, "v4l2_ctrl_poll" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3000d0d6, "v4l2_fh_open" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x112863c4, "videobuf_reqbufs" },
	{ 0xe619ca04, "videobuf_querybuf" },
	{ 0x9068bde, "videobuf_qbuf" },
	{ 0x2e11e88f, "videobuf_dqbuf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xca5d14d3, "videobuf_streamoff" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0x92997ed8, "_printk" },
	{ 0xc7c850d5, "videobuf_iolock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6e66056, "videobuf_vmalloc_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,videobuf-core,videobuf-vmalloc");

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4208E48B2B1459D9A11118E");
