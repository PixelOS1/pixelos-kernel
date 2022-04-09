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
	{ 0x2fe0588a, "scsi_set_medium_removal" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd3dae0, "blk_req_zone_write_trylock" },
	{ 0xec743ea0, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xea44f77b, "t10_pi_type1_ip" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x3b1bbe48, "blkdev_compat_ptr_ioctl" },
	{ 0xe345078a, "scsi_ioctl_block_when_processing_errors" },
	{ 0x6f116715, "blk_mq_unfreeze_queue" },
	{ 0x132ff49c, "blk_queue_io_min" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xf12e8717, "scsi_mode_select" },
	{ 0x887c933f, "disk_set_independent_access_ranges" },
	{ 0x16ed83ae, "scsi_free_sgtables" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc0eca076, "blk_mq_freeze_queue" },
	{ 0x2518bd26, "blk_queue_max_write_zeroes_sectors" },
	{ 0xf1f9f906, "blk_queue_alignment_offset" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0xaf85c712, "scsi_print_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7723bc20, "scsi_autopm_get_device" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0x349ef22, "scsi_alloc_sgtables" },
	{ 0x3337d7eb, "disk_alloc_independent_access_ranges" },
	{ 0x75b7701d, "__alloc_disk_node" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xb4afa678, "blk_queue_set_zoned" },
	{ 0x815fda83, "sed_ioctl" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x339c0a66, "device_del" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0xf8e54ae, "blk_queue_zone_write_granularity" },
	{ 0x9a00dbc1, "blk_queue_max_discard_sectors" },
	{ 0xdaada13, "del_gendisk" },
	{ 0x52d91e96, "class_unregister" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x9f37056, "__scsi_execute" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x61579151, "scsi_report_opcode" },
	{ 0x5a921311, "strncmp" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x48a91171, "string_get_size" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x2268bebd, "bdev_check_media_change" },
	{ 0x5f19be99, "blk_revalidate_disk_zones" },
	{ 0x97ac8144, "__class_register" },
	{ 0x9084a41b, "t10_pi_type3_ip" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xd4f4aac1, "t10_pi_type3_crc" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0xc6cbbc89, "capable" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0x8d729c39, "blk_queue_max_zone_append_sectors" },
	{ 0x761527a1, "put_device" },
	{ 0x38e7cfc2, "blk_queue_physical_block_size" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xaf40110d, "scsi_ioctl" },
	{ 0xa9bc5712, "put_disk" },
	{ 0xe7718080, "__blk_req_zone_write_unlock" },
	{ 0x1953c958, "mempool_create" },
	{ 0x139d4a49, "scsi_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x2894b1d, "scsi_block_when_processing_errors" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3ad8c1a2, "scsi_test_unit_ready" },
	{ 0x354d23d1, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x36912036, "blk_queue_required_elevator_features" },
	{ 0xb3d2c76d, "scsi_hostbyte_string" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9b4c889, "scsi_command_normalize_sense" },
	{ 0x16e6d67f, "get_device" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0xc422f308, "scsicam_bios_param" },
	{ 0x70647d8d, "blk_queue_write_cache" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x993c0bca, "t10_pi_type1_crc" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x1259bddc, "scsi_get_vpd_page" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xf7370f56, "system_state" },
	{ 0xfe983cdc, "blk_pm_runtime_init" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x5ac4b094, "scsi_device_get" },
	{ 0x445356d5, "scsi_autopm_put_device" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0x94b38714, "scsi_mode_sense" },
	{ 0x77ef331e, "blk_queue_max_write_same_sectors" },
	{ 0xdddf66ea, "blk_integrity_register" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xd901397a, "scsi_print_sense_hdr" },
	{ 0x38fca637, "set_disk_ro" },
	{ 0x72be1baf, "set_capacity_and_notify" },
};

MODULE_INFO(depends, "t10-pi");


MODULE_INFO(srcversion, "7911C43A92F21934F0540F7");
