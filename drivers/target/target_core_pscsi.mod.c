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
	{ 0x32eec0b, "passthrough_attrib_attrs" },
	{ 0x622f0de0, "target_backend_unregister" },
	{ 0x1abe28c, "transport_backend_register" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x68d2307b, "blkdev_get_by_path" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5ac4b094, "scsi_device_get" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x3a20a9d7, "transport_set_vpd_ident_type" },
	{ 0x142072c0, "transport_set_vpd_assoc" },
	{ 0xf3c2dfe0, "transport_set_vpd_proto_id" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x871ffd6, "transport_set_vpd_ident" },
	{ 0x9f37056, "__scsi_execute" },
	{ 0xfd741b50, "blk_execute_rq_nowait" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6e81e8b1, "bio_kmalloc" },
	{ 0xedf02064, "blk_rq_append_bio" },
	{ 0xff3377f8, "bio_add_pc_page" },
	{ 0x93ca52cf, "scsi_alloc_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa17916bd, "passthrough_parse_cdb" },
	{ 0x12a4f839, "scsi_host_lookup" },
	{ 0xff90868c, "blkdev_put" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee4271b9, "bio_put" },
	{ 0x92997ed8, "_printk" },
	{ 0x17cc883a, "transport_kunmap_data_sg" },
	{ 0xa8ff5500, "transport_kmap_data_sg" },
	{ 0xcd2f325b, "target_lun_is_rdonly" },
	{ 0x4b18f96f, "target_complete_cmd_with_length" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4b5678a5, "transport_copy_sense_to_cmd" },
	{ 0xa17ee47c, "blk_mq_free_request" },
	{ 0x326109d0, "target_complete_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "CEA4FDD58D6F29F3EBF1796");
