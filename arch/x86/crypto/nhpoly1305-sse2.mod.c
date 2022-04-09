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
	{ 0xf1d1b13e, "crypto_nhpoly1305_init" },
	{ 0x98b72ff8, "crypto_nhpoly1305_setkey" },
	{ 0x2aafc8ee, "crypto_unregister_shash" },
	{ 0xf2e6856c, "crypto_register_shash" },
	{ 0x69e8dde8, "crypto_nhpoly1305_update" },
	{ 0x2e0b3a8b, "crypto_nhpoly1305_update_helper" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x54bb1105, "crypto_nhpoly1305_final" },
	{ 0x73dd54eb, "irq_fpu_usable" },
};

MODULE_INFO(depends, "nhpoly1305");


MODULE_INFO(srcversion, "B22E40A92580268BAC3C8DB");
