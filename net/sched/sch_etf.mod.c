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
	{ 0xc4f1f918, "kfree_skb_list" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x948fe946, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf79e697b, "qdisc_watchdog_init_clockid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x71c43c8c, "qdisc_watchdog_schedule_range_ns" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7125ab5, "sock_queue_err_skb" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x92997ed8, "_printk" },
	{ 0xb2cdf8b9, "qdisc_watchdog_cancel" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "741D6D29A86E928B15D94D0");
