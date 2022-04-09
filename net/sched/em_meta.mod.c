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
	{ 0x289ae51e, "tcf_em_unregister" },
	{ 0xb68e8849, "tcf_em_register" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa916b694, "strnlen" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0x37a0cba, "kfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x7d11271e, "nla_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf1e98c74, "avenrun" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "197732702100F5A7AC3E16F");
