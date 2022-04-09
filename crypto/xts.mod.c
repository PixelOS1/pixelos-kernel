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
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd7ceed40, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x81923898, "crypto_inst_setname" },
	{ 0xcf93694a, "crypto_grab_skcipher" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x8e1f34a0, "crypto_cipher_setkey" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0xe702869e, "crypto_cipher_encrypt_one" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd0d4205, "crypto_drop_spawn" },
	{ 0x43b599aa, "crypto_alloc_base" },
	{ 0xea5d9e0e, "crypto_spawn_tfm2" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xea5dd487, "skcipher_walk_done" },
	{ 0x160e9b7d, "skcipher_walk_virt" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9BB63C2CED1E10768CC34AB");
