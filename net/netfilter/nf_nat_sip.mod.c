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
	{ 0x5ebc89e3, "nf_ct_helper_expectfn_register" },
	{ 0x548917c2, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x362d04cb, "nf_ct_helper_expectfn_unregister" },
	{ 0xed00a358, "nf_nat_sip_hooks" },
	{ 0xc1551e2b, "nf_nat_helper_unregister" },
	{ 0x183515ef, "skb_ensure_writable" },
	{ 0xf3bba250, "ct_sip_parse_numerical_param" },
	{ 0x64647e7, "ct_sip_parse_request" },
	{ 0xb9aa3b7, "ct_sip_parse_address_param" },
	{ 0x3da5550f, "ct_sip_parse_header_uri" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x64141d04, "nf_ct_unexpect_related" },
	{ 0x236b6d1, "nf_ct_helper_log" },
	{ 0x97c3271b, "nf_ct_expect_related_report" },
	{ 0xd934e289, "nf_ct_seqadj_set" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x192e4984, "ct_sip_get_header" },
	{ 0xa8f84f5e, "ct_sip_get_sdp_header" },
	{ 0xd1472f71, "__nf_nat_mangle_tcp_packet" },
	{ 0x9e199fa, "nf_nat_mangle_udp_packet" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc47a2d0b, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");


MODULE_INFO(srcversion, "611C746A25BF5C9EAEC77E5");
