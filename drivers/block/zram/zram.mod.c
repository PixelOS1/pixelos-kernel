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
	{ 0x3d8baf3b, "zs_huge_class_size" },
	{ 0xc7dae385, "fs_bio_set" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc341ae6d, "zs_map_object" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0x788f719b, "submit_bio_wait" },
	{ 0x53b954a2, "up_read" },
	{ 0x2aeb7b56, "blk_queue_io_opt" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x911b1f9e, "bio_alloc_bioset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x27864d57, "memparse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xc69b7ee5, "zs_destroy_pool" },
	{ 0x9c5937c, "blk_cleanup_disk" },
	{ 0xb29533ee, "zs_malloc" },
	{ 0x132ff49c, "blk_queue_io_min" },
	{ 0x62eb8a7e, "filp_close" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x27000774, "file_path" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x2518bd26, "blk_queue_max_write_zeroes_sectors" },
	{ 0x5da67adc, "zs_compact" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x958df3ac, "zs_free" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6665d5b9, "bio_init" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x86632d5a, "default_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc23477d, "current_task" },
	{ 0x9a00dbc1, "blk_queue_max_discard_sectors" },
	{ 0xdaada13, "del_gendisk" },
	{ 0x46fe612, "disk_end_io_acct" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x52d91e96, "class_unregister" },
	{ 0xbfa52de8, "bio_add_page" },
	{ 0xd268e216, "__cpuhp_state_add_instance" },
	{ 0xe7c145d, "bio_chain" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x5a921311, "strncmp" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xbcf1f0e6, "zs_create_pool" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x292d5851, "set_capacity" },
	{ 0x29014389, "blkdev_get_by_dev" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x22749e72, "simple_open" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0xce807a25, "up_write" },
	{ 0x97ac8144, "__class_register" },
	{ 0x57bc19d2, "down_write" },
	{ 0xd1f93394, "bio_endio" },
	{ 0xee4271b9, "bio_put" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf9c02d0d, "bio_start_io_acct" },
	{ 0x3b689112, "blk_queue_flag_clear" },
	{ 0xd68133b, "submit_bio" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x21075824, "__free_pages" },
	{ 0xff90868c, "blkdev_put" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0xa916b694, "strnlen" },
	{ 0x68bc1247, "sync_blockdev" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x38e7cfc2, "blk_queue_physical_block_size" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x4d14a211, "__cpuhp_state_remove_instance" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbe56bc2, "zs_get_total_pages" },
	{ 0xf9af9602, "bio_end_io_acct_remapped" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc4aca577, "crypto_comp_compress" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cceaf92, "zs_pool_stats" },
	{ 0x96848186, "scnprintf" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2dc6b6ad, "device_add_disk" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x43b599aa, "crypto_alloc_base" },
	{ 0x728fda38, "blk_queue_logical_block_size" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0x924c46f8, "zs_unmap_object" },
	{ 0xdda251ef, "disk_start_io_acct" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x469a3a27, "page_endio" },
	{ 0x778a0ace, "crypto_comp_decompress" },
	{ 0xe102faa1, "__blk_alloc_disk" },
	{ 0x388d81e8, "filp_open" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0x72be1baf, "set_capacity_and_notify" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9262B8A46F572694C6F31C5");
