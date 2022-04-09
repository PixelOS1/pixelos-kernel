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
	{ 0x25345a40, "crypto_alloc_skcipher" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc60a9fcd, "ahash_register_instance" },
	{ 0xef5008b7, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xa21d3570, "shash_ahash_digest" },
	{ 0xcf93694a, "crypto_grab_skcipher" },
	{ 0x496f031a, "crypto_unregister_template" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xe94c52b2, "crypto_shash_final" },
	{ 0xa86b2983, "shash_ahash_finup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd7ceed40, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x6655c720, "crypto_shash_alg_has_setkey" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xabae7b2f, "crypto_grab_shash" },
	{ 0xfb578fc5, "memset" },
	{ 0xee06662, "crypto_grab_aead" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf2feecf8, "crypto_register_template" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa4881569, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0xcd0d4205, "crypto_drop_spawn" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x7312579d, "crypto_enqueue_request" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0xa3742208, "crypto_alloc_aead" },
	{ 0xea5d9e0e, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0x54a6bc8d, "shash_ahash_update" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x7838db25, "aead_register_instance" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x95ecfe41, "crypto_alloc_ahash" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AAF8AE1CB27F57B097A0B7D");
