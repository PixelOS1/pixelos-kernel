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
	{ 0x87f42faf, "dax_driver_unregister" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x272e755e, "__dax_driver_register" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfcbfec70, "add_memory_driver_managed" },
	{ 0x85bd1608, "__request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xe8c0065d, "memory_group_register_static" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x12ee1173, "memory_group_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5e74216, "release_resource" },
	{ 0xbbdc9b2, "remove_memory" },
	{ 0xfcc1edd3, "memory_block_size_bytes" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "818F38A0CE0F0356AA6C631");
