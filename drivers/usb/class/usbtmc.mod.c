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
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x86632d5a, "default_llseek" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5ca65702, "usb_get_from_anchor" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xad8fd9d3, "usb_deregister_dev" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xe817776c, "usb_register_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x92997ed8, "_printk" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1d3dba4d, "usb_find_interface" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x470af718, "usb_put_dev" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x76abb595, "kill_fasync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7e8d8619, "usb_anchor_empty" },
	{ 0xcf2a6966, "up" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x91159164, "usb_clear_halt" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");

MODULE_INFO(srcversion, "A55300AFA898251D26323BB");
