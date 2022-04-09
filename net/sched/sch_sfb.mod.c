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
	{ 0xde8b54f2, "tcf_block_get" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6a30697, "qdisc_hash_add" },
	{ 0x9f55c687, "fifo_create_dflt" },
	{ 0x24d0fd15, "pfifo_qdisc_ops" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xbf3d7563, "qdisc_tree_reduce_backlog" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa4b13ca9, "noop_qdisc" },
	{ 0xc4c6b4c2, "qdisc_reset" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf2017cb5, "skb_get_hash_perturb" },
	{ 0xd4a14d02, "__qdisc_calculate_pkt_len" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x70002fe8, "siphash_1u32" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x5f919f9e, "tcf_classify" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25bbc683, "qdisc_put" },
	{ 0x70ad0746, "tcf_block_put" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc19a048f, "gnet_stats_copy_app" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DC0065A7D62E4C462CF5495");
