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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x2dc1d86, "pstore_unregister" },
	{ 0x3532426b, "pstore_register" },
	{ 0x18615d35, "efivar_supports_writes" },
	{ 0x6aa238df, "efivars_kobject" },
	{ 0xad5737fc, "efivar_init" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5c1db03b, "efivar_entry_add" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xbee407f6, "__efivar_entry_get" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdfbcf889, "module_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x81b03377, "efivar_entry_set_safe" },
	{ 0x5012a70, "pv_ops" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x54e9c33f, "__efivar_entry_delete" },
	{ 0x9d61e994, "ucs2_strncmp" },
	{ 0x702946da, "ucs2_strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xd7399d2a, "efivar_entry_iter_end" },
	{ 0x8291d09e, "__efivar_entry_iter" },
	{ 0x968f9a23, "efivar_entry_iter_begin" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6a6d5d0, "efivar_entry_find" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "23C3AB2A3DEBE223CF7F2D4");
