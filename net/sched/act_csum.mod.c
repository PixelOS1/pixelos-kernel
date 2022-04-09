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
	{ 0x4d1b1eb9, "tcf_unregister_action" },
	{ 0x24dce4b1, "tcf_register_action" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x459f3f88, "skb_push" },
	{ 0x2124474, "ip_send_check" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xd2071780, "__skb_checksum" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x85798a34, "tcf_idr_cleanup" },
	{ 0x4fbba5a8, "tcf_idr_release" },
	{ 0xd3b04af6, "tcf_idr_create_from_flags" },
	{ 0x24a3e5f9, "tcf_chain_put_by_act" },
	{ 0x9bcaa452, "tcf_action_set_ctrlact" },
	{ 0x5acae1e6, "tcf_action_check_ctrlact" },
	{ 0x73d3ccc2, "tcf_idr_check_alloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb15b4109, "crc32c" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7d11271e, "nla_put" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3a40b0d8, "tcf_idr_search" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x54a73e0f, "tcf_generic_walker" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x6adf3b0d, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libcrc32c");


MODULE_INFO(srcversion, "5E0C5BC3EECA0EFA2BB8804");
