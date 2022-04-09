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
	{ 0xa24f23d8, "__request_module" },
	{ 0x7322ba5d, "l2tp_tunnel_get_nth" },
	{ 0x93371093, "l2tp_session_dec_refcount" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0x6bdd9453, "l2tp_tunnel_get_session" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0x756847b4, "l2tp_tunnel_register" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7d11271e, "nla_put" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0x25fe8aad, "l2tp_tunnel_create" },
	{ 0x60594d6e, "l2tp_tunnel_get" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xb6a8e1e, "l2tp_session_get_nth" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x1e4b842, "l2tp_session_get_by_ifname" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x42de68c3, "genlmsg_multicast_allns" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0x95977ba9, "l2tp_tunnel_delete" },
	{ 0x3488dc5d, "l2tp_tunnel_inc_refcount" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x124103e, "l2tp_tunnel_dec_refcount" },
	{ 0x34b2e3fa, "l2tp_session_set_header_len" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "3326FBAA007165FC90EA19F");
