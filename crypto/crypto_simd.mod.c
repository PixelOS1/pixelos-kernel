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
	{ 0x2a1275e, "cryptd_free_skcipher" },
	{ 0x71bf0b19, "crypto_unregister_skciphers" },
	{ 0x2b6e73e6, "cryptd_free_aead" },
	{ 0x2d375c0c, "cryptd_skcipher_queued" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbc61baec, "crypto_register_skciphers" },
	{ 0x98c6c2c7, "crypto_unregister_skcipher" },
	{ 0x1ed33ae1, "cryptd_aead_queued" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0xbed90e07, "crypto_register_skcipher" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0xf2734067, "cryptd_alloc_skcipher" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1ee5cb36, "cryptd_skcipher_child" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xf388ba6a, "crypto_unregister_aeads" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0xa3742208, "crypto_alloc_aead" },
	{ 0xc69d0c89, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x561878b0, "crypto_unregister_aead" },
	{ 0x3ef513c9, "crypto_register_aead" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x47230751, "cryptd_aead_child" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcbcbc9e2, "cryptd_alloc_aead" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "97509D0C432E67D3007BE03");
