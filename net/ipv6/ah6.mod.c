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
	{ 0xa6117b7f, "xfrm_input" },
	{ 0xf4a79a82, "xfrm6_rcv" },
	{ 0xb34fc200, "xfrm6_protocol_deregister" },
	{ 0xc4af98e0, "xfrm_unregister_type" },
	{ 0x9ccadbf0, "xfrm6_protocol_register" },
	{ 0xf9d889de, "xfrm_register_type" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x23b70b9d, "crypto_ahash_digest" },
	{ 0xa079e8aa, "skb_to_sgvec_nomark" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xfb578fc5, "memset" },
	{ 0x459f3f88, "skb_push" },
	{ 0xff607c6c, "skb_cow_data" },
	{ 0xfb86ebc2, "__xfrm_state_destroy" },
	{ 0x57d52514, "ip6_redirect" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb3577973, "ip6_update_pmtu" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xdcedb06f, "xfrm_state_lookup" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x574c9f15, "crypto_ahash_setkey" },
	{ 0x95ecfe41, "crypto_alloc_ahash" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x51d736c7, "xfrm_input_resume" },
	{ 0xcf3b9847, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92997ed8, "_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb0e602eb, "memmove" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "65D976691D9ABC03C2FF84D");
