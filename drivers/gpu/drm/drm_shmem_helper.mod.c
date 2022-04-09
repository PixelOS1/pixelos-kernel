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
	{ 0x8d8c34f6, "drm_prime_gem_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x1ec3f5c8, "drm_gem_put_pages" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x3a7b2b28, "drm_gem_free_mmap_offset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x27e2f863, "dma_map_sgtable" },
	{ 0x28779e52, "drm_printf" },
	{ 0xb6e35dca, "set_pages_array_wc" },
	{ 0xd9b555e2, "shmem_truncate_range" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x74c20f2e, "dma_buf_vunmap" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xd2f65d17, "drm_prime_pages_to_sg" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc4f8bafa, "drm_gem_handle_create" },
	{ 0xbc9f459f, "vmap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb881338a, "drm_gem_object_release" },
	{ 0x1db804a, "drm_gem_vm_open" },
	{ 0x2ec0324, "drm_gem_vm_close" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xd315eeaf, "set_pages_array_wb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa9227c5e, "drm_gem_private_object_init" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xbe297836, "drm_gem_object_init" },
	{ 0x1674a51b, "drm_gem_create_mmap_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0xba8eb18d, "dma_buf_mmap" },
	{ 0x94961283, "vunmap" },
	{ 0x1c4ced47, "unmap_mapping_range" },
	{ 0xc950e760, "invalidate_mapping_pages" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0xed2f1fd9, "dma_buf_vmap" },
	{ 0x39196e30, "drm_gem_get_pages" },
	{ 0xa84bd83d, "vmf_insert_pfn" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "40E38659251724141AE8773");
