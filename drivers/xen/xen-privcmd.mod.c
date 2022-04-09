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
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1af4cfd8, "vm_map_pages_zero" },
	{ 0xae97c7be, "xen_alloc_unpopulated_pages" },
	{ 0x4b931968, "xen_features" },
	{ 0x8d6aff89, "__put_user_nocheck_4" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xea06c0de, "xen_remap_pfn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0xa164df89, "misc_register" },
	{ 0x91782985, "xen_unmap_domain_gfn_range" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf028b69, "apply_to_page_range" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc52bdb12, "xen_remap_vma_range" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x945ff369, "xen_free_unpopulated_pages" },
	{ 0xd564cc99, "find_vma" },
	{ 0x21075824, "__free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x37a0cba, "kfree" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x87706d4e, "__put_user_nocheck_8" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xd174fd2a, "unpin_user_pages_dirty_lock" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x44901b33, "xen_xlate_remap_gfn_array" },
	{ 0xf562eb58, "pin_user_pages_fast" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9ABE07D354E36C70BDFE5D0");
