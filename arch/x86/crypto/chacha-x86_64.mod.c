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
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x71bf0b19, "crypto_unregister_skciphers" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xea5dd487, "skcipher_walk_done" },
	{ 0xbc61baec, "crypto_register_skciphers" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x160e9b7d, "skcipher_walk_virt" },
	{ 0xaaa4b9bc, "hchacha_block_generic" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcec122d7, "chacha_crypt_generic" },
	{ 0x73dd54eb, "irq_fpu_usable" },
};

MODULE_INFO(depends, "libchacha");


MODULE_INFO(srcversion, "23E617140D393908806FB56");
