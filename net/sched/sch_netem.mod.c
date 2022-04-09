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
	{ 0x3ebb99e8, "skb_checksum_help" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x307eaf37, "skb_copy" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x7a875fb5, "__skb_gso_segment" },
	{ 0x330ba3c0, "netif_skb_features" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x7b6dca96, "skb_orphan_partial" },
	{ 0x71c43c8c, "qdisc_watchdog_schedule_range_ns" },
	{ 0xc4f1f918, "kfree_skb_list" },
	{ 0xd4a14d02, "__qdisc_calculate_pkt_len" },
	{ 0xbf3d7563, "qdisc_tree_reduce_backlog" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0x346e4b88, "qdisc_watchdog_init" },
	{ 0x92997ed8, "_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x69acdf38, "memcpy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc4c6b4c2, "qdisc_reset" },
	{ 0x948fe946, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x25bbc683, "qdisc_put" },
	{ 0xb2cdf8b9, "qdisc_watchdog_cancel" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B7F218C844A3205A616A087");
