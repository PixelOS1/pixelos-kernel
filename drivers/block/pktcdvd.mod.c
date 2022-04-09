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
	{ 0x9b02585d, "single_release" },
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x3b1bbe48, "blkdev_compat_ptr_ioctl" },
	{ 0x8371509, "nonseekable_open" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xbc02877d, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x3c08c820, "proc_mkdir" },
	{ 0x4195254f, "class_destroy" },
	{ 0xa164df89, "misc_register" },
	{ 0x97ac8144, "__class_register" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x311e6907, "bioset_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x6e81e8b1, "bio_kmalloc" },
	{ 0x72be1baf, "set_capacity_and_notify" },
	{ 0x292d5851, "set_capacity" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x9604dda, "freezing_slow_path" },
	{ 0x591a7f11, "bio_copy_data_iter" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x8fc84473, "set_user_nice" },
	{ 0xc23477d, "current_task" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0xc0b2533d, "bio_reset" },
	{ 0xfb578fc5, "memset" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0x3f2ca6fd, "blk_rq_map_kern" },
	{ 0xa17ee47c, "blk_mq_free_request" },
	{ 0xc1ce6cae, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x93ca52cf, "scsi_alloc_request" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x350e1083, "proc_create_single_data" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0x1b2e56a1, "set_blocksize" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x761527a1, "put_device" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xc6911995, "device_create_with_groups" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0xf5955954, "scsi_device_from_queue" },
	{ 0x29014389, "blkdev_get_by_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0xe102faa1, "__blk_alloc_disk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xdfbcf889, "module_put" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0xdaada13, "del_gendisk" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0xff90868c, "blkdev_put" },
	{ 0x776c87fd, "device_unregister" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe4345174, "single_open" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xd349d253, "seq_printf" },
	{ 0x9baa8b92, "bdevname" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x2c76e3ba, "bio_devname" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0xee159324, "bio_clone_fast" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x1000e51, "schedule" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7c145d, "bio_chain" },
	{ 0xb45d60, "bio_split" },
	{ 0x72e93e7f, "blk_queue_split" },
	{ 0x21075824, "__free_pages" },
	{ 0xee4271b9, "bio_put" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "3E7A1DA7C010D76F6D58E94");
