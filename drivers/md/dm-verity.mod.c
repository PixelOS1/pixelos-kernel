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
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0x754d539c, "strlen" },
	{ 0x224a96de, "dm_get_device" },
	{ 0xed3283a4, "dm_bufio_set_sector_offset" },
	{ 0x2558592f, "key_type_user" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xb9380e95, "dm_table_get_md" },
	{ 0xae6be20c, "crypto_stats_ahash_update" },
	{ 0x9154ba67, "dm_table_get_mode" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3e0d03b7, "request_key_tag" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0xfd581da1, "free_rs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5535c1d, "dm_disk" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd2779731, "blk_limits_io_min" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x32b80943, "crypto_ahash_final" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x39e9001c, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x98552d78, "crypto_req_done" },
	{ 0xd1f93394, "bio_endio" },
	{ 0x1f0ca91d, "kobject_uevent_env" },
	{ 0x9c90320f, "key_put" },
	{ 0xeb2f825c, "init_rs_gfp" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x8a2e4c43, "dm_bio_from_per_bio_data" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xf7370f56, "system_state" },
	{ 0x96848186, "scnprintf" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc76edc06, "dm_put_device" },
	{ 0xf72d0e8a, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0x1d29b9e1, "decode_rs8" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x26a93eb2, "verify_pkcs7_signature" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x95ecfe41, "crypto_alloc_ahash" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-bufio,dm-mod,reed_solomon");


MODULE_INFO(srcversion, "AC2E6562915CB1E8FFEE98E");
