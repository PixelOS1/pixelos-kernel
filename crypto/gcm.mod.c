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
	{ 0x1748bda5, "crypto_unregister_templates" },
	{ 0x427064f7, "crypto_register_templates" },
	{ 0x87b8798d, "sg_next" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xae6be20c, "crypto_stats_ahash_update" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x574c9f15, "crypto_ahash_setkey" },
	{ 0x98552d78, "crypto_req_done" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0x5a921311, "strncmp" },
	{ 0xcf93694a, "crypto_grab_skcipher" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d58b2, "crypto_grab_ahash" },
	{ 0x7838db25, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee06662, "crypto_grab_aead" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x9601368a, "crypto_ahash_finup" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd0d4205, "crypto_drop_spawn" },
	{ 0xb066fc1f, "crypto_get_default_null_skcipher" },
	{ 0xea5d9e0e, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0F853D735E9297CFE93B406");
