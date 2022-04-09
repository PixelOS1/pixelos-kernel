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
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd93c7fc7, "mtd_device_unregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xff90868c, "blkdev_put" },
	{ 0xc950e760, "invalidate_mapping_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x69b35ce9, "mtd_device_parse_register" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x68d2307b, "blkdev_get_by_path" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9f984513, "strrchr" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x92997ed8, "_printk" },
	{ 0x6d4231e6, "__folio_lock" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x84f0bab7, "balance_dirty_pages_ratelimited" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xa64c3892, "set_page_dirty" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xedf87f63, "read_cache_page" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x68bc1247, "sync_blockdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "6EC102C0B82236960D3755C");
