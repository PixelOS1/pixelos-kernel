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
	{ 0x61fc1b5, "sbc_attrib_attrs" },
	{ 0xa8acb2ea, "sbc_get_device_type" },
	{ 0x622f0de0, "target_backend_unregister" },
	{ 0x1abe28c, "transport_backend_register" },
	{ 0x61ed587e, "blkdev_issue_zeroout" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xbf6f49b7, "sbc_get_write_same_sectors" },
	{ 0x87b8798d, "sg_next" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x1308720, "bioset_integrity_create" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd4a5c79e, "target_configure_unmap_from_queue" },
	{ 0x68d2307b, "blkdev_get_by_path" },
	{ 0x311e6907, "bioset_init" },
	{ 0xbc02877d, "bioset_exit" },
	{ 0xff90868c, "blkdev_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0x2e9fb1b6, "bio_integrity_add_page" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0x65a70838, "bio_integrity_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3f91d0e, "blk_finish_plug" },
	{ 0xd68133b, "submit_bio" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0xc7dae385, "fs_bio_set" },
	{ 0x2a687471, "blk_start_plug" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x326109d0, "target_complete_cmd" },
	{ 0xee4271b9, "bio_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6f19b34, "blkdev_issue_discard" },
	{ 0x19c06657, "target_to_linux_sector" },
	{ 0xfbb44ee2, "sbc_parse_cdb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "A44024154D65C5B271B6F55");
