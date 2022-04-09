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
	{ 0xd9eeb94f, "sb_min_blocksize" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x23192af3, "unload_nls" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1fdf59d5, "iget5_locked" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xa257e0e5, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xfd1c9d17, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xd349d253, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x69f8e976, "mpage_readahead" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x262daff5, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xfbfad535, "page_symlink_inode_operations" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x2ef4fb01, "__getblk_gfp" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbf7b33e4, "from_kgid_munged" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0x74c2a6e6, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc23477d, "current_task" },
	{ 0x60d96bae, "__bread_gfp" },
	{ 0xcdf1a098, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8263ee7, "cdrom_multisession" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7f12859a, "__wait_on_buffer" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4ee914ef, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xc251be1c, "inode_nohighmem" },
	{ 0xe824d5f, "__brelse" },
	{ 0xeacce97b, "cdrom_read_tocentry" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x21075824, "__free_pages" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x32d5a63e, "load_nls" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x534f8724, "unlock_new_inode" },
	{ 0xf58c6d89, "kill_block_super" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb732c3f4, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0x83f411bb, "sb_set_blocksize" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x9fbe090f, "init_special_inode" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xeb9eef52, "match_uint" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x68a93784, "generic_block_bmap" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "EE9A02F607F773EB2C7EB5F");
