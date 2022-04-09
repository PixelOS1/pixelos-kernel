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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xd9ec23eb, "poly1305_update_arch" },
	{ 0xdc94f829, "chacha_init_arch" },
	{ 0xdd8ec6bd, "hchacha_block_arch" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0xe1df0e1b, "poly1305_init_arch" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x220b49ab, "chacha_crypt_arch" },
	{ 0xfaeb41b2, "poly1305_final_arch" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "poly1305-x86_64,chacha-x86_64");


MODULE_INFO(srcversion, "2092C692966CE7EE84C2C07");
