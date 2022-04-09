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
	{ 0x9671353b, "lib80211_unregister_crypto_ops" },
	{ 0xd09199e0, "lib80211_register_crypto_ops" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x24e48d13, "skb_put" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb0e602eb, "memmove" },
	{ 0x459f3f88, "skb_push" },
	{ 0xa3742208, "crypto_alloc_aead" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xd349d253, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "843C3708FAD475ADEDDCAA4");
