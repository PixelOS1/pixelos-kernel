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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7a875fb5, "__skb_gso_segment" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8af8e761, "dev_activate" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xc4c6b4c2, "qdisc_reset" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0xd4a14d02, "__qdisc_calculate_pkt_len" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xdf52d9e5, "netdev_set_num_tc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfb5b75a3, "register_qdisc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbf3d7563, "qdisc_tree_reduce_backlog" },
	{ 0x6d6fec1f, "ktime_mono_to_any" },
	{ 0x65aaa7f, "netdev_reset_tc" },
	{ 0xafa08371, "gnet_stats_copy_basic" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x24d0fd15, "pfifo_qdisc_ops" },
	{ 0xe1909acd, "netdev_set_tc_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc6a30697, "qdisc_hash_add" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x25bbc683, "qdisc_put" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x77d10cac, "__ethtool_get_link_ksettings" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7d11271e, "nla_put" },
	{ 0xacba29a8, "dev_graft_qdisc" },
	{ 0x88aaab04, "qdisc_create_dflt" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xcc6a8e11, "unregister_qdisc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x330ba3c0, "netif_skb_features" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2b38c7e9, "dev_deactivate" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x4e2ab99d, "__netif_schedule" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x6e4ab646, "gnet_stats_copy_queue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x938aecd6, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DFD21A99D06D0182374897F");
