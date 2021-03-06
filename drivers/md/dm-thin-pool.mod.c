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
	{ 0x2bc1a8d9, "dm_tm_open_with_sm" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xc7dae385, "fs_bio_set" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x2681f836, "__blkdev_issue_discard" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x87c934be, "dm_tm_inc" },
	{ 0x3646e38f, "dm_tm_issue_prefetches" },
	{ 0x491c713e, "dm_cell_visit_release" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0x788f719b, "submit_bio_wait" },
	{ 0x48e323be, "dm_bm_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0x30a26537, "dm_btree_remove" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x224a96de, "dm_get_device" },
	{ 0x51f86a1a, "blk_limits_io_opt" },
	{ 0xb9380e95, "dm_table_get_md" },
	{ 0xb6879c01, "dm_btree_lookup_next" },
	{ 0x9154ba67, "dm_table_get_mode" },
	{ 0x1816383d, "dm_btree_find_highest_key" },
	{ 0x688d422d, "dm_bm_block_size" },
	{ 0xe1921e9a, "dm_bio_prison_free_cell" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x72d0c97a, "bio_uninit" },
	{ 0x88295b96, "dm_tm_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0x64bdfd6d, "dm_kcopyd_copy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd2779731, "blk_limits_io_min" },
	{ 0xd163cade, "dm_tm_commit" },
	{ 0x6791a44e, "dm_deferred_entry_dec" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x9718cffa, "dm_sm_disk_open" },
	{ 0x7173c92e, "dm_put" },
	{ 0xece784c2, "rb_first" },
	{ 0xf82dba90, "dm_btree_empty" },
	{ 0xb70b342a, "dm_bio_prison_destroy" },
	{ 0x60f96b9e, "dm_cell_release" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xc0b2533d, "bio_reset" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x337b8c1a, "dm_table_event" },
	{ 0x90608006, "dm_kcopyd_zero" },
	{ 0x2f40da68, "dm_bm_set_read_write" },
	{ 0x6665d5b9, "bio_init" },
	{ 0x93aa41c5, "dm_set_target_max_io_len" },
	{ 0x4f477261, "dm_bm_checksum" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xce7e100, "dm_get_md" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x72289260, "dm_block_manager_destroy" },
	{ 0xefbd5ac1, "dm_internal_resume" },
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0xe7c145d, "bio_chain" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xca2e3a88, "dm_deferred_entry_inc" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5375ca71, "dm_bm_write_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0x9a71049f, "dm_suspended" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb7c0f443, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9e798e22, "dm_bm_set_read_only" },
	{ 0x83ca15d7, "dm_bio_prison_alloc_cell" },
	{ 0xd1f93394, "bio_endio" },
	{ 0xee4271b9, "bio_put" },
	{ 0x7b047bd9, "dm_tm_create_non_blocking_clone" },
	{ 0x7ade1071, "dm_tm_destroy" },
	{ 0x75606d09, "dm_btree_lookup" },
	{ 0xe781f874, "dm_tm_dec" },
	{ 0x30c37cc0, "dm_bm_write_lock_zero" },
	{ 0xd68133b, "submit_bio" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0xa01e119f, "dm_cell_release_no_holder" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x79bdc649, "dm_sm_disk_create" },
	{ 0x9baa8b92, "bdevname" },
	{ 0xdf3a4e7d, "dm_tm_create_with_sm" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7b6b3af5, "dm_bm_read_lock" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa9cf611b, "dm_btree_insert_notify" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x2eb01e04, "dm_deferred_set_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x480e329d, "dm_device_name" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x46768dbf, "dm_btree_remove_leaves" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x54f69d, "dm_tm_pre_commit" },
	{ 0xc6c54314, "dm_cell_error" },
	{ 0x8a2e4c43, "dm_bio_from_per_bio_data" },
	{ 0x5475ba9e, "dm_block_location" },
	{ 0x37a0cba, "kfree" },
	{ 0x932a6ffc, "dm_tm_shadow_block" },
	{ 0xb6d5c65d, "dm_deferred_set_add_work" },
	{ 0x5e8b02a2, "dm_internal_suspend_noflush" },
	{ 0x586705e1, "dm_btree_del" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x753e20b2, "dm_bio_prison_create" },
	{ 0xca068b9f, "dm_block_manager_create" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x95a52abd, "dm_bm_is_read_only" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc76edc06, "dm_put_device" },
	{ 0xf72d0e8a, "dm_per_bio_data" },
	{ 0x89c5a28c, "dm_noflush_suspending" },
	{ 0x1e3f728d, "dm_block_data" },
	{ 0x9290e07a, "dm_tm_read_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x3d6961ed, "dm_btree_insert" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa67ae5a2, "zero_fill_bio" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x17dd39d6, "dm_deferred_set_create" },
	{ 0xdb8d9dbd, "dm_bio_detain" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-persistent-data,dm-bio-prison,dm-mod");


MODULE_INFO(srcversion, "C5531FC4EEC08848671FB35");
