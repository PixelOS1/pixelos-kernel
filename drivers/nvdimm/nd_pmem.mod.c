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
	{ 0xee138648, "to_nd_pfn" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa7a45bb0, "devm_init_badblocks" },
	{ 0x1220c6a8, "badblocks_clear" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0xbad336bc, "nvdimm_namespace_common_probe" },
	{ 0x8bd58ffc, "is_nd_pfn" },
	{ 0xfd0f5141, "badblocks_check" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0x7242d92, "put_dax" },
	{ 0x8135613, "dax_write_cache" },
	{ 0xdd8e4db8, "nvdimm_check_and_set_ro" },
	{ 0xf901e4e5, "devm_namespace_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9acbdf2b, "devm_memremap_pages" },
	{ 0x33164781, "kernfs_put" },
	{ 0x6ced6d47, "is_nvdimm_sync" },
	{ 0x330f6116, "set_dax_synchronous" },
	{ 0x35e6aeef, "nd_dax_probe" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d7802a3, "nd_pfn_probe" },
	{ 0x78f6dcc0, "nvdimm_flush" },
	{ 0x83bbd076, "is_nd_btt" },
	{ 0xf82ad27a, "nvdimm_namespace_disk_name" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xc23477d, "current_task" },
	{ 0x7ec4e74c, "to_nd_btt" },
	{ 0xc8b685af, "pmem_sector_size" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xdaada13, "del_gendisk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc1f39529, "__nd_driver_register" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x3901be7a, "nvdimm_clear_poison" },
	{ 0x77ce2f1f, "dax_remove_host" },
	{ 0xe305f6a6, "kernfs_find_and_get_ns" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0x292d5851, "set_capacity" },
	{ 0x9e9c4f24, "set_dax_nomc" },
	{ 0xd1f93394, "bio_endio" },
	{ 0xe4d7a20c, "pmem_should_map_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x77d02b34, "nvdimm_has_flush" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xf9c02d0d, "bio_start_io_acct" },
	{ 0xa92ad40a, "dax_add_host" },
	{ 0xcb686aa0, "nvdimm_namespace_detach_btt" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0xb3db985b, "nvdimm_badblocks_populate" },
	{ 0x38e7cfc2, "blk_queue_physical_block_size" },
	{ 0x53411534, "nvdimm_namespace_attach_btt" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xadd1f413, "nvdimm_setup_pfn" },
	{ 0xfad9c827, "kill_dax" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf9af9602, "bio_end_io_acct_remapped" },
	{ 0xadeab9c7, "kernfs_notify" },
	{ 0xeb2577b3, "alloc_dax" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xbc4e24bb, "copy_mc_to_kernel" },
	{ 0x138e0957, "dax_write_cache_enabled" },
	{ 0x70647d8d, "blk_queue_write_cache" },
	{ 0x418724dc, "to_nd_region" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0x9d8bb00e, "set_dax_nocache" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x53ce93, "devm_namespace_enable" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0x92cfb348, "devm_memremap" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x41784f, "nvdimm_has_cache" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x469a3a27, "page_endio" },
	{ 0xe102faa1, "__blk_alloc_disk" },
};

MODULE_INFO(depends, "libnvdimm,nd_btt");


MODULE_INFO(srcversion, "2FBAA05441FA103959137BD");
