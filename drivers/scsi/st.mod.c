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
	{ 0xee111615, "param_ops_int" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x52d91e96, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x139d4a49, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x97ac8144, "__class_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xaf40110d, "scsi_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xe345078a, "scsi_ioctl_block_when_processing_errors" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5ac4b094, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd174fd2a, "unpin_user_pages_dirty_lock" },
	{ 0xb0e602eb, "memmove" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x2894b1d, "scsi_block_when_processing_errors" },
	{ 0x2fe0588a, "scsi_set_medium_removal" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc23477d, "current_task" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x98783514, "unpin_user_pages" },
	{ 0xfb578fc5, "memset" },
	{ 0xf562eb58, "pin_user_pages_fast" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x21075824, "__free_pages" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x776c87fd, "device_unregister" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0x445356d5, "scsi_autopm_put_device" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x954f099c, "idr_preload" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xec743ea0, "blk_queue_rq_timeout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x7723bc20, "scsi_autopm_get_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x37a0cba, "kfree" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xf0aeedef, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x6801a49, "blk_rq_map_user" },
	{ 0xfd741b50, "blk_execute_rq_nowait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x93ca52cf, "scsi_alloc_request" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0xa17ee47c, "blk_mq_free_request" },
	{ 0x938b46b9, "blk_rq_unmap_user" },
	{ 0xa6257a2f, "complete" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf5fa5da, "cdev_del" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4dce8ff3, "device_create" },
	{ 0x3b09f2ee, "cdev_add" },
	{ 0xa39f67e5, "cdev_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A7C7C3FFE8ACE5E4F5965AA");
