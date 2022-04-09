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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xbb5cffe8, "folio_wait_bit" },
	{ 0x43dc7314, "get_tree_bdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfbfad535, "page_symlink_inode_operations" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4ee914ef, "generic_ro_fops" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xc251be1c, "inode_nohighmem" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x534f8724, "unlock_new_inode" },
	{ 0xf58c6d89, "kill_block_super" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x1abfb4a7, "logfc" },
	{ 0xedf87f63, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x9fbe090f, "init_special_inode" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x8260986, "iget_locked" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8538110CA6F554CF5EA122F");
