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
	{ 0xa3016f7, "iget_failed" },
	{ 0x608d0267, "zstd_get_error_code" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9eeb94f, "sb_min_blocksize" },
	{ 0x788f719b, "submit_bio_wait" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0x84b30fb6, "make_bad_inode" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x3cbb940b, "zstd_init_dstream" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x44c1375c, "__fs_parse" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xa257e0e5, "pagecache_get_page" },
	{ 0x43dc7314, "get_tree_bdev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdfc12ef1, "zstd_decompress_stream" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xcb91bdd0, "bio_free_pages" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x467535d9, "__insert_inode_hash" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcdf1a098, "d_obtain_alias" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0xf1e046cc, "panic" },
	{ 0x9166fada, "strncpy" },
	{ 0x6e81e8b1, "bio_kmalloc" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0x4ee914ef, "generic_ro_fops" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xc251be1c, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xee4271b9, "bio_put" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6e5b8651, "xz_dec_run" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xafc6c68e, "zstd_is_error" },
	{ 0x7dbaa259, "bdi_put" },
	{ 0x92997ed8, "_printk" },
	{ 0x534f8724, "unlock_new_inode" },
	{ 0xf58c6d89, "kill_block_super" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0x1abfb4a7, "logfc" },
	{ 0x5f19d6c6, "fs_param_is_enum" },
	{ 0xb732c3f4, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x148974ee, "page_get_link" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x81db6ebb, "xz_dec_reset" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x9fbe090f, "init_special_inode" },
	{ 0xc7c1107a, "LZ4_decompress_safe" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x27cb619b, "new_inode" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x3f34644d, "zstd_dstream_workspace_bound" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x8260986, "iget_locked" },
	{ 0x9445665, "noop_backing_dev_info" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0x8876548, "super_setup_bdi_name" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D57318246621BE5C39D76E9");
