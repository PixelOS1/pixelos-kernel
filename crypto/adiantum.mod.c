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
	{ 0xd7ceed40, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xabae7b2f, "crypto_grab_shash" },
	{ 0xb8f33d73, "crypto_grab_spawn" },
	{ 0xcf93694a, "crypto_grab_skcipher" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa4881569, "crypto_shash_setkey" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x8e1f34a0, "crypto_cipher_setkey" },
	{ 0x98552d78, "crypto_req_done" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd0d4205, "crypto_drop_spawn" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
	{ 0xe702869e, "crypto_cipher_encrypt_one" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0x3f646cdc, "crypto_cipher_decrypt_one" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe94c52b2, "crypto_shash_final" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0x3caad30b, "crypto_shash_update" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb76eabdb, "crypto_spawn_tfm" },
	{ 0xea5d9e0e, "crypto_spawn_tfm2" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libpoly1305");


MODULE_INFO(srcversion, "E2DD3E9C82110E8C4F75C22");
