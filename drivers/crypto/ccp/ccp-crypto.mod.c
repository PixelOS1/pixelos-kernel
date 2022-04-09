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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x89ae7aa0, "rsa_parse_pub_key" },
	{ 0xc9ede2c1, "crypto_alloc_shash" },
	{ 0xa0356832, "crypto_register_akcipher" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x80f446bc, "ccp_enqueue_cmd" },
	{ 0x4773b60, "ccp_present" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0xdd64e639, "strscpy" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x3a1a3979, "ccp_version" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x98c6c2c7, "crypto_unregister_skcipher" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xa71eae5, "crypto_register_ahash" },
	{ 0xd75b20aa, "rsa_parse_priv_key" },
	{ 0xb2c739d9, "crypto_unregister_akcipher" },
	{ 0xbed90e07, "crypto_register_skcipher" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0xa916b694, "strnlen" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x36f094cf, "crypto_unregister_ahash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x561878b0, "crypto_unregister_aead" },
	{ 0x3ef513c9, "crypto_register_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ae4301b, "crypto_shash_tfm_digest" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ccp");


MODULE_INFO(srcversion, "A1FCAE41C2C45EB2B691D8B");
