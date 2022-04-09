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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb88e6cc5, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9507547f, "ocfs2_cluster_disconnect" },
	{ 0x217bc782, "simple_lookup" },
	{ 0xc38b42ea, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf9e3cdb3, "inc_nlink" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x76f40744, "ocfs2_dlm_lvb" },
	{ 0x1c06d09e, "igrab" },
	{ 0x150d09b9, "mount_nodev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4a1a6708, "kill_litter_super" },
	{ 0x86632d5a, "default_llseek" },
	{ 0xc23477d, "current_task" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd9585300, "setattr_copy" },
	{ 0xc5196999, "ocfs2_dlm_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1475f64b, "ocfs2_dlm_lvb_valid" },
	{ 0xaf969565, "ocfs2_dlm_lock" },
	{ 0xcf94769e, "inode_init_once" },
	{ 0x51cb1fa9, "simple_getattr" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xd344e4ee, "ocfs2_stack_glue_set_max_proto_version" },
	{ 0x132b42d, "simple_unlink" },
	{ 0xda925de2, "simple_dir_operations" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x8ae164b8, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xb732c3f4, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4de1b089, "current_time" },
	{ 0xcafdd707, "ocfs2_dlm_lock_status" },
	{ 0xd811a9cf, "d_make_root" },
	{ 0x44368f55, "simple_statfs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc25db9fa, "unregister_filesystem" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcfd3fc5, "ocfs2_cluster_connect_agnostic" },
	{ 0x27cb619b, "new_inode" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6f34238e, "clear_inode" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x548c6580, "d_instantiate" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb15ff7a9, "simple_rmdir" },
	{ 0x8bf51fec, "setattr_prepare" },
	{ 0x973371d0, "inode_init_owner" },
};

MODULE_INFO(depends, "ocfs2_stackglue,ocfs2_nodemanager");


MODULE_INFO(srcversion, "89CE0D15A62486C2B297793");
