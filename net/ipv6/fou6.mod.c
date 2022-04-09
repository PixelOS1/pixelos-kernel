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
	{ 0x1757d1a4, "fou_encap_hlen" },
	{ 0xf13914b3, "gue_encap_hlen" },
	{ 0xb88826ad, "ip6_tnl_encap_del_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x992a6542, "ip6_tnl_encap_add_ops" },
	{ 0xdab24a43, "__gue_build_header" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe219526, "inet6_protos" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8c795089, "udp6_set_csum" },
	{ 0x459f3f88, "skb_push" },
	{ 0xa655f2d, "__fou_build_header" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fou,ip6_tunnel");


MODULE_INFO(srcversion, "4B51D0FA5058C78E6E0CB78");
