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
	{ 0x2891d7a7, "wireless_send_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ede2c1, "crypto_alloc_shash" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0x24e48d13, "skb_put" },
	{ 0x459f3f88, "skb_push" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe94c52b2, "crypto_shash_final" },
	{ 0x3caad30b, "crypto_shash_update" },
	{ 0xfb578fc5, "memset" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa4881569, "crypto_shash_setkey" },
	{ 0xd349d253, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lib80211,libarc4");


MODULE_INFO(srcversion, "342825861167009A7A02E3B");
