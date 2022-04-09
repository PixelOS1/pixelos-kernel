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
	{ 0xa24f23d8, "__request_module" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0x788f719b, "submit_bio_wait" },
	{ 0x1325345e, "dm_bio_get_target_bio_nr" },
	{ 0xcd2ba798, "dm_bufio_forget" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x754d539c, "strlen" },
	{ 0x224a96de, "dm_get_device" },
	{ 0x7becc1e6, "dm_io" },
	{ 0xfc14bb2e, "dm_get_dev_t" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xb9380e95, "dm_table_get_md" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x72f07bf4, "dm_bufio_set_minimum_buffers" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x9154ba67, "dm_table_get_mode" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x72d0c97a, "bio_uninit" },
	{ 0x999e8297, "vfree" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x64bdfd6d, "dm_kcopyd_copy" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x7173c92e, "dm_put" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xc0b2533d, "bio_reset" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x89f43e89, "dm_internal_suspend_fast" },
	{ 0x337b8c1a, "dm_table_event" },
	{ 0xfb578fc5, "memset" },
	{ 0x90608006, "dm_kcopyd_zero" },
	{ 0x6665d5b9, "bio_init" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x93aa41c5, "dm_set_target_max_io_len" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x39e9001c, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0x9a71049f, "dm_suspended" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0xdfbcf889, "module_put" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x33d8916, "dm_accept_partial_bio" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x7880c781, "dm_kcopyd_prepare_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0x14e6e1f2, "dm_hold" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x6946b565, "dm_table_get_size" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc76edc06, "dm_put_device" },
	{ 0xf72d0e8a, "dm_per_bio_data" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4b5fd49e, "dm_kcopyd_do_callback" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xfd77b3b2, "dm_internal_resume_fast" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod,dm-bufio");


MODULE_INFO(srcversion, "9FFD036378EC30021C3DB9F");
