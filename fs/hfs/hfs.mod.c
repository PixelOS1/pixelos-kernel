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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9eeb94f, "sb_min_blocksize" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x23192af3, "unload_nls" },
	{ 0x84b30fb6, "make_bad_inode" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xb88e6cc5, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1fdf59d5, "iget5_locked" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xb5286867, "__lock_buffer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd349d253, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xa2caf50d, "block_read_full_page" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x262daff5, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x1c06d09e, "igrab" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x73cfab78, "unlock_buffer" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xa64c3892, "set_page_dirty" },
	{ 0xe87e3ed0, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xbf7b33e4, "from_kgid_munged" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x467535d9, "__insert_inode_hash" },
	{ 0xfb578fc5, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xb2e66caa, "inode_add_bytes" },
	{ 0xc23477d, "current_task" },
	{ 0x60d96bae, "__bread_gfp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2f784bb9, "write_inode_now" },
	{ 0xf1e046cc, "panic" },
	{ 0x20fc3a97, "mpage_writepages" },
	{ 0x8263ee7, "cdrom_multisession" },
	{ 0x9166fada, "strncpy" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0xd9585300, "setattr_copy" },
	{ 0xf0b9e70, "sync_dirty_buffer" },
	{ 0x4b50bfe7, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0xccb23c4, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe824d5f, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xf826e747, "seq_escape_mem" },
	{ 0xeacce97b, "cdrom_read_tocentry" },
	{ 0x244ac0c2, "mark_page_accessed" },
	{ 0x1b56e9d2, "file_write_and_wait_range" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x3942151b, "generic_file_mmap" },
	{ 0x6db799fa, "pagecache_write_end" },
	{ 0x2b6bf121, "block_write_full_page" },
	{ 0x68bc1247, "sync_blockdev" },
	{ 0xaf2cf77c, "truncate_inode_pages_final" },
	{ 0xfb8660a8, "try_to_free_buffers" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x32d5a63e, "load_nls" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xdfab5c77, "generic_write_end" },
	{ 0x92997ed8, "_printk" },
	{ 0x534f8724, "unlock_new_inode" },
	{ 0xf58c6d89, "kill_block_super" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xb88435bc, "inode_newsize_ok" },
	{ 0x5bf43e51, "inode_set_bytes" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7bca3057, "generic_file_write_iter" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb732c3f4, "iput" },
	{ 0x2aaba111, "cont_write_begin" },
	{ 0xedf87f63, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x520aa5f7, "inode_dio_wait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4de1b089, "current_time" },
	{ 0x4cee1ae4, "load_nls_default" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0xaa8075a, "__set_page_dirty_buffers" },
	{ 0x83f411bb, "sb_set_blocksize" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x47000950, "__blockdev_direct_IO" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7ac17b, "mark_buffer_dirty" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x27cb619b, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd9061a2, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x6f34238e, "clear_inode" },
	{ 0x548c6580, "d_instantiate" },
	{ 0x9e28d6d8, "pagecache_write_begin" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x68a93784, "generic_block_bmap" },
	{ 0x78defb51, "generic_listxattr" },
	{ 0x1bc6a123, "clear_nlink" },
	{ 0x8260986, "iget_locked" },
	{ 0x8bf51fec, "setattr_prepare" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "B93928E6088DACFE6F0A2A8");