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
	{ 0x96155d3f, "__blk_mq_end_request" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x50dabc2f, "mtd_table_mutex" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0x606db81c, "blk_mq_start_request" },
	{ 0x6f116715, "blk_mq_unfreeze_queue" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5cf2e038, "__put_mtd_device" },
	{ 0xc0eca076, "blk_mq_freeze_queue" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x70ac79d3, "__get_mtd_device" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x9a00dbc1, "blk_queue_max_discard_sectors" },
	{ 0xdaada13, "del_gendisk" },
	{ 0x75587220, "blk_mq_free_tag_set" },
	{ 0xb662d367, "register_mtd_user" },
	{ 0x3f1d2c74, "__mtd_next_device" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x292d5851, "set_capacity" },
	{ 0x9a9a7cac, "unregister_mtd_user" },
	{ 0xe3eb4747, "blk_update_request" },
	{ 0x4db180ad, "blk_mq_alloc_sq_tag_set" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0xdfbcf889, "module_put" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x545f9a57, "__blk_mq_alloc_disk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x70647d8d, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c5f8a84, "blk_mq_quiesce_queue" },
	{ 0xf84b47a1, "blk_mq_unquiesce_queue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0x38fca637, "set_disk_ro" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "C223FE26F9072C57387F1C2");
