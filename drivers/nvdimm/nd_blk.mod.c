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
	{ 0xa51e0b81, "nd_btt_probe" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0xbad336bc, "nvdimm_namespace_common_probe" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0xdd8e4db8, "nvdimm_check_and_set_ro" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf5ac534c, "nd_integrity_init" },
	{ 0x58215b22, "nvdimm_namespace_capacity" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x83bbd076, "is_nd_btt" },
	{ 0xf82ad27a, "nvdimm_namespace_disk_name" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0x7ec4e74c, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xdaada13, "del_gendisk" },
	{ 0xc1f39529, "__nd_driver_register" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x292d5851, "set_capacity" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xf9c02d0d, "bio_start_io_acct" },
	{ 0xcb686aa0, "nvdimm_namespace_detach_btt" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0x53411534, "nvdimm_namespace_attach_btt" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf9af9602, "bio_end_io_acct_remapped" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0xe102faa1, "__blk_alloc_disk" },
	{ 0x35a8563f, "bio_integrity_prep" },
};

MODULE_INFO(depends, "libnvdimm,nd_btt");


MODULE_INFO(srcversion, "7B84EB0EEF3E085D32C6FFA");
