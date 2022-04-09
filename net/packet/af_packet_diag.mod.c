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
	{ 0x914e1fac, "sock_diag_put_meminfo" },
	{ 0xb6e5ea4e, "from_kuid_munged" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcb6fa2cc, "sock_diag_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaa1f30a7, "sock_diag_put_filterinfo" },
	{ 0xc68fb0a5, "sock_i_ino" },
	{ 0xdf448d1c, "fanout_mutex" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xbdf950e3, "sock_diag_register" },
	{ 0x7d11271e, "nla_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1e93b39e, "nla_reserve_nohdr" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x76ea5cb, "sock_diag_save_cookie" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3a9f0715, "sock_i_uid" },
	{ 0xb7fa52bc, "__netlink_dump_start" },
	{ 0xa6a6ff6b, "netlink_net_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1A681A146239EACD5C1F46F");
