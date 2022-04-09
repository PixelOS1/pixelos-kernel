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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc517b306, "dvb_module_probe" },
	{ 0xee111615, "param_ops_int" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0xa8d65c10, "dvb_unregister_adapter" },
	{ 0x754d539c, "strlen" },
	{ 0x662caf38, "v4l2_i2c_new_subdev" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x9e573434, "dvb_register_frontend" },
	{ 0xa1c2e615, "v4l2_device_unregister" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x56470118, "__warn_printk" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x5d8cc662, "dvb_unregister_frontend" },
	{ 0x978e281e, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7b4dd2cb, "cx2341x_fill_defaults" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xe1fe1432, "cx2341x_log_status" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0xdf5f3197, "dvb_frontend_detach" },
	{ 0x4a15d35f, "v4l2_device_register" },
	{ 0x28240e61, "cx2341x_ctrl_get_menu" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x222ec7a6, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0xc0c3502a, "v4l2_s_ctrl" },
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0xdaf02d94, "device_register" },
	{ 0xb125591, "usb_lock_device_for_reset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xdbc5583a, "cx2341x_update" },
	{ 0x9604dda, "freezing_slow_path" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x360e621, "dvb_dmxdev_release" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8834fe98, "video_unregister_device" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0x52d91e96, "class_unregister" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x2237660d, "v4l2_fh_init" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9e4890a7, "device_move" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x97ac8144, "__class_register" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x7aeea678, "usb_urb_ep_type_check" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x937e7ffb, "dvb_module_release" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x761527a1, "put_device" },
	{ 0x3fbdc840, "video_devdata" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x91159164, "usb_clear_halt" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x15ac1bd0, "cx2341x_ctrl_query" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9e9bf1ab, "dvb_register_adapter" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x96848186, "scnprintf" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbb0a434f, "v4l2_fh_add" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x776c87fd, "device_unregister" },
	{ 0xcf25e737, "v4l2_fh_del" },
	{ 0x6a657b05, "cx2341x_ext_ctrls" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9cc0f87c, "video_ioctl2" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xe5462348, "dvb_dmxdev_init" },
	{ 0xc18b8531, "v4l2_fh_exit" },
};

MODULE_INFO(depends, "dvb-core,videodev,tveeprom,i2c-core,cx2341x");

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7510d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AB39D4EF00B2644811230B1");
