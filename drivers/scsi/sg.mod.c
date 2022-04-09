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
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xee111615, "param_ops_int" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x9b02585d, "single_release" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x94216657, "seq_read" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xa41ee6e0, "class_interface_unregister" },
	{ 0xa271ea4a, "remove_proc_subtree" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9cd91791, "register_sysctl" },
	{ 0x4195254f, "class_destroy" },
	{ 0x350e1083, "proc_create_single_data" },
	{ 0x60db5ae0, "proc_create_seq_private" },
	{ 0x36a8a87e, "proc_create" },
	{ 0x3c08c820, "proc_mkdir" },
	{ 0xf0b79c4d, "scsi_register_interface" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x37b9a4fb, "blk_trace_startstop" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x787df00d, "blk_trace_remove" },
	{ 0xba9c2f45, "blk_trace_setup" },
	{ 0xe345078a, "scsi_ioctl_block_when_processing_errors" },
	{ 0xaf40110d, "scsi_ioctl" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xc1d5d504, "scsi_cmd_allowed" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1de4ccb2, "get_sg_io_hdr" },
	{ 0x69fbf2ec, "blk_rq_map_user_iov" },
	{ 0x1be3c0b0, "import_iovec" },
	{ 0xfd741b50, "blk_execute_rq_nowait" },
	{ 0x6801a49, "blk_rq_map_user" },
	{ 0x93ca52cf, "scsi_alloc_request" },
	{ 0x1a9ba1, "__task_pid_nr_ns" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x5ec4aee6, "put_sg_io_hdr" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc23477d, "current_task" },
	{ 0xdfbcf889, "module_put" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x2894b1d, "scsi_block_when_processing_errors" },
	{ 0x7723bc20, "scsi_autopm_get_device" },
	{ 0x5ac4b094, "scsi_device_get" },
	{ 0x8371509, "nonseekable_open" },
	{ 0xf0aeedef, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0x76abb595, "kill_fasync" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x445356d5, "scsi_autopm_put_device" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xf5fa5da, "cdev_del" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0x4dce8ff3, "device_create" },
	{ 0x3b09f2ee, "cdev_add" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0xa39f67e5, "cdev_alloc" },
	{ 0xe4345174, "single_open" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa4eb5793, "sbitmap_weight" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x20978fb9, "idr_find" },
	{ 0xd349d253, "seq_printf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xa17ee47c, "blk_mq_free_request" },
	{ 0x938b46b9, "blk_rq_unmap_user" },
	{ 0x21075824, "__free_pages" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "44541F6FBD02E7A7469C92A");
