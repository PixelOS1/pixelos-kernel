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
	{ 0x5a57102e, "nf_flow_table_free" },
	{ 0xbf089447, "nf_flow_table_offload_setup" },
	{ 0xdcd3f907, "nf_flow_table_init" },
	{ 0xcf050be, "nft_unregister_flowtable_type" },
	{ 0x582f8245, "nft_register_flowtable_type" },
	{ 0x6ed8fe83, "nf_flow_rule_route_ipv6" },
	{ 0xc8b6cdd2, "nf_flow_rule_route_ipv4" },
	{ 0x2a39b44f, "nf_flow_offload_ipv6_hook" },
	{ 0x593daec6, "nf_flow_offload_ip_hook" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_flow_table,nf_tables");


MODULE_INFO(srcversion, "D67CABEE2A783E7F53F68D6");
