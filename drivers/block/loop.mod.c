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
	{ 0x8371509, "nonseekable_open" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xa164df89, "misc_register" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe118972c, "bd_prepare_to_claim" },
	{ 0x1cf551a4, "bd_abort_claiming" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x38fca637, "set_disk_ro" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x6f3b0bf5, "fget" },
	{ 0x72be1baf, "set_capacity_and_notify" },
	{ 0xa03538ec, "invalidate_bdev" },
	{ 0x68bc1247, "sync_blockdev" },
	{ 0xdaada13, "del_gendisk" },
	{ 0x20978fb9, "idr_find" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xae45b671, "__percpu_down_read" },
	{ 0x59e2d635, "rcuwait_wake_up" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x486023bf, "vfs_iter_read" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8a298a5e, "vfs_iter_write" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x98faaef8, "int_active_memcg" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf110b933, "kthread_associate_blkcg" },
	{ 0xc23477d, "current_task" },
	{ 0x597f340a, "iov_iter_bvec" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x70647d8d, "blk_queue_write_cache" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xf0785fc6, "fput" },
	{ 0xae473e10, "bdev_disk_changed" },
	{ 0xad12a40e, "disk_force_media_change" },
	{ 0xdfbcf889, "module_put" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0x79f271cc, "invalidate_disk" },
	{ 0x132ff49c, "blk_queue_io_min" },
	{ 0x38e7cfc2, "blk_queue_physical_block_size" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8f1c07f, "blk_mq_complete_request" },
	{ 0x75587220, "blk_mq_free_tag_set" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0x545f9a57, "__blk_mq_alloc_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce226563, "blk_mq_alloc_tag_set" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xea1424f0, "I_BDEV" },
	{ 0x2518bd26, "blk_queue_max_write_zeroes_sectors" },
	{ 0x9a00dbc1, "blk_queue_max_discard_sectors" },
	{ 0x1a06cdc, "vfs_statfs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xef878912, "blkcg_root_css" },
	{ 0x7e098b1, "cgroup_get_e_css" },
	{ 0x4e69c1e8, "memory_cgrp_subsys" },
	{ 0x606db81c, "blk_mq_start_request" },
	{ 0x75782bc4, "blk_mq_requeue_request" },
	{ 0xe3eb4747, "blk_update_request" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xef31f042, "blk_mq_end_request" },
	{ 0xa67ae5a2, "zero_fill_bio" },
	{ 0xb0e602eb, "memmove" },
	{ 0x754d539c, "strlen" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x27000774, "file_path" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb8f9689f, "path_put" },
	{ 0xf0d3e720, "vfs_getattr" },
	{ 0x178b09f1, "path_get" },
	{ 0xc0eca076, "blk_mq_freeze_queue" },
	{ 0x6f116715, "blk_mq_unfreeze_queue" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0x6a8e97b8, "vfs_fsync" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F91B0C2CCAA8FAF9DCF627");
