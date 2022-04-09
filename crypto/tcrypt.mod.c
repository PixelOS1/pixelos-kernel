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
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xee111615, "param_ops_int" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0x3bdb5d28, "alg_test" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0xa3742208, "crypto_alloc_aead" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x32b80943, "crypto_ahash_final" },
	{ 0x574c9f15, "crypto_ahash_setkey" },
	{ 0x37a0cba, "kfree" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x95ecfe41, "crypto_alloc_ahash" },
	{ 0xfb578fc5, "memset" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x98552d78, "crypto_req_done" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x25345a40, "crypto_alloc_skcipher" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
	{ 0x23b70b9d, "crypto_ahash_digest" },
	{ 0x92997ed8, "_printk" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xae6be20c, "crypto_stats_ahash_update" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4c9d28b0, "phys_base" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "99C2B15BA8D744D76418293");
