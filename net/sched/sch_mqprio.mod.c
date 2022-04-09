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
	{ 0x54e4f732, "mq_change_real_num_tx" },
	{ 0xcc6a8e11, "unregister_qdisc" },
	{ 0xfb5b75a3, "register_qdisc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xe1909acd, "netdev_set_tc_queue" },
	{ 0x88aaab04, "qdisc_create_dflt" },
	{ 0x37e4d041, "default_qdisc_ops" },
	{ 0x99f76ccd, "pfifo_fast_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6e4ab646, "gnet_stats_copy_queue" },
	{ 0xafa08371, "gnet_stats_copy_basic" },
	{ 0x8af8e761, "dev_activate" },
	{ 0x2b38c7e9, "dev_deactivate" },
	{ 0xe5056aa3, "netdev_txq_to_tc" },
	{ 0xdf52d9e5, "netdev_set_num_tc" },
	{ 0xc6a30697, "qdisc_hash_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x25bbc683, "qdisc_put" },
	{ 0xacba29a8, "dev_graft_qdisc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xfa042227, "gnet_stats_add_basic" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BD38FF585C5688C2D699241");
