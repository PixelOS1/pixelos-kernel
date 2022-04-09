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
	{ 0xc7dae385, "fs_bio_set" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa429902b, "blkdev_report_zones" },
	{ 0x788f719b, "submit_bio_wait" },
	{ 0x53b954a2, "up_read" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x754d539c, "strlen" },
	{ 0x224a96de, "dm_get_device" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x51f86a1a, "blk_limits_io_opt" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x81840807, "blkdev_issue_flush" },
	{ 0x9154ba67, "dm_table_get_mode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x311e6907, "bioset_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0x28f8bb54, "dm_table_device_name" },
	{ 0x64bdfd6d, "dm_kcopyd_copy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x745a981, "xa_erase" },
	{ 0xd2779731, "blk_limits_io_min" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc23477d, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xee159324, "bio_clone_fast" },
	{ 0x61ed587e, "blkdev_issue_zeroout" },
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa79ef7dd, "__bio_advance" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xee4271b9, "bio_put" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0xbc02877d, "bioset_exit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd68133b, "submit_bio" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0x21075824, "__free_pages" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x311e3ba7, "unregister_shrinker" },
	{ 0x9baa8b92, "bdevname" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x33d8916, "dm_accept_partial_bio" },
	{ 0xd53b93bc, "blkdev_zone_mgmt" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x3d83bbbd, "register_shrinker" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xc76edc06, "dm_put_device" },
	{ 0xf72d0e8a, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd35341ff, "blkdev_nr_zones" },
	{ 0xfbc4f89e, "io_schedule_timeout" },
	{ 0xa67ae5a2, "zero_fill_bio" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "1AFBCE5919769608B36542B");
