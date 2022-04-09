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
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xda59b65, "free_netdev" },
	{ 0x928aab17, "__put_net" },
	{ 0x666fb8d9, "rtnl_configure_link" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0x18c091fd, "rtnl_create_link" },
	{ 0xb2be6ed2, "rtnl_link_get_net" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x84c03e9a, "rtnl_nla_parse_ifla" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xacff9338, "sock_efree" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x56470118, "__warn_printk" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B7E6B4715BAB28844C8FC44");
