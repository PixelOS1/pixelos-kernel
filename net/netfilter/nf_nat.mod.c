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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdfc27ca8, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x3dc28efd, "nf_ct_kill_acct" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2124474, "ip_send_check" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x74f10948, "inet_proto_csum_replace4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd2071780, "__skb_checksum" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb15b4109, "crc32c" },
	{ 0x928aab17, "__put_net" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd33d2879, "inet_proto_csum_replace16" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0x14a7d237, "nf_ct_iterate_destroy" },
	{ 0xb6df1c64, "nf_ip_checksum" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x3e41ccff, "skb_checksum" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8993281, "inet_select_addr" },
	{ 0x56f6cc03, "nf_unregister_net_hooks" },
	{ 0x183515ef, "skb_ensure_writable" },
	{ 0xc0d02526, "nf_hook_entries_delete_raw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4dbd099f, "ip_route_me_harder" },
	{ 0xdea72b84, "nf_conntrack_alter_reply" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x478c66d5, "ipv6_dev_get_saddr" },
	{ 0xdfbcf889, "module_put" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x5d43f717, "nf_register_net_hooks" },
	{ 0x7f489ecf, "ipv6_skip_exthdr" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa785391e, "nf_ct_iterate_cleanup_net" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc32a3658, "nf_conntrack_tuple_taken" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xdcd5ed55, "ip6_route_me_harder" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf5614cf6, "nf_ct_extend_unregister" },
	{ 0x5ebc89e3, "nf_ct_helper_expectfn_register" },
	{ 0x445be109, "nf_ct_extend_register" },
	{ 0x67a84a87, "__xfrm_decode_session" },
	{ 0x362d04cb, "nf_ct_helper_expectfn_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0xd934e289, "nf_ct_seqadj_set" },
	{ 0xf5073623, "xfrm_lookup" },
	{ 0x89241c73, "nf_hook_entries_insert_raw" },
	{ 0xa67220cb, "nf_ip6_checksum" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xe14c20e4, "__do_once_done" },
	{ 0x1f9b499f, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack,libcrc32c");


MODULE_INFO(srcversion, "F79C6F057DAD8331CD34FF1");
