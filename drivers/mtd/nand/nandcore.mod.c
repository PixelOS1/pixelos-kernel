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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2e2630ba, "mtd_ooblayout_get_eccbytes" },
	{ 0x56470118, "__warn_printk" },
	{ 0x204ce133, "mtd_expert_analysis_warning" },
	{ 0xfb578fc5, "memset" },
	{ 0x780737d1, "mtd_expert_analysis_mode" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x9b1b4265, "mtd_ooblayout_set_eccbytes" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "71718CC0E84D29D6BD76511");
