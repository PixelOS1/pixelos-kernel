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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xee111615, "param_ops_int" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7cfe6d35, "follow_pfn" },
	{ 0xfb578fc5, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x9604dda, "freezing_slow_path" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x82aa5f7a, "dma_buf_fd" },
	{ 0xe3e5213e, "media_request_object_bind" },
	{ 0x10958611, "dma_buf_put" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x53425a69, "dma_buf_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x897db409, "media_request_put" },
	{ 0xab1aad28, "v4l_vb2q_enable_media_source" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xd564cc99, "find_vma" },
	{ 0x88ec40ba, "media_request_object_put" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x98783514, "unpin_user_pages" },
	{ 0x5dc7222c, "media_request_object_unbind" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x577e2767, "media_request_object_init" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf562eb58, "pin_user_pages_fast" },
};

MODULE_INFO(depends, "mc,videodev");


MODULE_INFO(srcversion, "775802E2FB59D71341D8E69");
