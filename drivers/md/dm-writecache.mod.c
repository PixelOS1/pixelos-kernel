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
	{ 0x73fec674, "param_ops_uint" },
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0x1325345e, "dm_bio_get_target_bio_nr" },
	{ 0x33d8916, "dm_accept_partial_bio" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x90006be6, "dm_kcopyd_client_flush" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0xd68133b, "submit_bio" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0x7807f0f8, "schedule_timeout_idle" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0xd1f93394, "bio_endio" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x64bdfd6d, "dm_kcopyd_copy" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xee4271b9, "bio_put" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8eee3399, "dax_read_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xbc9f459f, "vmap" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3efd1889, "dax_direct_access" },
	{ 0xd84d35bd, "dax_read_lock" },
	{ 0x2a976d1c, "dax_synchronous" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x311e6907, "bioset_init" },
	{ 0x224a96de, "dm_get_device" },
	{ 0x9154ba67, "dm_table_get_mode" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfb578fc5, "memset" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xece784c2, "rb_first" },
	{ 0xca9360b5, "rb_next" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9a71049f, "dm_suspended" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0xc76edc06, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xbc02877d, "bioset_exit" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xa79ef7dd, "__bio_advance" },
	{ 0xbc4e24bb, "copy_mc_to_kernel" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc23477d, "current_task" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x92997ed8, "_printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa6257a2f, "complete" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7becc1e6, "dm_io" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "62A07F368DE7BB10282CD13");
