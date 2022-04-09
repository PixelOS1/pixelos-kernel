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
	{ 0xf888ca21, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0xea26b112, "write_bytes_to_xdr_buf" },
	{ 0xae6be20c, "crypto_stats_ahash_update" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0x708a0c73, "gss_mech_register" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x32b80943, "crypto_ahash_final" },
	{ 0x63dcb58f, "crypto_alloc_sync_skcipher" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0xddf4b4f5, "xdr_buf_subsegment" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0xfb578fc5, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3f63dd10, "gss_mech_unregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x574c9f15, "crypto_ahash_setkey" },
	{ 0x2dac8154, "read_bytes_from_xdr_buf" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x49f5876e, "xdr_process_buf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xd28fdacf, "xdr_buf_trim" },
	{ 0x95ecfe41, "crypto_alloc_ahash" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "auth_rpcgss,sunrpc");


MODULE_INFO(srcversion, "35655CE2551B09A2E12EDBE");
