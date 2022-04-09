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
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5e9a01ce, "gen_new_estimator" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf630261, "gen_replace_estimator" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xd4a14d02, "__qdisc_calculate_pkt_len" },
	{ 0x5f919f9e, "tcf_classify" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x71c43c8c, "qdisc_watchdog_schedule_range_ns" },
	{ 0xc15f02c8, "qdisc_warn_nonwc" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbf3d7563, "qdisc_tree_reduce_backlog" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xece784c2, "rb_first" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x25bbc683, "qdisc_put" },
	{ 0x70ad0746, "tcf_block_put" },
	{ 0xc19a048f, "gnet_stats_copy_app" },
	{ 0x6e4ab646, "gnet_stats_copy_queue" },
	{ 0x1cd39b69, "gnet_stats_copy_rate_est" },
	{ 0xafa08371, "gnet_stats_copy_basic" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xa4b13ca9, "noop_qdisc" },
	{ 0x7533928b, "qdisc_class_hash_grow" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0xc6a30697, "qdisc_hash_add" },
	{ 0x88aaab04, "qdisc_create_dflt" },
	{ 0x24d0fd15, "pfifo_qdisc_ops" },
	{ 0x866a62b2, "gnet_stats_basic_sync_init" },
	{ 0xde8b54f2, "tcf_block_get" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0x346e4b88, "qdisc_watchdog_init" },
	{ 0xb2cdf8b9, "qdisc_watchdog_cancel" },
	{ 0xc4c6b4c2, "qdisc_reset" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "54DCF0E2C1FFB9B825A91A6");
