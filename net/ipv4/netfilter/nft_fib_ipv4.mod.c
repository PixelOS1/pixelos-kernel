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
	{ 0xf784432b, "__fib_lookup" },
	{ 0xc0cdaba2, "nft_register_expr" },
	{ 0xc25d5a92, "inet_dev_addr_type" },
	{ 0x9cb7f51a, "nft_fib_validate" },
	{ 0x842a2c27, "nft_fib_store_result" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xcea92252, "nft_unregister_expr" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd6c5418c, "fib_info_nh_uses_dev" },
	{ 0xa045655a, "nft_fib_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x57390fa0, "fib_table_lookup" },
	{ 0xb3c36947, "nft_fib_policy" },
	{ 0xb756a734, "nft_fib_dump" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x938aecd6, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "23B472B3BB6B84E325D9046");
