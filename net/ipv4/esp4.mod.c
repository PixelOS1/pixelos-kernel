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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x37037400, "skb_to_sgvec" },
	{ 0xdd57c18c, "xfrm_dev_resume" },
	{ 0xc4af98e0, "xfrm_unregister_type" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf5337c6e, "ipv4_update_pmtu" },
	{ 0x4f4dd9b8, "xfrm4_protocol_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0xb76c882b, "pskb_put" },
	{ 0x2717c348, "skb_page_frag_refill" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xff607c6c, "skb_cow_data" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x51d736c7, "xfrm_input_resume" },
	{ 0xfb578fc5, "memset" },
	{ 0x3e41ccff, "skb_checksum" },
	{ 0xa6117b7f, "xfrm_input" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf9d889de, "xfrm_register_type" },
	{ 0x98d5c298, "xfrm_state_mtu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x96d7a6cf, "ipv4_redirect" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xcf3b9847, "xfrm_output_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xff2d96f4, "skb_pull_rcsum" },
	{ 0xfb86ebc2, "__xfrm_state_destroy" },
	{ 0xda29a41, "km_new_mapping" },
	{ 0x55676246, "xfrm4_rcv" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0xc099ac7d, "xfrm4_protocol_register" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0xa3742208, "crypto_alloc_aead" },
	{ 0xdcedb06f, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4ea591a4, "___pskb_trim" },
	{ 0x2bf28ceb, "__skb_ext_del" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D7B7B4368E85ADBEC5682FE");
