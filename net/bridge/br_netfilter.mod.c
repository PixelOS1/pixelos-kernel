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
	{ 0x3f48bb55, "pskb_trim_rcsum_slow" },
	{ 0xf85d6426, "skb_ext_add" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xb5da3440, "ip_do_fragment" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x28674aa3, "dst_release" },
	{ 0x94bfce58, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa24600a, "nf_hook_slow" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x86c017c5, "br_dev_queue_push_xmit" },
	{ 0x56f6cc03, "nf_unregister_net_hooks" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xd6f9c7ca, "br_forward_finish" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xe84cb876, "ip_route_input_noref" },
	{ 0xfd250955, "nf_ipv6_ops" },
	{ 0x5d43f717, "nf_register_net_hooks" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xff2d96f4, "skb_pull_rcsum" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x777b8021, "nf_br_ops" },
	{ 0x2bf28ceb, "__skb_ext_del" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x46a567b9, "br_handle_frame_finish" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
};

MODULE_INFO(depends, "bridge");


MODULE_INFO(srcversion, "3754F7E6FED730758F89A7A");
