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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x26918ade, "vfio_unregister_iommu_driver" },
	{ 0x562c415b, "vfio_register_iommu_driver" },
	{ 0xec8e0eb7, "iommu_get_msi_cookie" },
	{ 0x21075824, "__free_pages" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x92a01fa4, "iommu_capable" },
	{ 0xcc2dbfd8, "irq_domain_check_msi_remap" },
	{ 0x7006586e, "iommu_get_group_resv_regions" },
	{ 0xaae05eb6, "iommu_attach_group" },
	{ 0xfeeefdf7, "iommu_enable_nesting" },
	{ 0xdcd451a3, "iommu_domain_alloc" },
	{ 0x62d266fc, "iommu_group_for_each_dev" },
	{ 0x26930ee4, "iommu_domain_free" },
	{ 0x5f5b11d8, "iommu_detach_group" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xece784c2, "rb_first" },
	{ 0x19567d06, "vfio_info_cap_shift" },
	{ 0xca9360b5, "rb_next" },
	{ 0xbfbe536c, "iommu_map" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc6cbbc89, "capable" },
	{ 0x69acdf38, "memcpy" },
	{ 0x60a634c4, "vfio_info_cap_add" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6c28be5a, "vfio_info_add_capability" },
	{ 0x92997ed8, "_printk" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf8af7c22, "__put_task_struct" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf9d7f2be, "iommu_unmap_fast" },
	{ 0xe962103f, "iommu_iova_to_phys" },
	{ 0x998da181, "iommu_unmap" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd174fd2a, "unpin_user_pages_dirty_lock" },
	{ 0xce807a25, "up_write" },
	{ 0xd4063ea, "__account_locked_vm" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0x5012a70, "pv_ops" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0x53b954a2, "up_read" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0x4d103848, "fixup_user_fault" },
	{ 0x3ad77861, "follow_pte" },
	{ 0xd564cc99, "find_vma" },
	{ 0xc27af930, "pin_user_pages_remote" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x668b19a1, "down_read" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0x26fe7592, "kthread_unuse_mm" },
	{ 0xe8d0b427, "kthread_use_mm" },
	{ 0x72b37550, "mmput" },
	{ 0x4c98e46, "get_task_mm" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa94a09bb, "mem_section" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3b644591, "__bitmap_shift_left" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1000e51, "schedule" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc23477d, "current_task" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vfio");


MODULE_INFO(srcversion, "454E1AFE8B9BD826B2D7223");
