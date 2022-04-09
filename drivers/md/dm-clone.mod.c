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
	{ 0x38e46431, "mempool_exit" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x48e323be, "dm_bm_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x224a96de, "dm_get_device" },
	{ 0x11fbbe02, "dm_bitset_set_bit" },
	{ 0x51f86a1a, "blk_limits_io_opt" },
	{ 0x81840807, "blkdev_issue_flush" },
	{ 0x688d422d, "dm_bm_block_size" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0x28f8bb54, "dm_table_device_name" },
	{ 0x64bdfd6d, "dm_kcopyd_copy" },
	{ 0x9955fef4, "dm_bitset_cursor_begin" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd2779731, "blk_limits_io_min" },
	{ 0xd163cade, "dm_tm_commit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5736c9c5, "dm_bitset_flush" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x9341b376, "dm_bitset_cursor_get_value" },
	{ 0x2d38ecd9, "dm_bitset_resize" },
	{ 0x337b8c1a, "dm_table_event" },
	{ 0x2f40da68, "dm_bm_set_read_write" },
	{ 0x93aa41c5, "dm_set_target_max_io_len" },
	{ 0x4f477261, "dm_bm_checksum" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x72289260, "dm_block_manager_destroy" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x73420d49, "dm_bitset_empty" },
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x88a5c035, "dm_bitset_cursor_next" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0x9a71049f, "dm_suspended" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9e798e22, "dm_bm_set_read_only" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x7ade1071, "dm_tm_destroy" },
	{ 0x88998224, "dm_disk_bitset_init" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x30c37cc0, "dm_bm_write_lock_zero" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x9baa8b92, "bdevname" },
	{ 0xdf3a4e7d, "dm_tm_create_with_sm" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x7b6b3af5, "dm_bm_read_lock" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x54f69d, "dm_tm_pre_commit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5475ba9e, "dm_block_location" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x6c218062, "dm_bitset_cursor_end" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xca068b9f, "dm_block_manager_create" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x95a52abd, "dm_bm_is_read_only" },
	{ 0xc76edc06, "dm_put_device" },
	{ 0x1e3f728d, "dm_block_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-persistent-data,dm-mod");


MODULE_INFO(srcversion, "C3C676A8AD032B1EFC7C313");
