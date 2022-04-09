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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x1b216999, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc8df617c, "usb_create_shared_hcd" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x7e478053, "kernel_sendmsg" },
	{ 0x68523297, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf9f92b38, "usb_add_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0x59fbec7, "usb_remove_hcd" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x864893cc, "usb_create_hcd" },
	{ 0xcb93442, "usb_hcd_poll_rh_status" },
	{ 0x656f43cc, "usbip_alloc_iso_desc_pdu" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x79ac8677, "usb_hcd_giveback_urb" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x5012a70, "pv_ops" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x86dc169d, "usb_put_hcd" },
	{ 0x8c2a4bc6, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb66c9bcc, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x11050caf, "usb_hcd_link_urb_to_ep" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x8ad754d, "platform_device_del" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x82b24054, "kernel_sock_shutdown" },
	{ 0xd0b6245, "usbip_stop_eh" },
	{ 0x4cbd4c4, "dev_attr_usbip_debug" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf0785fc6, "fput" },
	{ 0x34d0342a, "usbip_recv_iso" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa00e63fa, "usbip_pad_iso" },
	{ 0xa5a7894f, "usb_hcd_check_unlink_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x76a87825, "usbip_dump_urb" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x3bb82ff2, "usbip_recv" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x5748e752, "platform_bus" },
	{ 0x69612d7a, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x69eeb1ab, "usbip_recv_xbuff" },
	{ 0xf8af7c22, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x10562d8e, "usb_hcd_unlink_urb_from_ep" },
	{ 0x3d202ddf, "usb_hcd_resume_root_hub" },
	{ 0x7934ff44, "usbip_start_eh" },
	{ 0x248a710b, "usbip_pack_pdu" },
	{ 0x2c499467, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "8D5569137A4FED6EC22B5AD");
