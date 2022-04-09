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
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xee111615, "param_ops_int" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x999e8297, "vfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x76ad775d, "nfnetlink_subsys_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0x9166fada, "strncpy" },
	{ 0x7d11271e, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd6e40c61, "nfnetlink_unicast" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdfbcf889, "module_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x7f489ecf, "ipv6_skip_exthdr" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe9c5af57, "nf_unregister_sockopt" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x809bcc9e, "netlink_ack" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x8f5dfbc7, "nfnetlink_subsys_register" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x5cb584df, "nf_register_sockopt" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xb7fa52bc, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "486534DFFDB1D492DEBAB0B");
