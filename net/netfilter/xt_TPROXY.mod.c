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
	{ 0x768db380, "xt_unregister_targets" },
	{ 0x6bb5996e, "xt_register_targets" },
	{ 0x7a084d9c, "nf_tproxy_handle_time_wait4" },
	{ 0x59d61c9e, "nf_tproxy_laddr4" },
	{ 0x77f5c24e, "nf_tproxy_get_sock_v4" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xf837b96d, "nf_tproxy_handle_time_wait6" },
	{ 0xb0cbada7, "sock_edemux" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd2ee7396, "sock_gen_put" },
	{ 0x26c552fd, "nf_tproxy_laddr6" },
	{ 0x75836b81, "nf_tproxy_get_sock_v6" },
	{ 0xfd8bfe38, "ipv6_find_hdr" },
	{ 0x919e5795, "nf_defrag_ipv4_enable" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdc918496, "nf_defrag_ipv6_enable" },
	{ 0xd8407114, "nf_defrag_ipv4_disable" },
	{ 0xecf4e6b0, "nf_defrag_ipv6_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tproxy_ipv4,nf_tproxy_ipv6,nf_defrag_ipv4,nf_defrag_ipv6");


MODULE_INFO(srcversion, "33F387C72D0CD6BB15ABF43");
