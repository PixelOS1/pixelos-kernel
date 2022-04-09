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
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0x168f7fed, "usb_get_urb" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x326411de, "usb_stor_adjust_quirks" },
	{ 0x4cebcbb0, "scsi_report_bus_reset" },
	{ 0x3d8c0572, "usb_alloc_streams" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb125591, "usb_lock_device_for_reset" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0xad3eba23, "blk_queue_update_dma_alignment" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xaf85c712, "scsi_print_command" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0xdd4b8dcd, "scsi_unblock_requests" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x7d466a68, "scsi_block_requests" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xf7370f56, "system_state" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x82e331bb, "usb_free_streams" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v054Cp087Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp105Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp1061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");

MODULE_INFO(srcversion, "18D5BC573DF1E644210CC6C");
