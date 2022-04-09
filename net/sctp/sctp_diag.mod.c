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
	{ 0xd93a9c2c, "release_sock" },
	{ 0x47fbfc1e, "sctp_transport_lookup_process" },
	{ 0xd76c28e3, "inet_diag_unregister" },
	{ 0xb8361a9d, "inet_diag_msg_attrs_fill" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0x7d11271e, "nla_put" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0x1b74d1, "nla_reserve_64bit" },
	{ 0xce8e1e18, "inet_diag_msg_common_fill" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x24a2473, "sock_diag_check_cookie" },
	{ 0x76ea5cb, "sock_diag_save_cookie" },
	{ 0xcfbb8700, "nla_reserve" },
	{ 0x1e9a6473, "inet_diag_register" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0xefbdbb7a, "sctp_transport_traverse_process" },
	{ 0x64a5df12, "sctp_get_sctp_info" },
	{ 0xb24df958, "sctp_for_each_endpoint" },
	{ 0xa6a6ff6b, "netlink_net_capable" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "A065C894CB3A07E6CD8CAC7");
