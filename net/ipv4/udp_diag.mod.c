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
	{ 0xd76c28e3, "inet_diag_unregister" },
	{ 0x1e9a6473, "inet_diag_register" },
	{ 0x6b39dd44, "sock_diag_destroy" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x246587bd, "__udp6_lib_lookup" },
	{ 0x87f244b9, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x24a2473, "sock_diag_check_cookie" },
	{ 0x6f407f26, "__udp4_lib_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x95a67b07, "udp_table" },
	{ 0xd4d1983c, "udplite_table" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xe7d394f9, "inet_sk_diag_fill" },
	{ 0x76407300, "inet_diag_bc_sk" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa6a6ff6b, "netlink_net_capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "A6913F04E5CF94B0DEC8CAB");
