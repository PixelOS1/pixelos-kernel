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
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xec8952cf, "can_rx_register" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x307eaf37, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x7c7b3f68, "rtnl_register_module" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7d11271e, "nla_put" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0x46221b70, "can_send" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x62785328, "netlink_capable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x32f8d392, "can_rx_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "E8E104C099B4047368B98D7");
