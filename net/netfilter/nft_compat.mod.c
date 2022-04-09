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
	{ 0x76ad775d, "nfnetlink_subsys_unregister" },
	{ 0xcea92252, "nft_unregister_expr" },
	{ 0x8f5dfbc7, "nfnetlink_subsys_register" },
	{ 0xc0cdaba2, "nft_register_expr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7b9019dd, "xt_check_match" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x966f3b55, "xt_request_find_match" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8b182b83, "xt_request_find_target" },
	{ 0x92997ed8, "_printk" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd6e40c61, "nfnetlink_unicast" },
	{ 0x7d11271e, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x7557a51f, "nft_request_module" },
	{ 0xba7c6e9d, "xt_check_target" },
	{ 0x3251d762, "nf_tables_trans_destroy_flush_work" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcfbb8700, "nla_reserve" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfbcf889, "module_put" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_tables");


MODULE_INFO(srcversion, "EF227717735F9E251AF9688");
