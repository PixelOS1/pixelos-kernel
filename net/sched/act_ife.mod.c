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
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x73d3ccc2, "tcf_idr_check_alloc" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x54a73e0f, "tcf_generic_walker" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x24dce4b1, "tcf_register_action" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe7888e98, "ife_tlv_meta_encode" },
	{ 0x67db2029, "ife_tlv_meta_decode" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x7d11271e, "nla_put" },
	{ 0x459f3f88, "skb_push" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x4d1b1eb9, "tcf_unregister_action" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x9bcaa452, "tcf_action_set_ctrlact" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6210e871, "ife_tlv_meta_next" },
	{ 0x6adf3b0d, "tcf_idrinfo_destroy" },
	{ 0xdfbcf889, "module_put" },
	{ 0x5acae1e6, "tcf_action_check_ctrlact" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x250008bc, "ife_decode" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x389b979, "tcf_idr_create" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x24a3e5f9, "tcf_chain_put_by_act" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x85798a34, "tcf_idr_cleanup" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x3a40b0d8, "tcf_idr_search" },
	{ 0x4fbba5a8, "tcf_idr_release" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5103c3bf, "ife_encode" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf32ea3d5, "try_module_get" },
};

MODULE_INFO(depends, "ife");


MODULE_INFO(srcversion, "E6F380F63050B998A3B9EBA");
