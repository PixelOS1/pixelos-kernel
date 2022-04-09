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
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x585f48d2, "ip_vs_nfct_expect_related" },
	{ 0xd1472f71, "__nf_nat_mangle_tcp_packet" },
	{ 0xa916b694, "strnlen" },
	{ 0x4fc8c25b, "ip_vs_conn_out_get" },
	{ 0xaa36548e, "ip_vs_conn_new" },
	{ 0x6a16ba60, "ip_vs_conn_put" },
	{ 0xb66c506, "ip_vs_tcp_conn_listen" },
	{ 0xde7970d6, "ip_vs_conn_in_get" },
	{ 0x183515ef, "skb_ensure_writable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xf1a8fca3, "register_ip_vs_app_inc" },
	{ 0x57a09dfb, "register_ip_vs_app" },
	{ 0x1492ed59, "unregister_ip_vs_app" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "9C9835176D249C1D8579438");
