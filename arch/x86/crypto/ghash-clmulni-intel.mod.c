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
	{ 0x94a29909, "cryptd_ahash_queued" },
	{ 0xa21d3570, "shash_ahash_digest" },
	{ 0xae6be20c, "crypto_stats_ahash_update" },
	{ 0xe94c52b2, "crypto_shash_final" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x32b80943, "crypto_ahash_final" },
	{ 0x23b70b9d, "crypto_ahash_digest" },
	{ 0xe0b3c168, "cryptd_shash_desc" },
	{ 0xa71eae5, "crypto_register_ahash" },
	{ 0x2aafc8ee, "crypto_unregister_shash" },
	{ 0xf2e6856c, "crypto_register_shash" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x36f094cf, "crypto_unregister_ahash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4cc670a, "cryptd_ahash_child" },
	{ 0x574c9f15, "crypto_ahash_setkey" },
	{ 0x54a6bc8d, "shash_ahash_update" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0x63cdfec8, "cryptd_alloc_ahash" },
	{ 0xbbab9ce, "cryptd_free_ahash" },
	{ 0xcea381dd, "x86_match_cpu" },
};

MODULE_INFO(depends, "cryptd");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

MODULE_INFO(srcversion, "093D268C05107044754339D");
