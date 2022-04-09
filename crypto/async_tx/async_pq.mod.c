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
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x574e440e, "dmaengine_unmap_put" },
	{ 0x804a5b70, "raid6_call" },
	{ 0xe3cbeda3, "async_tx_submit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb9221bf8, "dmaengine_get_unmap_data" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40b17cff, "__async_tx_find_channel" },
	{ 0x83750a9b, "async_xor_offs" },
	{ 0x21075824, "__free_pages" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xa493b313, "async_tx_quiesce" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x17f54263, "raid6_gfexp" },
};

MODULE_INFO(depends, "raid6_pq,async_tx,async_xor");


MODULE_INFO(srcversion, "6135C3A1A03DA6A7CCBE102");
