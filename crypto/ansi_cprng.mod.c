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
	{ 0xe662b66f, "crypto_unregister_rngs" },
	{ 0x93fd1dff, "crypto_register_rngs" },
	{ 0x43b599aa, "crypto_alloc_base" },
	{ 0xfb578fc5, "memset" },
	{ 0xf1e046cc, "panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe702869e, "crypto_cipher_encrypt_one" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x92997ed8, "_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8e1f34a0, "crypto_cipher_setkey" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2D60F7AE5307BCCEC2FADA9");
