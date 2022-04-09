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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd7ea7094, "nf_unregister_queue_handler" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xf8d8b41, "nf_register_queue_handler" },
	{ 0x76ad775d, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8f5dfbc7, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x4ea591a4, "___pskb_trim" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0x183515ef, "skb_ensure_writable" },
	{ 0x69acdf38, "memcpy" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x54b3dc5a, "nf_queue_entry_free" },
	{ 0xce91be9f, "nf_queue_entry_get_refs" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7a875fb5, "__skb_gso_segment" },
	{ 0x92997ed8, "_printk" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0xd6e40c61, "nfnetlink_unicast" },
	{ 0x3ebb99e8, "skb_checksum_help" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xcb0ee2f5, "skb_zerocopy_headlen" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6dde679f, "skb_tx_error" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x62b114ed, "skb_zerocopy" },
	{ 0x24e48d13, "skb_put" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xbf7b33e4, "from_kgid_munged" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0x22a6a37c, "init_user_ns" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x7d11271e, "nla_put" },
	{ 0x4d966ef, "__nla_reserve" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4f920382, "nf_ct_hook" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe33cc9d4, "nfnl_ct_hook" },
	{ 0xdfbcf889, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc799fa8, "nf_reinject" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd349d253, "seq_printf" },
	{ 0xf51cfa5a, "proc_create_net_data" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "D0CCCBEF4B5B58BB67B202C");
