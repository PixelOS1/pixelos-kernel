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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfb5b75a3, "register_qdisc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x25bbc683, "qdisc_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb2cdf8b9, "qdisc_watchdog_cancel" },
	{ 0xa4b13ca9, "noop_qdisc" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xbf3d7563, "qdisc_tree_reduce_backlog" },
	{ 0xc4c6b4c2, "qdisc_reset" },
	{ 0xfc421e79, "gnet_stats_add_queue" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x346e4b88, "qdisc_watchdog_init" },
	{ 0xc6a30697, "qdisc_hash_add" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x88aaab04, "qdisc_create_dflt" },
	{ 0x24d0fd15, "pfifo_qdisc_ops" },
	{ 0x948fe946, "rtnl_kfree_skbs" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x71c43c8c, "qdisc_watchdog_schedule_range_ns" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x77d10cac, "__ethtool_get_link_ksettings" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "12AC2F73C2CE314D5F090F4");
