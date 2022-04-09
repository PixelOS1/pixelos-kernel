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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x4831da6e, "drm_vma_offset_remove" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xe4345174, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0xa18d511, "dma_resv_test_signaled" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xcd999b02, "set_pages_array_uc" },
	{ 0x9b02585d, "single_release" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x74ac60e9, "dma_resv_iter_first_unlocked" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0xf7cd6330, "dma_resv_iter_next_unlocked" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x28779e52, "drm_printf" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xb6e35dca, "set_pages_array_wc" },
	{ 0x8d9ca0e6, "dma_fence_enable_sw_signaling" },
	{ 0x4a7d75b0, "drm_memcpy_from_wc" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x94216657, "seq_read" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xa64c3892, "set_page_dirty" },
	{ 0x1b1f8ddf, "dma_resv_copy_fences" },
	{ 0x52c42023, "agp_unbind_memory" },
	{ 0x4e7e93da, "agp_allocate_memory" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0x8d1f9f42, "vmf_insert_pfn_prot" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xc23477d, "current_task" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x3d11efe5, "dma_resv_add_shared_fence" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0xbc9f459f, "vmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xe75bf512, "shmem_read_mapping_page_gfp" },
	{ 0x203aaa7d, "ww_mutex_lock" },
	{ 0x925493f, "clear_page_orig" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8b0cba42, "dma_resv_fini" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x1ddcd4c8, "agp_free_memory" },
	{ 0xf0785fc6, "fput" },
	{ 0xd73c8c2b, "synchronize_shrinkers" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbdc46c07, "shmem_file_setup" },
	{ 0x244ac0c2, "mark_page_accessed" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x21075824, "__free_pages" },
	{ 0x311e3ba7, "unregister_shrinker" },
	{ 0x33b84f74, "copy_page" },
	{ 0xc9addcd2, "dma_resv_reserve_shared" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdf8e188a, "__drmm_add_action_or_reset" },
	{ 0x807ef12e, "ww_mutex_trylock" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xce0f384c, "set_pages_wb" },
	{ 0xf7acb66, "drm_mm_print" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0x4d924f20, "memremap" },
	{ 0xe8a0e334, "drm_vma_offset_add" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x1c4ced47, "unmap_mapping_range" },
	{ 0x3d83bbbd, "register_shrinker" },
	{ 0x40b61ca8, "debugfs_create_atomic_t" },
	{ 0xedc03953, "iounmap" },
	{ 0x8d1571d4, "ww_mutex_unlock" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0x72ad465, "dma_resv_wait_timeout" },
	{ 0xc1c8a0c9, "dma_resv_init" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0x8f7571e4, "agp_bind_memory" },
	{ 0xf824c7db, "__drm_printfn_debug" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0xbc1e4729, "dma_resv_add_excl_fence" },
	{ 0x36fba308, "drm_dev_enter" },
	{ 0xd1b2a9b8, "ww_mutex_lock_interruptible" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "AF9D3E648953821B97DEA73");
