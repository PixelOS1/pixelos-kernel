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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc9ede2c1, "crypto_alloc_shash" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf1a5528, "cxgb4_unregister_uld" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xfb578fc5, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3caad30b, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x98c6c2c7, "crypto_unregister_skcipher" },
	{ 0xeb3de78a, "crypto_shash_digest" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xa71eae5, "crypto_register_ahash" },
	{ 0x45ff6d2b, "cxgb4_crypto_send" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0xbed90e07, "crypto_register_skcipher" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x36f094cf, "crypto_unregister_ahash" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf95003e3, "cxgb4_register_uld" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x78a16f48, "aes_decrypt" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0xa3742208, "crypto_alloc_aead" },
	{ 0x7a1bcd59, "gf128mul_x8_ble" },
	{ 0x37a0cba, "kfree" },
	{ 0x561878b0, "crypto_unregister_aead" },
	{ 0x12c27b2d, "cxgb4_port_e2cchan" },
	{ 0x3ef513c9, "crypto_register_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xa6257a2f, "complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cxgb4,authenc,gf128mul");


MODULE_INFO(srcversion, "6B09777796645E2C15E295F");
