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
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x53b954a2, "up_read" },
	{ 0xa84ee3f4, "gnttab_map_refs" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1af4cfd8, "vm_map_pages_zero" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0xd74dd52d, "gnttab_alloc_pages" },
	{ 0x4b931968, "xen_features" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0xc75d4a7, "gnttab_unmap_refs_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0x668b19a1, "down_read" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x14ec4fdb, "evtchn_put" },
	{ 0xa164df89, "misc_register" },
	{ 0x33f27a90, "gnttab_free_pages" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x65df35ca, "__put_user_nocheck_2" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf028b69, "apply_to_page_range" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9688b217, "gnttab_batch_copy" },
	{ 0xd2bc5c46, "__get_user_nocheck_2" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd564cc99, "find_vma" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x37a0cba, "kfree" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xcaf1d958, "evtchn_get" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x5e6f9843, "mmu_interval_notifier_insert_locked" },
	{ 0xb2d2f1c4, "mmu_interval_read_begin" },
	{ 0x3165daa3, "arbitrary_virt_to_machine" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xd174fd2a, "unpin_user_pages_dirty_lock" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb570d09d, "mmu_interval_notifier_remove" },
	{ 0xf562eb58, "pin_user_pages_fast" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2966D4B1EBEB347CAAC403E");
