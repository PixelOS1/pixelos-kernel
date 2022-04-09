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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x91ea8726, "asn1_encode_boolean" },
	{ 0xe6c152c4, "__static_call_update" },
	{ 0xc9ede2c1, "crypto_alloc_shash" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x754d539c, "strlen" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x2b8c35db, "tpm_put_ops" },
	{ 0x56470118, "__warn_printk" },
	{ 0x267e0c45, "key_payload_reserve" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe94c52b2, "crypto_shash_final" },
	{ 0x9bd08bd0, "tpm_is_tpm2" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc7e64fc2, "asn1_encode_integer" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc3c4c6cc, "hash_algo_name" },
	{ 0x368b1061, "tpm_send" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3caad30b, "crypto_shash_update" },
	{ 0xcd24e146, "hash_digest_size" },
	{ 0xd6e4c31a, "tpm_pcr_extend" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xeb3de78a, "crypto_shash_digest" },
	{ 0x5a921311, "strncmp" },
	{ 0xc5a40b43, "user_describe" },
	{ 0xa4881569, "crypto_shash_setkey" },
	{ 0x3184fa0f, "tpm_default_chip" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf9fbd5d5, "tpm_get_random" },
	{ 0x761527a1, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7ad02a41, "asn1_encode_tag" },
	{ 0x184f73af, "tpm_try_get_ops" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xca4dfe81, "register_key_type" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf033d8b3, "tpm2_flush_context" },
	{ 0xfc201b66, "sprint_oid" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x46f1dcbd, "unregister_key_type" },
	{ 0xeaf0a57c, "look_up_OID" },
	{ 0x8180cede, "asn1_encode_sequence" },
	{ 0xf05a52fe, "asn1_encode_oid" },
	{ 0xa4c00324, "asn1_encode_octet_string" },
	{ 0xdd221f17, "tpm_transmit_cmd" },
};

MODULE_INFO(depends, "asn1_encoder");


MODULE_INFO(srcversion, "BF2C654FB9B2B91611BA506");
