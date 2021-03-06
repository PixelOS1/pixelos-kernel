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
	{ 0xe6f19b34, "blkdev_issue_discard" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xc7dae385, "fs_bio_set" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xc9ede2c1, "crypto_alloc_shash" },
	{ 0x349cba85, "strchr" },
	{ 0xe4345174, "single_open" },
	{ 0xefec290a, "lc_find" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xfd525ec7, "lc_put" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0x350e1083, "proc_create_single_data" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0x3f1f9b5c, "send_sig" },
	{ 0xa4e58fcd, "tcp_sock_set_nodelay" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9b02585d, "single_release" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xc8051cc3, "bd_link_disk_holder" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xb97220ff, "bitmap_parse" },
	{ 0x7650c19b, "sock_release" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0x7199dc7d, "sock_recvmsg" },
	{ 0x72e93e7f, "blk_queue_split" },
	{ 0xd349d253, "seq_printf" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x311e6907, "bioset_init" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd65e4b2a, "sock_create_kern" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe94c52b2, "crypto_shash_final" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x2f20bdd1, "lc_seq_dump_details" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94216657, "seq_read" },
	{ 0x5012a70, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x4cf5f5a8, "lc_is_used" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xc8a016aa, "param_ops_string" },
	{ 0x4522d82a, "lc_reset" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xf3e5664f, "blk_queue_max_segments" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x641307b, "lc_destroy" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc3a98c1d, "lc_try_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf9685efc, "bd_unlink_disk_holder" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x4d9bf4e, "blk_set_stacking_limits" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb672aa97, "lc_create" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9a00dbc1, "blk_queue_max_discard_sectors" },
	{ 0xdaada13, "del_gendisk" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x3caad30b, "crypto_shash_update" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0xbfe74b5a, "sock_sendmsg" },
	{ 0xf1e046cc, "panic" },
	{ 0x790bafd4, "blk_stack_limits" },
	{ 0xee159324, "bio_clone_fast" },
	{ 0xcd279169, "nla_find" },
	{ 0x61ed587e, "blkdev_issue_zeroout" },
	{ 0xbee75f33, "blk_queue_segment_boundary" },
	{ 0xfb8d6db5, "iov_iter_kvec" },
	{ 0xeb3de78a, "crypto_shash_digest" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x68d2307b, "blkdev_get_by_path" },
	{ 0x7d11271e, "nla_put" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x4482eecf, "set_cpus_allowed_ptr" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x82b24054, "kernel_sock_shutdown" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0x7257beee, "lc_element_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa4881569, "crypto_shash_setkey" },
	{ 0xce807a25, "up_write" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd1f93394, "bio_endio" },
	{ 0xee4271b9, "bio_put" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x886e2a58, "flush_signals" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xbc02877d, "bioset_exit" },
	{ 0x98d2ed9, "lc_try_get" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf9c02d0d, "bio_start_io_acct" },
	{ 0xdfbcf889, "module_put" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0xd68133b, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0x21075824, "__free_pages" },
	{ 0xff90868c, "blkdev_put" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xeb2bd7ed, "blkdev_issue_write_same" },
	{ 0x33b84f74, "copy_page" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x9134feb7, "lc_get" },
	{ 0x2d47ac83, "lc_committed" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0xa916b694, "strnlen" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x9baa8b92, "bdevname" },
	{ 0x6e33c5e0, "netlink_broadcast" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7a9b509b, "nla_put_nohdr" },
	{ 0x5752f31b, "lc_del" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf9af9602, "bio_end_io_acct_remapped" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x390cf272, "tcp_sock_set_quickack" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xeba914dc, "sched_set_fifo_low" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x63aa0b54, "kernel_accept" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x70647d8d, "blk_queue_write_cache" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xca9360b5, "rb_next" },
	{ 0xbfe69b3a, "debugfs_create_symlink" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcfbb8700, "nla_reserve" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0xa371fa46, "disk_update_readahead" },
	{ 0xbfbe53d5, "lc_get_cumulative" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x64528b8e, "tcp_sock_set_cork" },
	{ 0x77ef331e, "blk_queue_max_write_same_sectors" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0xe102faa1, "__blk_alloc_disk" },
	{ 0x38fca637, "set_disk_ro" },
	{ 0x5289dc99, "lc_seq_printf_stats" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0x72be1baf, "set_capacity_and_notify" },
};

MODULE_INFO(depends, "lru_cache,libcrc32c");


MODULE_INFO(srcversion, "D48EBDEF08BFCD1D3899C57");
