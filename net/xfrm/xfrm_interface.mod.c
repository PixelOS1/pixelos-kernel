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
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xf4a79a82, "xfrm6_rcv" },
	{ 0x55676246, "xfrm4_rcv" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0x582b6275, "xfrm_if_unregister_cb" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0xdd8dc6cd, "xfrm_if_register_cb" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x1e1d9e44, "xfrm6_tunnel_register" },
	{ 0x9ccadbf0, "xfrm6_protocol_register" },
	{ 0x47cf88fe, "xfrm4_tunnel_register" },
	{ 0xc099ac7d, "xfrm4_protocol_register" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0xf5337c6e, "ipv4_update_pmtu" },
	{ 0x96d7a6cf, "ipv4_redirect" },
	{ 0xc80696ae, "__xfrm_policy_check" },
	{ 0x57d52514, "ip6_redirect" },
	{ 0xb3577973, "ip6_update_pmtu" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xdcedb06f, "xfrm_state_lookup" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0xfb86ebc2, "__xfrm_state_destroy" },
	{ 0x2269cb00, "ip_tunnel_header_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0xa1b06480, "ip_output" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0x38c3800f, "icmpv6_ndo_send" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x281e2d3e, "icmp_ndo_send" },
	{ 0x7ec60e66, "ip6_route_output_flags" },
	{ 0xcf3b9695, "ip_route_output_key_hash" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x33a0c36d, "ip6_output" },
	{ 0x580539e1, "skb_gso_validate_network_len" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0xf85dece2, "xfrm_lookup_with_ifid" },
	{ 0x67a84a87, "__xfrm_decode_session" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x28674aa3, "dst_release" },
	{ 0x2bf28ceb, "__skb_ext_del" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x574bca36, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x363088e0, "xfrm6_rcv_spi" },
	{ 0xf160e0be, "xfrm6_tunnel_spi_lookup" },
	{ 0xb34fc200, "xfrm6_protocol_deregister" },
	{ 0x3348db58, "xfrm6_tunnel_deregister" },
	{ 0xa6117b7f, "xfrm_input" },
	{ 0x4f4dd9b8, "xfrm4_protocol_deregister" },
	{ 0xf9b42fcf, "xfrm4_tunnel_deregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x7d11271e, "nla_put" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xe0a6df90, "gro_cells_init" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tunnel6,tunnel4,xfrm6_tunnel");


MODULE_INFO(srcversion, "7A7BE500DFB0DC9CFF11F6E");
