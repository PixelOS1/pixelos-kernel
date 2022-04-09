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
	{ 0xe6f19b34, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xc7dae385, "fs_bio_set" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5cab9945, "unregister_xenbus_watch" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0x7169fbb9, "xenbus_map_ring_valloc" },
	{ 0xa84ee3f4, "gnttab_map_refs" },
	{ 0x349cba85, "strchr" },
	{ 0xee111615, "param_ops_int" },
	{ 0xf3968ad0, "xenbus_dev_error" },
	{ 0x754d539c, "strlen" },
	{ 0xa9dc8828, "xenbus_dev_is_online" },
	{ 0x34603324, "gnttab_unmap_refs" },
	{ 0x4b931968, "xen_features" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xc75d4a7, "gnttab_unmap_refs_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6a6b3428, "invalidate_inode_pages2" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x1de76e79, "gnttab_unmap_refs_async" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x386e6b0e, "xenbus_unmap_ring_vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xa240c09e, "gnttab_page_cache_get" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x2b86594e, "__xenbus_register_backend" },
	{ 0x9604dda, "freezing_slow_path" },
	{ 0xa5cf337b, "bind_interdomain_evtchn_to_irqhandler_lateeoi" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0xdc029e6c, "xenbus_watch_pathfmt" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x22486473, "xenbus_unregister_driver" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xea5cbce, "xen_irq_lateeoi" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x29014389, "blkdev_get_by_dev" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xee4271b9, "bio_put" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xc2c5802, "work_busy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0458ccb, "xenbus_strstate" },
	{ 0xdfbcf889, "module_put" },
	{ 0xd68133b, "submit_bio" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0x9f984513, "strrchr" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xff90868c, "blkdev_put" },
	{ 0x68bc1247, "sync_blockdev" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb30797d, "xenbus_switch_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xb241076e, "gnttab_page_cache_put" },
	{ 0x40cfa4dc, "gnttab_page_cache_shrink" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x9ed698da, "xenbus_dev_fatal" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xca9360b5, "rb_next" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0x4833e6da, "gnttab_page_cache_init" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1C3CF0CFCB6C3E67D90A9F0");
