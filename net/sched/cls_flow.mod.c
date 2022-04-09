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
	{ 0x891e9d93, "unregister_tcf_proto_ops" },
	{ 0x9ecb755d, "register_tcf_proto_ops" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0x18e7429a, "__skb_flow_dissect" },
	{ 0xc9831ad7, "flow_keys_dissector" },
	{ 0x6aa99869, "from_kuid" },
	{ 0xe1d7fbb0, "__tcf_em_tree_match" },
	{ 0x5ee16721, "flow_get_u32_src" },
	{ 0xa934bc4b, "flow_get_u32_dst" },
	{ 0x24a578b0, "from_kgid" },
	{ 0xe0089ab0, "tcf_action_exec" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xf927bfee, "tcf_block_netif_keep_dst" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7f62b6c0, "tcf_exts_validate" },
	{ 0x3313994b, "tcf_em_tree_validate" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x928aab17, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e2f2308, "tcf_em_tree_destroy" },
	{ 0x851c40a4, "tcf_exts_destroy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7412dc77, "tcf_exts_dump_stats" },
	{ 0x91dd5609, "tcf_em_tree_dump" },
	{ 0x3704c8d5, "tcf_exts_dump" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F36093EED7715C9811A805F");
