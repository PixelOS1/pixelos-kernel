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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9eeb94f, "sb_min_blocksize" },
	{ 0x23192af3, "unload_nls" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0x1d94f28, "generic_fh_to_parent" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xd349d253, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xa2caf50d, "block_read_full_page" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x262daff5, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xfbfad535, "page_symlink_inode_operations" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbf7b33e4, "from_kgid_munged" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0xc23477d, "current_task" },
	{ 0x60d96bae, "__bread_gfp" },
	{ 0xcdf1a098, "d_obtain_alias" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0x785b4c17, "kmem_cache_create_usercopy" },
	{ 0x4ee914ef, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0xd641f10f, "simple_symlink_inode_operations" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xc251be1c, "inode_nohighmem" },
	{ 0xe824d5f, "__brelse" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x32d5a63e, "load_nls" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x534f8724, "unlock_new_inode" },
	{ 0xf58c6d89, "kill_block_super" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4cee1ae4, "load_nls_default" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0x83f411bb, "sb_set_blocksize" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x2875a315, "utf32_to_utf8" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0xa1bf3711, "generic_fh_to_dentry" },
	{ 0x68a93784, "generic_block_bmap" },
	{ 0x8260986, "iget_locked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9138EABB31D6986BB7B1495");
