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
	{ 0xe95e3586, "nf_ct_tmpl_alloc" },
	{ 0x42a474b4, "nf_ct_seqadj_init" },
	{ 0xf8803f63, "nf_ct_tmpl_free" },
	{ 0xdfa6106a, "ip_local_out" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd349d253, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x609c64d, "security_skb_classify_flow" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x74f10948, "inet_proto_csum_replace4" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x56f6cc03, "nf_unregister_net_hooks" },
	{ 0x183515ef, "skb_ensure_writable" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x4dbd099f, "ip_route_me_harder" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe7eee3d5, "__cookie_v4_init_sequence" },
	{ 0x71f6670b, "__cookie_v6_check" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x5d43f717, "nf_register_net_hooks" },
	{ 0x7f489ecf, "ipv6_skip_exthdr" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf51cfa5a, "proc_create_net_data" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xdc865758, "__nf_ip6_route" },
	{ 0xf5614cf6, "nf_ct_extend_unregister" },
	{ 0x6a5e2bde, "__cookie_v6_init_sequence" },
	{ 0x445be109, "nf_ct_extend_register" },
	{ 0xdaf5c16e, "__cookie_v4_check" },
	{ 0x49269236, "ip6_local_out" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0xf5073623, "xfrm_lookup" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x1f9b499f, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "A35FE3FED7FC8093DF1F30F");
