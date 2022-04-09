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
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x309bba67, "dma_find_channel" },
	{ 0x574e440e, "dmaengine_unmap_put" },
	{ 0xe3cbeda3, "async_tx_submit" },
	{ 0xb9221bf8, "dmaengine_get_unmap_data" },
	{ 0x6642cc14, "async_memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40b17cff, "__async_tx_find_channel" },
	{ 0x83750a9b, "async_xor_offs" },
	{ 0xa493b313, "async_tx_quiesce" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe4b051cf, "raid6_datap_recov" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x17f54263, "raid6_gfexp" },
	{ 0x59a2712d, "raid6_gfinv" },
	{ 0x71443196, "async_gen_syndrome" },
	{ 0xd91319d6, "raid6_gfmul" },
	{ 0xcc4ee841, "raid6_gfexi" },
	{ 0x1803a6ed, "raid6_2data_recov" },
};

MODULE_INFO(depends, "raid6_pq,async_tx,async_memcpy,async_xor,async_pq");


MODULE_INFO(srcversion, "062F9612BD09B480935227F");
