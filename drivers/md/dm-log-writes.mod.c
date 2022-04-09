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
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0xa6257a2f, "complete" },
	{ 0xcb91bdd0, "bio_free_pages" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x9604dda, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xee4271b9, "bio_put" },
	{ 0xd68133b, "submit_bio" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0xc7dae385, "fs_bio_set" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x21075824, "__free_pages" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x224a96de, "dm_get_device" },
	{ 0x9154ba67, "dm_table_get_mode" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc76edc06, "dm_put_device" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x754d539c, "strlen" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf72d0e8a, "dm_per_bio_data" },
	{ 0x96848186, "scnprintf" },
	{ 0x3efd1889, "dax_direct_access" },
	{ 0xec5668f6, "dax_zero_page_range" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "EF8962960383BF86D7B4DB5");
