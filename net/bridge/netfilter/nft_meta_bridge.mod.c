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
	{ 0x6c6ca47, "nft_meta_policy" },
	{ 0xc1172244, "nft_meta_get_dump" },
	{ 0x60a4daae, "nft_meta_set_validate" },
	{ 0x92363371, "nft_meta_set_dump" },
	{ 0xd25bb338, "nft_meta_set_destroy" },
	{ 0x9153e28e, "nft_meta_set_init" },
	{ 0x585de534, "nft_meta_set_eval" },
	{ 0xcea92252, "nft_unregister_expr" },
	{ 0xc0cdaba2, "nft_register_expr" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfb5d71cc, "br_vlan_get_pvid_rcu" },
	{ 0x990ce905, "nft_meta_get_eval" },
	{ 0x670f5aee, "br_vlan_get_proto" },
	{ 0xfa62d023, "br_vlan_enabled" },
	{ 0x9166fada, "strncpy" },
	{ 0x58f8f851, "netdev_master_upper_dev_get_rcu" },
	{ 0x3b09ffb, "nft_meta_get_init" },
	{ 0x5320de4f, "nft_parse_register_store" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,bridge");


MODULE_INFO(srcversion, "5B44AADE9FED352633B6A0F");
