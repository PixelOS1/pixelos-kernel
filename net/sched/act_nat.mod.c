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
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x74f10948, "inet_proto_csum_replace4" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0x3a40b0d8, "tcf_idr_search" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x85798a34, "tcf_idr_cleanup" },
	{ 0x4fbba5a8, "tcf_idr_release" },
	{ 0x389b979, "tcf_idr_create" },
	{ 0x24a3e5f9, "tcf_chain_put_by_act" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x9bcaa452, "tcf_action_set_ctrlact" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5acae1e6, "tcf_action_check_ctrlact" },
	{ 0x73d3ccc2, "tcf_idr_check_alloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x54a73e0f, "tcf_generic_walker" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x6adf3b0d, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B376DFDA5B242C1DEA5F8D");
