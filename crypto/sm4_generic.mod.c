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
	{ 0xf20d1b85, "crypto_unregister_alg" },
	{ 0x479401a8, "crypto_register_alg" },
	{ 0x24e254e8, "sm4_expandkey" },
	{ 0xfa81970e, "sm4_crypt_block" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libsm4");


MODULE_INFO(srcversion, "5A4C73FA35ABFA136AE7049");
