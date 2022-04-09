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
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x87f244b9, "sk_free" },
	{ 0x6b39dd44, "sock_diag_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8997c027, "__raw_v4_lookup" },
	{ 0xeb5103a2, "__raw_v6_lookup" },
	{ 0xb510c250, "raw_v4_hashinfo" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xe7d394f9, "inet_sk_diag_fill" },
	{ 0x76407300, "inet_diag_bc_sk" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xed7c7b91, "raw_v6_hashinfo" },
	{ 0xa6a6ff6b, "netlink_net_capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "B89FC66243B6A49A14306DB");
