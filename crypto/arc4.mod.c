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
	{ 0x98c6c2c7, "crypto_unregister_skcipher" },
	{ 0xbed90e07, "crypto_register_skcipher" },
	{ 0x92997ed8, "_printk" },
	{ 0xc23477d, "current_task" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xea5dd487, "skcipher_walk_done" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x160e9b7d, "skcipher_walk_virt" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libarc4");


MODULE_INFO(srcversion, "15B8815818A02D9CC78C611");
