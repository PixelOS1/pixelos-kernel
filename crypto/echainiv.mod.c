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
	{ 0x7838db25, "aead_register_instance" },
	{ 0x2bdf881f, "aead_exit_geniv" },
	{ 0x8ea7f702, "aead_init_geniv" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x817f9152, "aead_geniv_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0xfb578fc5, "memset" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1076131CD0C90A1E35F85A7");
