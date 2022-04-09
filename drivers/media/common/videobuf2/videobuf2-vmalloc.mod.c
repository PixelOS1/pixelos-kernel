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
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0x7bbd139b, "remap_vmalloc_range" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x4c196ae0, "set_page_dirty_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x27e2f863, "dma_map_sgtable" },
	{ 0x999e8297, "vfree" },
	{ 0xa21fa765, "vb2_create_framevec" },
	{ 0x74c20f2e, "dma_buf_vunmap" },
	{ 0xde80cd09, "ioremap" },
	{ 0x499c87d8, "vm_map_ram" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x3bc3fd46, "dma_buf_export" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xdffb744b, "frame_vector_to_pfns" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x74732f0d, "vb2_common_vm_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0xed2f1fd9, "dma_buf_vmap" },
};

MODULE_INFO(depends, "videobuf2-common,videobuf2-memops");


MODULE_INFO(srcversion, "421B3566A36F38F7FF324E0");
