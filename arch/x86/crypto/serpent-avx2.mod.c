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
	{ 0x38800636, "serpent_cbc_dec_8way_avx" },
	{ 0x194b2841, "serpent_ecb_enc_8way_avx" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x4eb4c55e, "__serpent_encrypt" },
	{ 0xaa506821, "simd_unregister_skciphers" },
	{ 0xea5dd487, "skcipher_walk_done" },
	{ 0xbcc074f3, "__serpent_decrypt" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x25fe0495, "simd_register_skciphers_compat" },
	{ 0x160e9b7d, "skcipher_walk_virt" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4140192a, "serpent_ecb_dec_8way_avx" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4c9681a, "__serpent_setkey" },
};

MODULE_INFO(depends, "serpent-avx-x86_64,serpent_generic,crypto_simd");


MODULE_INFO(srcversion, "B6B0DB8B1A2C36CFCD32C5F");
