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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe4345174, "single_open" },
	{ 0x60db5ae0, "proc_create_seq_private" },
	{ 0x9b02585d, "single_release" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0xd349d253, "seq_printf" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x94216657, "seq_read" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0x5012a70, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xf3189f7e, "__uv_cpu_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x4166aaa4, "__alloc_pages" },
	{ 0xa164df89, "misc_register" },
	{ 0xdad13544, "ptrs_per_p4d" },
	{ 0xfb578fc5, "memset" },
	{ 0x3c08c820, "proc_mkdir" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0xa50bcff0, "x86_cpu_to_apicid" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd9e5fa5f, "mmu_notifier_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0xce807a25, "up_write" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x6a4f623b, "mmu_notifier_synchronize" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x67dcd76b, "uv_setup_irq" },
	{ 0xd564cc99, "find_vma" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0x618911fc, "numa_node" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa1583cb9, "get_user_pages" },
	{ 0x8ad5ceb1, "__uv_hub_info_list" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5ab892d, "uv_undefined" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x9493fc86, "node_states" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xa271ea4a, "remove_proc_subtree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xbf8e87c0, "zap_vma_ptes" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0x72d79d83, "pgdir_shift" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5d9317d7, "uv_teardown_irq" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xf956a686, "mmu_notifier_get_locked" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x36a8a87e, "proc_create" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0xaa86cfb5, "uv_possible_blades" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "09ECBAB52E3F279BBF07095");
