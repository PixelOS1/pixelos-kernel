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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xaffe3344, "crypto_register_kpp" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x76ef2d1d, "atmel_i2c_probe" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe89c5d22, "crypto_stats_kpp_set_secret" },
	{ 0x5ab0ceec, "atmel_i2c_send_receive" },
	{ 0xc71ed50c, "atmel_i2c_init_genkey_cmd" },
	{ 0x33b866ce, "crypto_ecdh_decode_key" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7388018, "crypto_unregister_kpp" },
	{ 0x16faf8e4, "crypto_stats_kpp_generate_public_key" },
	{ 0xf7b163a, "atmel_i2c_enqueue" },
	{ 0xa517c0ff, "crypto_stats_kpp_compute_shared_secret" },
	{ 0xb6f1d859, "crypto_stats_get" },
	{ 0xfaab573f, "atmel_i2c_init_ecdh_cmd" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0x258c7b2d, "crypto_alloc_kpp" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,atmel-i2c,ecdh_generic");

MODULE_ALIAS("i2c:atecc508a");

MODULE_INFO(srcversion, "B75B4852B335160795F41D8");
