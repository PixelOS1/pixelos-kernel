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
	{ 0xeec53716, "fat_detach" },
	{ 0x3b4094fa, "drop_nlink" },
	{ 0x8e40b5ef, "mark_buffer_dirty_inode" },
	{ 0xb88e6cc5, "__mark_inode_dirty" },
	{ 0x349cba85, "strchr" },
	{ 0xa709008, "fat_flush_inodes" },
	{ 0x56a0adff, "fat_truncate_time" },
	{ 0xf9e3cdb3, "inc_nlink" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x262daff5, "mount_bdev" },
	{ 0xc7c3cf67, "fat_sync_inode" },
	{ 0x2864a990, "fat_add_entries" },
	{ 0xf36c92c, "fat_remove_entries" },
	{ 0x5cba10ed, "fat_alloc_new_dir" },
	{ 0x7f2061e0, "fat_fill_super" },
	{ 0xa8c51de7, "fat_build_inode" },
	{ 0x8ad03132, "fat_update_time" },
	{ 0xbde8d3f5, "fat_attach" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0xf0b9e70, "sync_dirty_buffer" },
	{ 0xc39da0a2, "fat_getattr" },
	{ 0xe824d5f, "__brelse" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf58c6d89, "kill_block_super" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xa3ef0f36, "fat_scan" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x63bf85f, "__fat_fs_error" },
	{ 0x4de1b089, "current_time" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0x9a12adf5, "fat_setattr" },
	{ 0x6cdfc0af, "fat_free_clusters" },
	{ 0xff0b7934, "fat_get_dotdot_entry" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0xb68b0de1, "fat_time_unix2fat" },
	{ 0x42b87ff0, "fat_dir_empty" },
	{ 0x548c6580, "d_instantiate" },
	{ 0x1bc6a123, "clear_nlink" },
};

MODULE_INFO(depends, "fat");


MODULE_INFO(srcversion, "E4EA6BAE3A40F24D67166E3");
