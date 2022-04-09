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
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xe9c8c2fb, "tcf_qevent_handle" },
	{ 0xd4a14d02, "__qdisc_calculate_pkt_len" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4d41e3b3, "tcf_qevent_destroy" },
	{ 0x1bb0f9e1, "tcf_qevent_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd165dc76, "tcf_qevent_validate_change" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x25bbc683, "qdisc_put" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc6a30697, "qdisc_hash_add" },
	{ 0x9f55c687, "fifo_create_dflt" },
	{ 0x4557e6e8, "bfifo_qdisc_ops" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa0597099, "qdisc_offload_graft_helper" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xbf3d7563, "qdisc_tree_reduce_backlog" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa4b13ca9, "noop_qdisc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc4c6b4c2, "qdisc_reset" },
	{ 0x51ca31e7, "tcf_qevent_dump" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0xdb98e271, "qdisc_offload_dump_helper" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc19a048f, "gnet_stats_copy_app" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "62F037B8C8317543D2A3A81");
