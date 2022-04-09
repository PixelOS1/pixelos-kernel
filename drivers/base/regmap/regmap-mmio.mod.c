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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xaa10ea97, "__devm_regmap_init" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0x9bb4e317, "ioread32be" },
	{ 0xc6f30039, "__regmap_init" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xf906590d, "clk_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7603e78, "regmap_get_val_endian" },
	{ 0xa71d2e2c, "ioread16be" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BE51FF7C8D07D9E63B98CE6");
