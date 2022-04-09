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
	{ 0x496f031a, "crypto_unregister_template" },
	{ 0xf2feecf8, "crypto_register_template" },
	{ 0x3f646cdc, "crypto_cipher_decrypt_one" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe702869e, "crypto_cipher_encrypt_one" },
	{ 0x221eab6d, "scatterwalk_copychunks" },
	{ 0xd7ceed40, "skcipher_register_instance" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7e5e5d49, "skcipher_alloc_instance_simple" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6BDDC9948117BEBEF7A7773");
