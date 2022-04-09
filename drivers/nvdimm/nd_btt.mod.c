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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0x136d33b3, "nd_btt_version" },
	{ 0xfd0f5141, "badblocks_check" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xdd8e4db8, "nvdimm_check_and_set_ro" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf5ac534c, "nd_integrity_init" },
	{ 0x58215b22, "nvdimm_namespace_capacity" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x39e60e9d, "debugfs_create_x32" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf82ad27a, "nvdimm_namespace_disk_name" },
	{ 0x6604ef93, "debugfs_create_u32" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x81bc4ce7, "nd_region_acquire_lane" },
	{ 0xc23477d, "current_task" },
	{ 0x7ec4e74c, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdaada13, "del_gendisk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x292d5851, "set_capacity" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xda347046, "nd_region_release_lane" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf9c02d0d, "bio_start_io_acct" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x390c2059, "nd_dev_to_uuid" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0x6019792c, "debugfs_create_x64" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf9af9602, "bio_end_io_acct_remapped" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x36142df3, "nd_btt_arena_is_valid" },
	{ 0x499f0ecf, "nd_sb_checksum" },
	{ 0x37a0cba, "kfree" },
	{ 0x418724dc, "to_nd_region" },
	{ 0x7e51de59, "debugfs_create_u16" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x53ce93, "devm_namespace_enable" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0x469a3a27, "page_endio" },
	{ 0xe102faa1, "__blk_alloc_disk" },
	{ 0x35a8563f, "bio_integrity_prep" },
};

MODULE_INFO(depends, "libnvdimm");


MODULE_INFO(srcversion, "E7DFE17E7F685847DE7127B");
