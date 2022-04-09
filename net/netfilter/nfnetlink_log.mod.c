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
	{ 0x4bc51a5b, "nf_log_unregister" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x76ad775d, "nfnetlink_subsys_unregister" },
	{ 0x99ab196f, "nf_log_register" },
	{ 0x8f5dfbc7, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xbf7b33e4, "from_kgid_munged" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x24e48d13, "skb_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7d11271e, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x79490827, "nf_log_bind_pf" },
	{ 0xe33cc9d4, "nfnl_ct_hook" },
	{ 0x8ce98efe, "nf_log_unbind_pf" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x928aab17, "__put_net" },
	{ 0xdfbcf889, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xd349d253, "seq_printf" },
	{ 0x1402aa5c, "proc_set_user" },
	{ 0xd99e3f8d, "make_kgid" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xf51cfa5a, "proc_create_net_data" },
	{ 0x803c026f, "nf_log_unset" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xd6e40c61, "nfnetlink_unicast" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "15367115113DF27D84C5BE9");
