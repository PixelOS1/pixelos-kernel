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
	{ 0x2d3385d3, "system_wq" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x88f2d039, "rc_unregister_device" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe4345174, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0xbb525c35, "framebuffer_release" },
	{ 0x9b02585d, "single_release" },
	{ 0xcd777a6a, "fb_sys_read" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0xd349d253, "seq_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xbf7f6e5, "sys_copyarea" },
	{ 0x94216657, "seq_read" },
	{ 0xc410588, "rc_allocate_device" },
	{ 0xaf44c41b, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0x331337dc, "input_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x550c12a1, "rc_free_device" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x29b7c46d, "hid_hw_close" },
	{ 0x85adfc97, "register_framebuffer" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x538003d4, "rc_register_device" },
	{ 0xa8b52982, "hid_hw_open" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeefcded2, "hid_hw_request" },
	{ 0x51d8c355, "lcd_device_unregister" },
	{ 0xbee0c8cd, "hid_set_field" },
	{ 0x22749e72, "simple_open" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x374f7f59, "hid_alloc_report_buf" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xb18ce31a, "sys_fillrect" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xa2c315fe, "sys_imageblit" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xf74cb00f, "fb_sys_write" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xca1b5ed8, "framebuffer_alloc" },
	{ 0x9737b73a, "fb_deferred_io_cleanup" },
	{ 0xea7b5b12, "fb_deferred_io_init" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0xd66039e, "lcd_device_register" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x2ce47abe, "ir_raw_event_store" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x418ffa0d, "ir_raw_event_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf82e3846, "hid_output_report" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xd5f6d7cc, "unregister_framebuffer" },
};

MODULE_INFO(depends, "rc-core,backlight,lcd");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "A562F0407A105D3EA669663");
