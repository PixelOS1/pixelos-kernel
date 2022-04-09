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
	{ 0xb5ae8690, "xt_unregister_matches" },
	{ 0x3a940c80, "xt_register_matches" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdc918496, "nf_defrag_ipv6_enable" },
	{ 0x919e5795, "nf_defrag_ipv4_enable" },
	{ 0xaa8d680c, "nf_sk_lookup_slow_v4" },
	{ 0xecf4e6b0, "nf_defrag_ipv6_disable" },
	{ 0xd8407114, "nf_defrag_ipv4_disable" },
	{ 0xd2ee7396, "sock_gen_put" },
	{ 0x2deac965, "nf_sk_lookup_slow_v6" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_defrag_ipv6,nf_defrag_ipv4,nf_socket_ipv4,nf_socket_ipv6");


MODULE_INFO(srcversion, "CA044B9489DFE40B00FF330");
