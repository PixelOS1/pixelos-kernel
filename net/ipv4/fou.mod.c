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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xa4f749d, "inet6_offloads" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x4094f035, "udp_sock_create6" },
	{ 0x45ef50b6, "setup_udp_tunnel_sock" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2c309f61, "udp_tunnel_sock_release" },
	{ 0x66cfb01c, "ip_tunnel_encap_del_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x7d11271e, "nla_put" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xc114243d, "iptunnel_handle_offloads" },
	{ 0xb9225e2d, "inet_protos" },
	{ 0x9f979dc6, "inet_offloads" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1ffa749, "udp_set_csum" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0xd071739c, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2e3dc0b0, "inet_get_local_port_range" },
	{ 0xabcf8d6, "ip_tunnel_encap_add_ops" },
	{ 0x4dd2cd5e, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel,ip_tunnel");


MODULE_INFO(srcversion, "7FAB2B8025A2D96DDC84F1C");
