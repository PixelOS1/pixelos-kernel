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
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0x56a9ac41, "nvdimm_cmd_mask" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x347cd4ce, "nd_blk_region_provider_data" },
	{ 0xb294cb22, "nd_blk_region_to_dimm" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xee111615, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xf6a28554, "region_intersects" },
	{ 0xaf076aec, "nd_fletcher64" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0x4939ebcd, "numa_map_to_online_node" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0x8f2703b7, "wbinvd_on_all_cpus" },
	{ 0x1cd8438b, "pxm_to_node" },
	{ 0xfabec11d, "nd_blk_region_set_provider_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbdf02c6, "nvdimm_kobj" },
	{ 0xea7c4b1, "nvdimm_pmem_region_create" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xe091c977, "list_sort" },
	{ 0x33164781, "kernfs_put" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6790ebd3, "mce_is_memory_error" },
	{ 0xed74e816, "nd_cmd_in_size" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xca1a98fa, "nd_region_dev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9e1e3510, "nvdimm_bus_register" },
	{ 0x5012a70, "pv_ops" },
	{ 0x61fe3c4, "nvdimm_to_bus" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb8c93431, "nvdimm_in_overwrite" },
	{ 0x78f6dcc0, "nvdimm_flush" },
	{ 0x5f23e3fa, "insert_resource" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x81bc4ce7, "nd_region_acquire_lane" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xace288cb, "nvdimm_provider_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4ca32d3c, "nvdimm_volatile_region_create" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf077dd01, "devm_nvdimm_memremap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xa79563a0, "to_nvdimm_bus_dev" },
	{ 0x68fdfdd9, "nvdimm_name" },
	{ 0x96567227, "nd_blk_memremap_flags" },
	{ 0xe305f6a6, "kernfs_find_and_get_ns" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0xd5b8484d, "nvdimm_bus_unregister" },
	{ 0xb501b2df, "nd_cmd_dimm_desc" },
	{ 0xb7c0f443, "sort" },
	{ 0x9542d11a, "nd_cmd_out_size" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x89e4046, "devm_kfree" },
	{ 0xda347046, "nd_region_release_lane" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x67418056, "to_nd_desc" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0xc2c5802, "work_busy" },
	{ 0xb2db2d5, "remove_resource" },
	{ 0x77d02b34, "nvdimm_has_flush" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x638a9653, "memory_add_physaddr_to_nid" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfa174f0b, "acpi_find_child_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2da56b7f, "to_nvdimm_bus" },
	{ 0xadeab9c7, "kernfs_notify" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x1b074f, "mce_is_correctable" },
	{ 0x36173c1d, "phys_to_target_node" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1e36245b, "nvdimm_bus_check_dimm_count" },
	{ 0x418724dc, "to_nd_region" },
	{ 0xd967d5d5, "__nvdimm_create" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0xbeca71a9, "to_nvdimm" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa01a8d9b, "nd_cmd_bus_desc" },
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0xe1f15591, "nvdimm_bus_add_badrange" },
	{ 0xb7fe543, "nd_region_provider_data" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6d2e899d, "mce_usable_address" },
	{ 0x481e00fa, "to_nd_blk_region" },
	{ 0x2d8c7caf, "nvdimm_region_notify" },
	{ 0x7040ad91, "nvdimm_blk_region_create" },
};

MODULE_INFO(depends, "libnvdimm");

MODULE_ALIAS("acpi*:ACPI0012:*");

MODULE_INFO(srcversion, "1DE300FA4F5D692E1630F3C");
