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
	{ 0x104c672, "kernel_write" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xee111615, "param_ops_int" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85e9193b, "unregister_pstore_zone" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5012a70, "pv_ops" },
	{ 0xc8a016aa, "param_ops_string" },
	{ 0x29152bb6, "kernel_read" },
	{ 0x9166fada, "strncpy" },
	{ 0x1b9734b3, "register_pstore_zone" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf0785fc6, "fput" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xea1424f0, "I_BDEV" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a8a2dc9, "param_ops_long" },
	{ 0x388d81e8, "filp_open" },
};

MODULE_INFO(depends, "pstore_zone");


MODULE_INFO(srcversion, "6662ED1E3C78451085DB8C2");
