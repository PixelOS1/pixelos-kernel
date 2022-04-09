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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3b4094fa, "drop_nlink" },
	{ 0x7410aba2, "strreplace" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x53ff030d, "efivar_entry_delete" },
	{ 0x754d539c, "strlen" },
	{ 0x7517ac2, "get_tree_single" },
	{ 0x465e24ff, "ucs2_utf8size" },
	{ 0x217bc782, "simple_lookup" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xc38b42ea, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x1151052, "dput" },
	{ 0xf9e3cdb3, "inc_nlink" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0xb16fd5d4, "d_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf9644485, "d_delete" },
	{ 0x4a1a6708, "kill_litter_super" },
	{ 0x11089ac7, "_ctype" },
	{ 0x8f8f2c34, "efivar_entry_remove" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x73e1410d, "efivar_entry_size" },
	{ 0xad5737fc, "efivar_init" },
	{ 0x22749e72, "simple_open" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4d17210f, "efivar_entry_set_get_size" },
	{ 0xda925de2, "simple_dir_operations" },
	{ 0xedf19864, "d_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbb2a8f11, "efivar_entry_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd93a5cb1, "efivar_variable_is_removable" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xb732c3f4, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5c1db03b, "efivar_entry_add" },
	{ 0x4de1b089, "current_time" },
	{ 0x116f1ca5, "always_delete_dentry" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x44368f55, "simple_statfs" },
	{ 0xf94ec0b9, "inode_set_flags" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x27cb619b, "new_inode" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8291d09e, "__efivar_entry_iter" },
	{ 0x6f34238e, "clear_inode" },
	{ 0x18615d35, "efivar_supports_writes" },
	{ 0x548c6580, "d_instantiate" },
	{ 0x6aa238df, "efivars_kobject" },
	{ 0x4336fcca, "ucs2_as_utf8" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A1F5A8AB11193A60F24488F");
