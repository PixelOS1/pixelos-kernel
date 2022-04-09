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
	{ 0xd6450ca9, "inet6_del_offload" },
	{ 0x6c421e46, "xfrm_unregister_type_offload" },
	{ 0x92997ed8, "_printk" },
	{ 0x19e9977f, "inet6_add_offload" },
	{ 0x8fb67d7d, "xfrm_register_type_offload" },
	{ 0xb6490609, "skb_eth_gso_segment" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa4f749d, "inet6_offloads" },
	{ 0xdcedb06f, "xfrm_state_lookup" },
	{ 0x30d23ac0, "secpath_set" },
	{ 0xa6117b7f, "xfrm_input" },
	{ 0x5c906672, "xfrm_parse_spi" },
	{ 0x2bf28ceb, "__skb_ext_del" },
	{ 0x5e9850ca, "esp6_output_tail" },
	{ 0xf85d6426, "skb_ext_add" },
	{ 0xaecde06, "esp6_output_head" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7f489ecf, "ipv6_skip_exthdr" },
	{ 0x459f3f88, "skb_push" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x2b3d9753, "esp6_input_done2" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "esp6");


MODULE_INFO(srcversion, "C13BD26D5444A7DD70B1752");
