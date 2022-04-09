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
	{ 0x41c8178f, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5b7424d5, "bus_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbffb3b71, "tty_driver_kref_put" },
	{ 0x7549c36, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x8bce6c8, "tty_port_open" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x520e0d1, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe291bdf4, "tty_register_driver" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x74dced14, "__tty_insert_flip_char" },
	{ 0xa7734ba5, "tty_port_close" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x339c0a66, "device_del" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4bc3a333, "tty_ldisc_deref" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xed7d3113, "tty_port_register_device" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x3fb9a115, "usb_unpoison_urb" },
	{ 0xc0ab925e, "usb_poison_urb" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0x761ae28f, "usb_driver_claim_interface" },
	{ 0x6ecf2389, "tty_port_init" },
	{ 0xadfce41f, "tty_insert_flip_string_fixed_flag" },
	{ 0x8398df2f, "tty_port_destroy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1c2c4996, "tty_vhangup" },
	{ 0xf4fc7d2, "tty_ldisc_ref" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb6916b91, "usb_store_new_id" },
	{ 0xd1f2a25a, "usb_match_id" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x46fff920, "tty_port_tty_wakeup" },
	{ 0xdfbcf889, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xfc7ff842, "tty_unregister_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xd6f46ea2, "usb_driver_release_interface" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xae1e7258, "usb_get_intf" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x6ce57c5, "tty_unregister_driver" },
	{ 0xa8459c7c, "tty_hangup" },
	{ 0xc17e9946, "usb_show_dynids" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xae72a5c8, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4cd4f721, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x92b34aef, "usb_match_one_id" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x18c82101, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x91f11b5f, "driver_attach" },
	{ 0x636171c0, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x20978fb9, "idr_find" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xb1192c30, "usb_put_intf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "62881897AB35487BCAE246E");
