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
	{ 0xcc6a8e11, "unregister_qdisc" },
	{ 0xfb5b75a3, "register_qdisc" },
	{ 0x346e4b88, "qdisc_watchdog_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc6a30697, "qdisc_hash_add" },
	{ 0x9f55c687, "fifo_create_dflt" },
	{ 0x4557e6e8, "bfifo_qdisc_ops" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xa0d87339, "qdisc_get_rtab" },
	{ 0x55d0524b, "fifo_set_limit" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa0597099, "qdisc_offload_graft_helper" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa4b13ca9, "noop_qdisc" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x7d11271e, "nla_put" },
	{ 0xdb98e271, "qdisc_offload_dump_helper" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xbf3d7563, "qdisc_tree_reduce_backlog" },
	{ 0xd4a14d02, "__qdisc_calculate_pkt_len" },
	{ 0x7a875fb5, "__skb_gso_segment" },
	{ 0x330ba3c0, "netif_skb_features" },
	{ 0x5c75b908, "skb_gso_validate_mac_len" },
	{ 0x71c43c8c, "qdisc_watchdog_schedule_range_ns" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc4c6b4c2, "qdisc_reset" },
	{ 0x25bbc683, "qdisc_put" },
	{ 0xb2cdf8b9, "qdisc_watchdog_cancel" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "00BA545B22B6FE23847CF7E");
