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
	{ 0xee111615, "param_ops_int" },
	{ 0x71bf0b19, "crypto_unregister_skciphers" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xea5dd487, "skcipher_walk_done" },
	{ 0xbc61baec, "crypto_register_skciphers" },
	{ 0x160e9b7d, "skcipher_walk_virt" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x479401a8, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf20d1b85, "crypto_unregister_alg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B9EFA43B7989149D1DF0976");
