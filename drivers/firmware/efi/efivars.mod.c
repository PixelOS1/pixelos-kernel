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
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0xad5737fc, "efivar_init" },
	{ 0x23c1cf32, "kset_create_and_add" },
	{ 0x18615d35, "efivar_supports_writes" },
	{ 0x6aa238df, "efivars_kobject" },
	{ 0x9703bca3, "kset_unregister" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0x8291d09e, "__efivar_entry_iter" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x92997ed8, "_printk" },
	{ 0xb3759aa4, "efivar_entry_set" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x85c54b61, "efivar_validate" },
	{ 0x754d539c, "strlen" },
	{ 0x8f8f2c34, "efivar_entry_remove" },
	{ 0xd7399d2a, "efivar_entry_iter_end" },
	{ 0x54e9c33f, "__efivar_entry_delete" },
	{ 0x6a6d5d0, "efivar_entry_find" },
	{ 0x968f9a23, "efivar_entry_iter_begin" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ec97348, "kobject_put" },
	{ 0x5c1db03b, "efivar_entry_add" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0xa980d013, "kobject_init_and_add" },
	{ 0x4336fcca, "ucs2_as_utf8" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x465e24ff, "ucs2_utf8size" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc23477d, "current_task" },
	{ 0xbb2a8f11, "efivar_entry_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2CC564EF4F395261009E9B1");
