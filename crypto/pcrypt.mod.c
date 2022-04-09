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
	{ 0x9703bca3, "kset_unregister" },
	{ 0xf2feecf8, "crypto_register_template" },
	{ 0x23c1cf32, "kset_create_and_add" },
	{ 0x9ee3af51, "kernel_kobj" },
	{ 0x7838db25, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee06662, "crypto_grab_aead" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xceed240d, "padata_alloc_shell" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xea5d9e0e, "crypto_spawn_tfm2" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3c37fad0, "padata_free" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0xcbbf89a9, "kobject_add" },
	{ 0x2a3138ac, "padata_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xd41bfab0, "padata_free_shell" },
	{ 0xcd0d4205, "crypto_drop_spawn" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0x265687d4, "padata_do_parallel" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0x1598e8dd, "padata_do_serial" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A189F0F00A2CC8B8914FCA");
