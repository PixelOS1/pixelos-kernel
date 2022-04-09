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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xbdfd201c, "unregister_ip_vs_scheduler" },
	{ 0x17143bf, "register_ip_vs_scheduler" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xea124bd1, "gcd" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x772be146, "ip_vs_scheduler_err" },
	{ 0xcfd884a8, "__hsiphash_unaligned" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "EEFAF99718393E14655C135");
