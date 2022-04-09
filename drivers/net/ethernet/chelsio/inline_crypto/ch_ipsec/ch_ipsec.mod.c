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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x5da75671, "cxgb4_ring_tx_db" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x6477de0, "cxgb4_reclaim_completed_tx" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf1a5528, "cxgb4_unregister_uld" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x19f7c571, "cxgb4_write_sgl" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xaacb161d, "cxgb4_inline_tx_skb" },
	{ 0xa2868dea, "cxgb4_map_skb" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdfbcf889, "module_put" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf95003e3, "cxgb4_register_uld" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf32ea3d5, "try_module_get" },
};

MODULE_INFO(depends, "cxgb4");


MODULE_INFO(srcversion, "6768BC70665415B70840CEB");
