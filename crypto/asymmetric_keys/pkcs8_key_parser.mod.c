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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x3d4d1e86, "public_key_subtype" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2319a346, "unregister_asymmetric_key_parser" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xfc201b66, "sprint_oid" },
	{ 0x37a0cba, "kfree" },
	{ 0xeaf0a57c, "look_up_OID" },
	{ 0x75541629, "register_asymmetric_key_parser" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ABE6AE7F43099070B91E85F");
