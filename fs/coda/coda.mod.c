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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x3b4094fa, "drop_nlink" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0x6a449c4f, "register_sysctl_table" },
	{ 0xf1409df7, "user_path_at_empty" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf51a90cc, "__remove_inode_hash" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7facc0a6, "filemap_write_and_wait_range" },
	{ 0x1fdf59d5, "iget5_locked" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xad74a67, "kill_anon_super" },
	{ 0x59e2d635, "rcuwait_wake_up" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xa49731a, "is_bad_inode" },
	{ 0xae45b671, "__percpu_down_read" },
	{ 0xe5b0d31c, "touch_atime" },
	{ 0x1151052, "dput" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0xf9e3cdb3, "inc_nlink" },
	{ 0xca5c8d93, "d_find_alias" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6a8e97b8, "vfs_fsync" },
	{ 0xfed436c5, "generic_read_dir" },
	{ 0x49617c34, "super_setup_bdi" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x150d09b9, "mount_nodev" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x467535d9, "__insert_inode_hash" },
	{ 0x29152bb6, "kernel_read" },
	{ 0x8a298a5e, "vfs_iter_write" },
	{ 0x6aa99869, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x24a578b0, "from_kgid" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56ad5ca7, "set_nlink" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x4dce8ff3, "device_create" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xce807a25, "up_write" },
	{ 0x83063058, "shrink_dcache_sb" },
	{ 0x57bc19d2, "down_write" },
	{ 0xf0785fc6, "fput" },
	{ 0xc251be1c, "inode_nohighmem" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1a9ba1, "__task_pid_nr_ns" },
	{ 0xc171013a, "ilookup5" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xaf2cf77c, "truncate_inode_pages_final" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x486023bf, "vfs_iter_read" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x534f8724, "unlock_new_inode" },
	{ 0xa348c43c, "d_drop" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xafec89e4, "d_prune_aliases" },
	{ 0x183b7f7e, "shrink_dcache_parent" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb8f9689f, "path_put" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9c737881, "init_pid_ns" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xb732c3f4, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x148974ee, "page_get_link" },
	{ 0x3ed33d00, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0x4de1b089, "current_time" },
	{ 0x6233a5fd, "d_splice_alias" },
	{ 0x829c4be5, "sync_filesystem" },
	{ 0x6f3b0bf5, "fget" },
	{ 0x4195254f, "class_destroy" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x1325568a, "task_active_pid_ns" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0x9fbe090f, "init_special_inode" },
	{ 0x27cb619b, "new_inode" },
	{ 0xd9061a2, "generic_file_splice_read" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x6f34238e, "clear_inode" },
	{ 0x548c6580, "d_instantiate" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x1bc6a123, "clear_nlink" },
	{ 0xc885951d, "generic_fillattr" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BEE28F7C0007E45CB478EC9");
