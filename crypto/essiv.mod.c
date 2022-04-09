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
	{ 0x496f031a, "crypto_unregister_template" },
	{ 0xf2feecf8, "crypto_register_template" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd7ceed40, "skcipher_register_instance" },
	{ 0x7838db25, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa916b694, "strnlen" },
	{ 0x6655c720, "crypto_shash_alg_has_setkey" },
	{ 0x5a921311, "strncmp" },
	{ 0xee06662, "crypto_grab_aead" },
	{ 0x92997ed8, "_printk" },
	{ 0x77879192, "crypto_mod_put" },
	{ 0x40ecd902, "crypto_alg_mod_lookup" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0xcf93694a, "crypto_grab_skcipher" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0x1ae4301b, "crypto_shash_tfm_digest" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8e1f34a0, "crypto_cipher_setkey" },
	{ 0xdd75dfeb, "crypto_shash_finup" },
	{ 0x3caad30b, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0xcd0d4205, "crypto_drop_spawn" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
	{ 0xe702869e, "crypto_cipher_encrypt_one" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0xc9ede2c1, "crypto_alloc_shash" },
	{ 0x43b599aa, "crypto_alloc_base" },
	{ 0xea5d9e0e, "crypto_spawn_tfm2" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "6C391FBA9370E4FB4E9E09E");
