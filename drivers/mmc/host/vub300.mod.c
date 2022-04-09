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
	{ 0x78c2054, "param_ops_bool" },
	{ 0xee111615, "param_ops_int" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1564421, "request_firmware" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0xb125591, "usb_lock_device_for_reset" },
	{ 0xb1031dd6, "mmc_request_done" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x92997ed8, "_printk" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x952dcf27, "mmc_free_host" },
	{ 0x470af718, "usb_put_dev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd31491e9, "mmc_alloc_host" },
	{ 0xa9dd129e, "usb_string" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x387dfe48, "mmc_detect_change" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4414e160, "usb_sg_wait" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x897bf306, "usb_sg_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xa6257a2f, "complete" },
	{ 0x9166fada, "strncpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x2df7d617, "usb_sg_cancel" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core");

MODULE_ALIAS("usb:v2201p012Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p012Cd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "95A13A2F94CB16B053C8CFE");
