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
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa7632fdb, "unregister_md_personality" },
	{ 0xee159324, "bio_clone_fast" },
	{ 0x8a798721, "disk_stack_limits" },
	{ 0x838c1975, "submit_bio_noacct" },
	{ 0xd1f93394, "bio_endio" },
	{ 0xee4271b9, "bio_put" },
	{ 0x8972abc3, "md_set_array_sectors" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x221401b7, "md_check_no_bitmap" },
	{ 0x6ee26f4f, "register_md_personality" },
	{ 0x5d2b0351, "bio_associate_blkg" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "B98AE63B7ABAD26023BB733");
