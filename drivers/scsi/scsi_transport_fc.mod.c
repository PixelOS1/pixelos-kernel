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
	{ 0x763bb5d5, "transport_class_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xba6c657e, "scsi_remove_target" },
	{ 0xec743ea0, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4a4d168, "scsi_flush_work" },
	{ 0x12098e06, "blk_mq_run_hw_queues" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x658000c8, "transport_destroy_device" },
	{ 0xf234da10, "bsg_job_put" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7de9a0a1, "attribute_container_unregister" },
	{ 0x353e65c2, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0xfe17231f, "bsg_job_get" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x339c0a66, "device_del" },
	{ 0x11c2bbba, "scsi_queue_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6373128a, "transport_add_device" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1d57e1b, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0xef6fa3c, "attribute_container_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0xf5c5e04e, "device_add" },
	{ 0xff2022d, "transport_class_unregister" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0x338bb812, "scsi_target_unblock" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x5b9adb5a, "scsi_host_get" },
	{ 0x6e33c5e0, "netlink_broadcast" },
	{ 0x761527a1, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x687c6ac4, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xef31f042, "blk_mq_end_request" },
	{ 0x16e6d67f, "get_device" },
	{ 0xb9db107a, "__scsi_init_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0xe0f7ecb7, "scsi_is_target_device" },
	{ 0xb6f14d0, "scsi_nl_sock" },
	{ 0x53782a5d, "transport_remove_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9f7f8a8a, "scsi_target_block" },
	{ 0x96e91be1, "bsg_job_done" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x1d371342, "bsg_remove_queue" },
	{ 0x4f0c5982, "bsg_setup_queue" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0x49cd25ed, "alloc_workqueue" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD9513438AE6F4BCCD6DEAB");
