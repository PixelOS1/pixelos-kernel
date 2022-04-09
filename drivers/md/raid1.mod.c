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
	{ 0x999ab985, "__SCK__tp_func_block_bio_remap" },
	{ 0xa7632fdb, "unregister_md_personality" },
	{ 0x6ee26f4f, "register_md_personality" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0xefb07ca8, "md_bitmap_startwrite" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x548e30c7, "md_flush_request" },
	{ 0xc75cb5bc, "md_wait_for_blocked_rdev" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x1ebf7952, "md_write_start" },
	{ 0x2c76e3ba, "bio_devname" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcb91bdd0, "bio_free_pages" },
	{ 0x6c8d7f49, "bio_copy_data" },
	{ 0xe62be2ea, "md_write_end" },
	{ 0x30b25054, "md_bitmap_endwrite" },
	{ 0xb110a22b, "rdev_clear_badblocks" },
	{ 0x788f719b, "submit_bio_wait" },
	{ 0xa21d8b99, "bio_trim" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2dbb7d32, "md_check_recovery" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7fb1165c, "md_bitmap_close_sync" },
	{ 0xc0b2533d, "bio_reset" },
	{ 0x4cd9b8e0, "md_bitmap_cond_end_sync" },
	{ 0x94dc0f90, "md_bitmap_start_sync" },
	{ 0xb8620621, "md_allow_write" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0xccf62e2, "md_unregister_thread" },
	{ 0x2518bd26, "blk_queue_max_write_zeroes_sectors" },
	{ 0x77ef331e, "blk_queue_max_write_same_sectors" },
	{ 0x3e80663b, "mddev_init_writes_pending" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdbccfa09, "md_register_thread" },
	{ 0x311e6907, "bioset_init" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4e01e28f, "md_integrity_register" },
	{ 0xbc02877d, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xe58c6d74, "md_done_sync" },
	{ 0xd2c84efc, "md_bitmap_end_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c02d0d, "bio_start_io_acct" },
	{ 0xe7c145d, "bio_chain" },
	{ 0xb45d60, "bio_split" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x273aff5c, "__SCT__tp_func_block_bio_remap" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfd0f5141, "badblocks_check" },
	{ 0xd67f06ef, "__tracepoint_block_bio_remap" },
	{ 0xee159324, "bio_clone_fast" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x77e5830e, "md_cluster_ops" },
	{ 0xf9af9602, "bio_end_io_acct_remapped" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x6e81e8b1, "bio_kmalloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca9360b5, "rb_next" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6a939213, "__trace_note_message" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0xee4271b9, "bio_put" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x9dfb3d6, "md_error" },
	{ 0x3f5d4af3, "rdev_set_badblocks" },
	{ 0xfe6577c7, "sync_page_io" },
	{ 0xd349d253, "seq_printf" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0x8a798721, "disk_stack_limits" },
	{ 0x907c470c, "md_integrity_add_rdev" },
	{ 0xadeab9c7, "kernfs_notify" },
	{ 0x8972abc3, "md_set_array_sectors" },
	{ 0xd8995f6f, "md_bitmap_resize" },
	{ 0xc23477d, "current_task" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0x949d5814, "md_bitmap_unplug" },
	{ 0x92997ed8, "_printk" },
	{ 0x9baa8b92, "bdevname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8b3fd4b4, "md_wakeup_thread" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "50390277ED0E97D47A21F05");
