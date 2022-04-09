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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x61d24c52, "ib_rate_to_mbps" },
	{ 0xe0b7b8ff, "ib_set_device_ops" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xe84db6c2, "rdma_replace_ah_attr" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x7bbd139b, "remap_vmalloc_range" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x1db7706b, "__copy_user_nocache" },
	{ 0x39b6939b, "ib_register_mad_agent" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x56470118, "__warn_printk" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xca0b8641, "ib_free_send_mad" },
	{ 0x2b283c36, "ib_dealloc_device" },
	{ 0xf5461416, "rdma_destroy_ah_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4925daa7, "ib_query_port" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7c9ca58f, "__sg_page_iter_next" },
	{ 0x4845be4e, "ib_umem_get" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xb0abe1cf, "bpf_trace_run5" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe0f60c6d, "rdma_destroy_ah_attr" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37bf7be3, "percpu_ref_exit" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x2f5a3ead, "ib_unregister_mad_agent" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d6e31a2, "ib_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb6d49b28, "ib_unregister_device" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1ed4d2eb, "percpu_ref_kill_and_confirm" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x86f86292, "_ib_alloc_device" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x965bfe42, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x73baf9a2, "ib_modify_qp_is_ok" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xe1194d5, "hrtimer_try_to_cancel" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x81a7f541, "percpu_ref_init" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0xaab4ecdb, "ib_umem_release" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb30caa34, "rdma_copy_ah_attr" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs");


MODULE_INFO(srcversion, "B671F0C72FD103F2E5BADCC");
