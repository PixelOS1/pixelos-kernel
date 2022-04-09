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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xaa10ea97, "__devm_regmap_init" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x98c5acfe, "regmap_async_complete_cb" },
	{ 0xb1b6121c, "spi_async" },
	{ 0xc6f30039, "__regmap_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x43469f8e, "spi_sync" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xdf4b802d, "spi_write_then_read" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "33EBD86E85EC1D7292C5BF5");
