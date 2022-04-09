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
	{ 0x84d88ac8, "simple_pin_fs" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa185d328, "inode_permission" },
	{ 0x754d539c, "strlen" },
	{ 0x7517ac2, "get_tree_single" },
	{ 0x95149bf4, "simple_release_fs" },
	{ 0x4c3ae0c3, "_copy_from_iter" },
	{ 0xc38b42ea, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x1151052, "dput" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf9e3cdb3, "inc_nlink" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb16fd5d4, "d_add" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xf9644485, "d_delete" },
	{ 0x30f54c86, "ram_aops" },
	{ 0x52f002f5, "sysfs_remove_mount_point" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xa611ebbc, "kern_path" },
	{ 0xfb578fc5, "memset" },
	{ 0x4a1a6708, "kill_litter_super" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x587b0954, "kvasprintf" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdfbcf889, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x132b42d, "simple_unlink" },
	{ 0xfbaa70c7, "simple_setattr" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0xa348c43c, "d_drop" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68af2f5a, "simple_get_link" },
	{ 0xb8f9689f, "path_put" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x148653, "vsnprintf" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3e348c72, "sysfs_create_mount_point" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x9ee3af51, "kernel_kobj" },
	{ 0xb732c3f4, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xc221be4e, "iunique" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4de1b089, "current_time" },
	{ 0x8189c08f, "fsnotify" },
	{ 0x116f1ca5, "always_delete_dentry" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x44368f55, "simple_statfs" },
	{ 0x94d4c15c, "d_alloc_name" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x27cb619b, "new_inode" },
	{ 0xc7464430, "free_inode_nonrcu" },
	{ 0x3e5b6f64, "_copy_to_iter" },
	{ 0x548c6580, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xb15ff7a9, "simple_rmdir" },
	{ 0xd662a4e, "__d_drop" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC1DB3508C53C477B672C9F");
