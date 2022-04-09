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
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x53b954a2, "up_read" },
	{ 0x2f7f42d0, "amd_iommu_domain_clear_gcr3" },
	{ 0xf992d1e8, "cc_platform_has" },
	{ 0x606b922a, "amd_iommu_domain_direct_map" },
	{ 0xaae05eb6, "iommu_attach_group" },
	{ 0x40868a9c, "amd_iommu_domain_enable_v2" },
	{ 0x6841c65d, "mmu_notifier_register" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0x7eb49761, "amd_iommu_flush_page" },
	{ 0x72b37550, "mmput" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0x668b19a1, "down_read" },
	{ 0x949f43f5, "amd_iommu_complete_ppr" },
	{ 0x9b2b525e, "amd_iommu_flush_tlb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c98e46, "get_task_mm" },
	{ 0x9cb6dff0, "mmu_notifier_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa26fb409, "amd_iommu_is_attach_deferred" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdcd451a3, "iommu_domain_alloc" },
	{ 0x26930ee4, "iommu_domain_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb8d99c54, "amd_iommu_domain_set_gcr3" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5f5b11d8, "iommu_detach_group" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xc0e7dcbf, "handle_mm_fault" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x76fb08a7, "amd_iommu_unregister_ppr_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x48d50e79, "amd_iommu_register_ppr_notifier" },
	{ 0xafd5ff2c, "amd_iommu_v2_supported" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x837c876c, "iommu_group_get" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x34fbc5a7, "find_extend_vma" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F93F45C606A94C66A97BFE7");
