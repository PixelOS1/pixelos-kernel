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
	{ 0x2ec97348, "kobject_put" },
	{ 0xe6f19b34, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x23c1cf32, "kset_create_and_add" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x9d74eb29, "address_space_init_once" },
	{ 0xc7dae385, "fs_bio_set" },
	{ 0xa3016f7, "iget_failed" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3b4094fa, "drop_nlink" },
	{ 0xd9eeb94f, "sb_min_blocksize" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0x84b30fb6, "make_bad_inode" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xb88e6cc5, "__mark_inode_dirty" },
	{ 0x9b35eb73, "__set_page_dirty_nobuffers" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1ff516aa, "filemap_fault" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1fdf59d5, "iget5_locked" },
	{ 0xafc08054, "dotdot_name" },
	{ 0xa247fd92, "find_get_pages_contig" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x9b83bc09, "block_invalidatepage" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6c31697d, "block_is_partially_uptodate" },
	{ 0xf4e6d446, "block_write_begin" },
	{ 0x59e2d635, "rcuwait_wake_up" },
	{ 0xca9beaa4, "__xa_store" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xa49731a, "is_bad_inode" },
	{ 0x81840807, "blkdev_issue_flush" },
	{ 0xa257e0e5, "pagecache_get_page" },
	{ 0x6d4231e6, "__folio_lock" },
	{ 0x55ce3bbe, "touch_buffer" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x75cc6914, "generic_file_open" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb5286867, "__lock_buffer" },
	{ 0xae45b671, "__percpu_down_read" },
	{ 0xe5b0d31c, "touch_atime" },
	{ 0xb62889fc, "deactivate_locked_super" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x1151052, "dput" },
	{ 0xd349d253, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xf9e3cdb3, "inc_nlink" },
	{ 0xca5c8d93, "d_find_alias" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x8547593e, "pagevec_lookup_range" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x69f8e976, "mpage_readahead" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x373027c0, "set_page_writeback" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x527ea3b0, "d_instantiate_new" },
	{ 0xb7208e8a, "kobject_del" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x2ef4fb01, "__getblk_gfp" },
	{ 0x1c06d09e, "igrab" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x73cfab78, "unlock_buffer" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1697e6f7, "redirty_page_for_writepage" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xd90b6e63, "pagevec_lookup_range_tag" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xecd7134e, "insert_inode_locked4" },
	{ 0xe87e3ed0, "truncate_setsize" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e278e7b, "end_page_writeback" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0x6aa99869, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x74c2a6e6, "mpage_readpage" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0xf6532b7e, "d_obtain_root" },
	{ 0xb2e66caa, "inode_add_bytes" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x9604dda, "freezing_slow_path" },
	{ 0x60d96bae, "__bread_gfp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xcdf1a098, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xe9af7397, "__xa_set_mark" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0x483499da, "sget" },
	{ 0xa980d013, "kobject_init_and_add" },
	{ 0xf1e046cc, "panic" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xa84e81c9, "__sync_dirty_buffer" },
	{ 0x24a578b0, "from_kgid" },
	{ 0x68d2307b, "blkdev_get_by_path" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7f12859a, "__wait_on_buffer" },
	{ 0x664ce393, "file_update_time" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd9585300, "setattr_copy" },
	{ 0xb0abe1cf, "bpf_trace_run5" },
	{ 0x70b5ce17, "page_symlink" },
	{ 0xe69c76c5, "wait_on_page_writeback" },
	{ 0xf0b9e70, "sync_dirty_buffer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x4b50bfe7, "truncate_pagecache" },
	{ 0xb9af1d0d, "__xa_clear_mark" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xccb23c4, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xc251be1c, "inode_nohighmem" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe824d5f, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x141aa120, "__inode_attach_wb" },
	{ 0xee4271b9, "bio_put" },
	{ 0xc171013a, "ilookup5" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2398a1e1, "mnt_drop_write_file" },
	{ 0xd68133b, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xff90868c, "blkdev_put" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x33b84f74, "copy_page" },
	{ 0xae7fd0e2, "wait_for_stable_page" },
	{ 0x113cbd00, "fs_kobj" },
	{ 0xf044aec9, "inode_sub_bytes" },
	{ 0x29ebdcb6, "block_write_end" },
	{ 0xaf2cf77c, "truncate_inode_pages_final" },
	{ 0x988fd30d, "create_empty_buffers" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xdfab5c77, "generic_write_end" },
	{ 0x1d5b672e, "__breadahead" },
	{ 0x605790dc, "fiemap_fill_next_extent" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x534f8724, "unlock_new_inode" },
	{ 0x2f1b2f83, "mnt_want_write_file" },
	{ 0xf58c6d89, "kill_block_super" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x183b7f7e, "shrink_dcache_parent" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6efb11a2, "clear_page_dirty_for_io" },
	{ 0xac595bcd, "submit_bh" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x7bca3057, "generic_file_write_iter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0xe72cc289, "__pagevec_release" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xbb65888b, "iter_file_splice_write" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x9703bca3, "kset_unregister" },
	{ 0xb732c3f4, "iput" },
	{ 0xedf87f63, "read_cache_page" },
	{ 0xc1a3f868, "invalidate_inode_pages2_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x92307bdf, "generic_permission" },
	{ 0x520aa5f7, "inode_dio_wait" },
	{ 0x148974ee, "page_get_link" },
	{ 0x3ed33d00, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x5910b50, "fiemap_prep" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x4de1b089, "current_time" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xe4bb4dd2, "block_page_mkwrite" },
	{ 0x34df53aa, "end_buffer_read_sync" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0xc950e760, "invalidate_mapping_pages" },
	{ 0xaa8075a, "__set_page_dirty_buffers" },
	{ 0x47494703, "block_truncate_page" },
	{ 0x83f411bb, "sb_set_blocksize" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x96848186, "scnprintf" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x47000950, "__blockdev_direct_IO" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf94ec0b9, "inode_set_flags" },
	{ 0xfceeb554, "__block_write_begin" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x7ac17b, "mark_buffer_dirty" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x9fbe090f, "init_special_inode" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1852308, "filemap_map_pages" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x27cb619b, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd9061a2, "generic_file_splice_read" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xbf53d299, "empty_aops" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0x6f34238e, "clear_inode" },
	{ 0x548c6580, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x1bc6a123, "clear_nlink" },
	{ 0x8bf51fec, "setattr_prepare" },
	{ 0x973371d0, "inode_init_owner" },
	{ 0x9eedd85, "__page_file_index" },
	{ 0xabc65b7, "truncate_inode_pages" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "880AB52F672322551C54FA1");
