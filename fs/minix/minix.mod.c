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
	{ 0xa3016f7, "iget_failed" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3b4094fa, "drop_nlink" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x8e40b5ef, "mark_buffer_dirty_inode" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xb88e6cc5, "__mark_inode_dirty" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf4e6d446, "block_write_begin" },
	{ 0xa257e0e5, "pagecache_get_page" },
	{ 0x6d4231e6, "__folio_lock" },
	{ 0x25820c64, "fs_overflowuid" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xb5286867, "__lock_buffer" },
	{ 0xf9e3cdb3, "inc_nlink" },
	{ 0xa2caf50d, "block_read_full_page" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x262daff5, "mount_bdev" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x2ef4fb01, "__getblk_gfp" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x73cfab78, "unlock_buffer" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe87e3ed0, "truncate_setsize" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0x707c6edc, "folio_write_one" },
	{ 0x467535d9, "__insert_inode_hash" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x6aa99869, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0x60d96bae, "__bread_gfp" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x24a578b0, "from_kgid" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xd9585300, "setattr_copy" },
	{ 0x70b5ce17, "page_symlink" },
	{ 0xf0b9e70, "sync_dirty_buffer" },
	{ 0x4b50bfe7, "truncate_pagecache" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xccb23c4, "generic_file_read_iter" },
	{ 0xc251be1c, "inode_nohighmem" },
	{ 0xe824d5f, "__brelse" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe7820b1a, "invalidate_inode_buffers" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x3942151b, "generic_file_mmap" },
	{ 0x2b6bf121, "block_write_full_page" },
	{ 0x29ebdcb6, "block_write_end" },
	{ 0xaf2cf77c, "truncate_inode_pages_final" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdfab5c77, "generic_write_end" },
	{ 0x92997ed8, "_printk" },
	{ 0x534f8724, "unlock_new_inode" },
	{ 0xf58c6d89, "kill_block_super" },
	{ 0xb88435bc, "inode_newsize_ok" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x3c23631c, "d_tmpfile" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x7bca3057, "generic_file_write_iter" },
	{ 0xb732c3f4, "iput" },
	{ 0xedf87f63, "read_cache_page" },
	{ 0x6d44b568, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x148974ee, "page_get_link" },
	{ 0x3ed33d00, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4de1b089, "current_time" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0xaa8075a, "__set_page_dirty_buffers" },
	{ 0x47494703, "block_truncate_page" },
	{ 0x83f411bb, "sb_set_blocksize" },
	{ 0x38b0227e, "__bforget" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xfceeb554, "__block_write_begin" },
	{ 0x7ac17b, "mark_buffer_dirty" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x9fbe090f, "init_special_inode" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x27cb619b, "new_inode" },
	{ 0xd9061a2, "generic_file_splice_read" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x6f34238e, "clear_inode" },
	{ 0x548c6580, "d_instantiate" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x68a93784, "generic_block_bmap" },
	{ 0x8260986, "iget_locked" },
	{ 0x8bf51fec, "setattr_prepare" },
	{ 0xc885951d, "generic_fillattr" },
	{ 0x973371d0, "inode_init_owner" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xdf929370, "fs_overflowgid" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7E1EF9CD80D4105509E84E2");
