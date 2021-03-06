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
	{ 0x2ec97348, "kobject_put" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb45d60, "bio_split" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa429902b, "blkdev_report_zones" },
	{ 0xf9a482f9, "msleep" },
	{ 0x75782bc4, "blk_mq_requeue_request" },
	{ 0x53b954a2, "up_read" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x86f6b99d, "synchronize_rcu_expedited" },
	{ 0xc9ede2c1, "crypto_alloc_shash" },
	{ 0x349cba85, "strchr" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x12098e06, "blk_mq_run_hw_queues" },
	{ 0xee111615, "param_ops_int" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x754d539c, "strlen" },
	{ 0x71cefdb, "blk_mark_disk_dead" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc8d45fc7, "bioset_init_from_src" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaa917cad, "__SCK__tp_func_block_rq_remap" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0x7242d92, "put_dax" },
	{ 0x51f86a1a, "blk_limits_io_opt" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x606db81c, "blk_mq_start_request" },
	{ 0xc8051cc3, "bd_link_disk_holder" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x90dc440e, "__tracepoint_block_rq_remap" },
	{ 0xd67f06ef, "__tracepoint_block_bio_remap" },
	{ 0x8135613, "dax_write_cache" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0xcfb17d1b, "__srcu_read_unlock" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x72e93e7f, "blk_queue_split" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x330f6116, "set_dax_synchronous" },
	{ 0x311e6907, "bioset_init" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe94c52b2, "crypto_shash_final" },
	{ 0x72d0c97a, "bio_uninit" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8f1c07f, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5012a70, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd2779731, "blk_limits_io_min" },
	{ 0x8371509, "nonseekable_open" },
	{ 0x667b0e74, "audit_log_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x621804c9, "blk_insert_cloned_request" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa164df89, "misc_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x6665d5b9, "bio_init" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf9685efc, "bd_unlink_disk_holder" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x11089ac7, "_ctype" },
	{ 0x4d9bf4e, "blk_set_stacking_limits" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe8aa5306, "cleanup_srcu_struct" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xdaada13, "del_gendisk" },
	{ 0x75587220, "blk_mq_free_tag_set" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x3caad30b, "crypto_shash_update" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0xa980d013, "kobject_init_and_add" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x790bafd4, "blk_stack_limits" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xe7c145d, "bio_chain" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x9166fada, "strncpy" },
	{ 0x77ce2f1f, "dax_remove_host" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0xc10fddb8, "name_to_dev_t" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x954f099c, "idr_preload" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x6626afca, "down" },
	{ 0x7af05493, "blk_integrity_compare" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0x292d5851, "set_capacity" },
	{ 0x699620e8, "thaw_bdev" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x28d87421, "__srcu_read_lock" },
	{ 0x29014389, "blkdev_get_by_dev" },
	{ 0xec5668f6, "dax_zero_page_range" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xe3eb4747, "blk_update_request" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa79ef7dd, "__bio_advance" },
	{ 0x999ab985, "__SCK__tp_func_block_bio_remap" },
	{ 0xe167dc3d, "init_srcu_struct" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9e9c4f24, "set_dax_nomc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd1f93394, "bio_endio" },
	{ 0xee4271b9, "bio_put" },
	{ 0x1f0ca91d, "kobject_uevent_env" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xd5cecc6, "ima_measure_critical_data" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xbc02877d, "bioset_exit" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x598e2548, "blk_mq_init_allocated_queue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0xdfbcf889, "module_put" },
	{ 0xa92ad40a, "dax_add_host" },
	{ 0xd68133b, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x21075824, "__free_pages" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xff90868c, "blkdev_put" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xed1dbf1f, "__SCK__tp_func_block_split" },
	{ 0x82ed9bd8, "bio_integrity_clone" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0xa916b694, "strnlen" },
	{ 0xf5ca43d0, "__tracepoint_block_split" },
	{ 0x9baa8b92, "bdevname" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfad9c827, "kill_dax" },
	{ 0x1000e51, "schedule" },
	{ 0xb9b5b173, "bio_integrity_trim" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x1308720, "bioset_integrity_create" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xacf649bf, "audit_log_task_info" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x3efd1889, "dax_direct_access" },
	{ 0xce226563, "blk_mq_alloc_tag_set" },
	{ 0x6e1aef62, "blk_mq_delay_kick_requeue_list" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf9af9602, "bio_end_io_acct_remapped" },
	{ 0xa8da2b88, "blk_integrity_unregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xeb2577b3, "alloc_dax" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x9493fc86, "node_states" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xef31f042, "blk_mq_end_request" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x14c8dfb3, "synchronize_srcu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x2c283ba, "blk_rq_unprep_clone" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x138e0957, "dax_write_cache_enabled" },
	{ 0xf83ba0ad, "blk_mq_kick_requeue_list" },
	{ 0x70647d8d, "blk_queue_write_cache" },
	{ 0xc3920197, "freeze_bdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2c5f8a84, "blk_mq_quiesce_queue" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xf84b47a1, "blk_mq_unquiesce_queue" },
	{ 0x9a2d9357, "blk_rq_prep_clone" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xcf2a6966, "up" },
	{ 0x25934ec8, "dm_kobject_release" },
	{ 0xa0d669e7, "__bio_clone_fast" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9234030c, "blk_mq_queue_inflight" },
	{ 0xca9360b5, "rb_next" },
	{ 0x9d8bb00e, "set_dax_nocache" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x52e049bc, "fs_dax_get_by_bdev" },
	{ 0xcf02ab71, "__SCT__tp_func_block_rq_remap" },
	{ 0xd4404350, "__SCT__tp_func_block_split" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0xa371fa46, "disk_update_readahead" },
	{ 0xd35341ff, "blkdev_nr_zones" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x44cecf84, "bio_start_io_acct_time" },
	{ 0xa67ae5a2, "zero_fill_bio" },
	{ 0x2a976d1c, "dax_synchronous" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xdddf66ea, "blk_integrity_register" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe102faa1, "__blk_alloc_disk" },
	{ 0x38fca637, "set_disk_ro" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x273aff5c, "__SCT__tp_func_block_bio_remap" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0x72be1baf, "set_capacity_and_notify" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "53FE7E24C953DD3E2579713");
