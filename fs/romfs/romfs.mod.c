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
	{ 0x499df5af, "generic_file_llseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43dc7314, "get_tree_bdev" },
	{ 0xfbfad535, "page_symlink_inode_operations" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x60d96bae, "__bread_gfp" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4ee914ef, "generic_ro_fops" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xc251be1c, "inode_nohighmem" },
	{ 0xe824d5f, "__brelse" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x534f8724, "unlock_new_inode" },
	{ 0xf58c6d89, "kill_block_super" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x1abfb4a7, "logfc" },
	{ 0x37a0cba, "kfree" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0x83f411bb, "sb_set_blocksize" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x9fbe090f, "init_special_inode" },
	{ 0x8260986, "iget_locked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "50970E716EED5EF92BAFAE2");
