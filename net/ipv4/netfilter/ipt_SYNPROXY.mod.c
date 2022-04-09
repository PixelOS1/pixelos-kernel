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
	{ 0x78bbcb4b, "xt_unregister_target" },
	{ 0xc3e25ad2, "xt_register_target" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x6da1921d, "synproxy_send_client_synack" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xb337ba89, "synproxy_recv_client_ack" },
	{ 0x8ee10a54, "synproxy_parse_options" },
	{ 0xb6df1c64, "nf_ip_checksum" },
	{ 0x1a0b260e, "nf_synproxy_ipv4_init" },
	{ 0x858f43ff, "nf_ct_netns_get" },
	{ 0xe78b431, "nf_ct_netns_put" },
	{ 0xc4fe8687, "nf_synproxy_ipv4_fini" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "DFB790625F0CB2EAE0035B0");
