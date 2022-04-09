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
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xc7dae385, "fs_bio_set" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xa429902b, "blkdev_report_zones" },
	{ 0x788f719b, "submit_bio_wait" },
	{ 0x21365d60, "iov_iter_npages" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0x3e8e4e79, "iomap_is_partially_uptodate" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9b35eb73, "__set_page_dirty_nobuffers" },
	{ 0x1ff516aa, "filemap_fault" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8147b506, "generic_file_llseek_size" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3f1f9b5c, "send_sig" },
	{ 0x59e2d635, "rcuwait_wake_up" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x81840807, "blkdev_issue_flush" },
	{ 0x75cc6914, "generic_file_open" },
	{ 0x217bc782, "simple_lookup" },
	{ 0xae45b671, "__percpu_down_read" },
	{ 0x2211a4c0, "blk_op_str" },
	{ 0xe5b0d31c, "touch_atime" },
	{ 0x1151052, "dput" },
	{ 0x44e9a829, "match_token" },
	{ 0xf9e3cdb3, "inc_nlink" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x3b82be97, "iomap_writepages" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x262daff5, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb16fd5d4, "d_add" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf19f60b1, "noop_direct_IO" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0xe87e3ed0, "truncate_setsize" },
	{ 0x668b19a1, "down_read" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0x6665d5b9, "bio_init" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x3d5625bf, "iomap_swapfile_activate" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0x664ce393, "file_update_time" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd9585300, "setattr_copy" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xccb23c4, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xee4271b9, "bio_put" },
	{ 0x1b56e9d2, "file_write_and_wait_range" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8b1a0292, "iomap_page_mkwrite" },
	{ 0x590047a8, "iomap_invalidatepage" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x21075824, "__free_pages" },
	{ 0xda925de2, "simple_dir_operations" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd53b93bc, "blkdev_zone_mgmt" },
	{ 0x92997ed8, "_printk" },
	{ 0xf58c6d89, "kill_block_super" },
	{ 0x53c030f2, "iomap_writepage" },
	{ 0x50e8ec0d, "iomap_dio_rw" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4e8dfa51, "iomap_readpage" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x59b24d97, "bio_iov_iter_get_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x96a856ad, "dquot_transfer" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xbb65888b, "iter_file_splice_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x520aa5f7, "inode_dio_wait" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x4de1b089, "current_time" },
	{ 0x4fdea54b, "generic_error_remove_page" },
	{ 0x15b919bb, "iomap_releasepage" },
	{ 0xeba65d0d, "d_genocide" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0x83f411bb, "sb_set_blocksize" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x94d4c15c, "d_alloc_name" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xce5aa43e, "iomap_file_buffered_write" },
	{ 0x1852308, "filemap_map_pages" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x27cb619b, "new_inode" },
	{ 0xd35341ff, "blkdev_nr_zones" },
	{ 0xd9061a2, "generic_file_splice_read" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x1787ab61, "iocb_bio_iopoll" },
	{ 0xb625b42c, "iomap_migrate_page" },
	{ 0x7432662d, "vfs_fsync_range" },
	{ 0x8bf51fec, "setattr_prepare" },
	{ 0xbf8fd81e, "iomap_readahead" },
	{ 0x973371d0, "inode_init_owner" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0xe029b625, "__bio_release_pages" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4FA9C4676C80C702C2B818B");
