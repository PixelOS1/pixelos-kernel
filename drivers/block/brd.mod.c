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
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0xee111615, "param_ops_int" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x92997ed8, "_printk" },
	{ 0xd1f93394, "bio_endio" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x469a3a27, "page_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc23477d, "current_task" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0x38e7cfc2, "blk_queue_physical_block_size" },
	{ 0x292d5851, "set_capacity" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xe102faa1, "__blk_alloc_disk" },
	{ 0x3ffb9822, "debugfs_create_u64" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0xdaada13, "del_gendisk" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x21075824, "__free_pages" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7A1A065965F38A5B82A375B");
