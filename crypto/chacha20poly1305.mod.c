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
	{ 0x3776072a, "crypto_skcipher_encrypt" },
	{ 0xae6be20c, "crypto_stats_ahash_update" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0x9601368a, "crypto_ahash_finup" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7838db25, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d58b2, "crypto_grab_ahash" },
	{ 0xcf93694a, "crypto_grab_skcipher" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd0d4205, "crypto_drop_spawn" },
	{ 0xea5d9e0e, "crypto_spawn_tfm2" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F5B18879E5B292D231CD76C");
