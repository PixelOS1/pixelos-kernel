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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x932b7db, "scsi_dh_set_params" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0x2d7e721c, "dm_table_set_type" },
	{ 0x754d539c, "strlen" },
	{ 0x224a96de, "dm_get_device" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x910ac841, "dm_path_uevent" },
	{ 0xb9380e95, "dm_table_get_md" },
	{ 0x9154ba67, "dm_table_get_mode" },
	{ 0x724eb83e, "dm_start_time_ns_from_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0x28f8bb54, "dm_table_device_name" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3e7efad0, "scsi_dh_attached_handler_name" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x337b8c1a, "dm_table_event" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf21b875, "blk_lld_busy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbbcd944c, "scsi_dh_activate" },
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0x8cad1d33, "scsi_dh_attach" },
	{ 0xf2f38155, "blk_mq_alloc_request" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9a71049f, "dm_suspended" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xd1f93394, "bio_endio" },
	{ 0xdfbcf889, "module_put" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0xa17ee47c, "blk_mq_free_request" },
	{ 0x23ce5740, "dm_mq_kick_requeue_list" },
	{ 0x9baa8b92, "bdevname" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc76edc06, "dm_put_device" },
	{ 0xf72d0e8a, "dm_per_bio_data" },
	{ 0x89c5a28c, "dm_noflush_suspending" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8b3f9fb5, "dm_table_run_md_queue_async" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "E607734D4B3C6C39DD62BED");
