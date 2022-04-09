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
	{ 0x55995367, "inet_frag_kill" },
	{ 0x3f48bb55, "pskb_trim_rcsum_slow" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x46a8b418, "fqdir_exit" },
	{ 0x9e8bd40d, "inet_frag_find" },
	{ 0xc7600825, "inet_frag_reasm_prepare" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x56f6cc03, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0xa0098330, "inet_frags_fini" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xeb00cd8, "fqdir_init" },
	{ 0x5d43f717, "nf_register_net_hooks" },
	{ 0xde0a9298, "inet_frag_reasm_finish" },
	{ 0x7f489ecf, "ipv6_skip_exthdr" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x885ab948, "inet_frag_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0xe8b75f40, "inet_frag_pull_head" },
	{ 0x24598e8f, "inet_frags_init" },
	{ 0xc423b00a, "inet_frag_queue_insert" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x53f4af71, "icmp6_send" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3227E26834FA25B93AD2A58");
