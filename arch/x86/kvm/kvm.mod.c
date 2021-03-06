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
	{ 0x6a5fa363, "sigprocmask" },
	{ 0x5254d489, "yield_to" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xbded188a, "vma_kernel_pagesize" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4d39872d, "eventfd_ctx_fileget" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xae2d175d, "x86_msi_msg_get_destid" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x9b53e14, "interval_tree_remove" },
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x59ceb925, "put_pid" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x5f18a6, "add_wait_queue_priority" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xe6c152c4, "__static_call_update" },
	{ 0xe911df29, "eventfd_ctx_do_read" },
	{ 0xe83eba32, "itlb_multihit_kvm_mitigation" },
	{ 0xe4345174, "single_open" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x4357074b, "fpstate_clear_xstate_component" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xac537ac2, "percpu_counter_destroy" },
	{ 0xee111615, "param_ops_int" },
	{ 0xe7d0ef87, "get_task_pid" },
	{ 0x38dcc0b, "bpf_trace_run7" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x754d539c, "strlen" },
	{ 0xec5fe6e6, "perf_event_release_kernel" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x707019a, "context_tracking" },
	{ 0xef8fc95f, "kvm_async_pf_task_wait_schedule" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x9bd97e, "fpu_alloc_guest_fpstate" },
	{ 0x947b40c6, "cpu_smt_possible" },
	{ 0x1f5aefee, "preempt_notifier_unregister" },
	{ 0x8a93550c, "cpufreq_cpu_get" },
	{ 0xd490e571, "pid_vnr" },
	{ 0xdab5a1eb, "interval_tree_insert" },
	{ 0x9b02585d, "single_release" },
	{ 0x59e2d635, "rcuwait_wake_up" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x888c5be5, "irq_bypass_register_consumer" },
	{ 0xfe456136, "vtime_guest_enter" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x5f2da8c4, "check_tsc_unstable" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x6841c65d, "mmu_notifier_register" },
	{ 0x32bc0fcf, "preempt_notifier_dec" },
	{ 0x4a2c8f82, "lookup_address_in_mm" },
	{ 0xcfb17d1b, "__srcu_read_unlock" },
	{ 0x7452adff, "user_return_notifier_register" },
	{ 0x8d6aff89, "__put_user_nocheck_4" },
	{ 0x46030074, "__hrtimer_get_remaining" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x550ce709, "pat_enabled" },
	{ 0x1151052, "dput" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x50b03f5d, "l1tf_vmx_mitigation" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x65d9e877, "cpufreq_register_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xa4cd68f0, "get_user_pages_unlocked" },
	{ 0xf63c0d23, "fpu_enable_guest_xfd_features" },
	{ 0xccea4e34, "perf_get_x86_pmu_capability" },
	{ 0x53f6a314, "get_user_pages_fast_only" },
	{ 0x6e841389, "cpu_info" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb89e69b1, "jump_label_update_timeout" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3a099605, "__get_user_nocheck_4" },
	{ 0x3546ab7b, "kthread_destroy_worker" },
	{ 0xc683da81, "set_memory_decrypted" },
	{ 0x72b37550, "mmput" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0xbcd66a94, "irq_work_sync" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4716faca, "perf_event_enable" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0xb4b97c90, "pvclock_gtod_register_notifier" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x94216657, "seq_read" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x5012a70, "pv_ops" },
	{ 0x745a981, "xa_erase" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0xaa6a50f9, "__static_key_deferred_flush" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0xbb13595e, "smp_call_function_many" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x7c46233a, "cpufreq_quick_get" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x55462474, "fpu_copy_uabi_to_guest_fpstate" },
	{ 0x6230172c, "__mmdrop" },
	{ 0x668b19a1, "down_read" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x4045cb0b, "simple_attr_read" },
	{ 0x95609b26, "context_tracking_key" },
	{ 0x56398615, "mark_tsc_unstable" },
	{ 0x13ad017c, "fpu_swap_kvm_fpstate" },
	{ 0x6214aef2, "cpufreq_unregister_notifier" },
	{ 0x4248ae3c, "single_task_running" },
	{ 0x3ad77861, "follow_pte" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xa164df89, "misc_register" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x37447de7, "synchronize_srcu_expedited" },
	{ 0x41ed3cec, "eventfd_ctx_remove_wait_queue" },
	{ 0xfb578fc5, "memset" },
	{ 0x9a185ace, "tick_nohz_full_running" },
	{ 0x3fe35aea, "irq_bypass_unregister_consumer" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xede98ec5, "intel_pt_validate_hw_cap" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0x1475d603, "xstate_get_guest_group_perm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x77f24400, "perf_register_guest_info_callbacks" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe8aa5306, "cleanup_srcu_struct" },
	{ 0x9ba9e41d, "xfer_to_guest_mode_handle_work" },
	{ 0x995d1071, "prof_on" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x9cb6dff0, "mmu_notifier_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x4a0d29f7, "fpu_free_guest_fpstate" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x88c4cec8, "preempt_notifier_register" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4d103848, "fixup_user_fault" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x9f50f32, "rcu_nocb_flush_deferred_wakeup" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa94a09bb, "mem_section" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb0abe1cf, "bpf_trace_run5" },
	{ 0xf8fe3986, "pat_pfn_immune_to_uc_mtrr" },
	{ 0xd96babb4, "interval_tree_iter_next" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xcb615150, "task_cputime_adjusted" },
	{ 0xf90f3a43, "dentry_path_raw" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x28d87421, "__srcu_read_lock" },
	{ 0xc9a4b416, "copy_to_user_nofault" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x785b4c17, "kmem_cache_create_usercopy" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x402cbbf, "preempt_notifier_inc" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0xb7c0f443, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0xe7232e0f, "user_return_notifier_unregister" },
	{ 0x57bc19d2, "down_write" },
	{ 0xf0785fc6, "fput" },
	{ 0x4688d7ec, "pvclock_gtod_unregister_notifier" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xe167dc3d, "init_srcu_struct" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x855fa0ed, "fpu_update_guest_xfd" },
	{ 0x1f0ca91d, "kobject_uevent_env" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x244ac0c2, "mark_page_accessed" },
	{ 0xdec4b7b5, "debugfs_lookup" },
	{ 0xa13e8de6, "param_ops_bint" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x1ba3c76d, "kthread_unpark" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd564cc99, "find_vma" },
	{ 0x85efc7e0, "zero_pfn" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x47d8d301, "__cond_resched_rwlock_read" },
	{ 0x311e3ba7, "unregister_shrinker" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x84069b6b, "kthread_queue_work" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa1583cb9, "get_user_pages" },
	{ 0x6bbd8324, "perf_unregister_guest_info_callbacks" },
	{ 0xdfdd520f, "param_get_uint" },
	{ 0xce36a401, "anon_inode_getfd" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc575719, "__cond_resched_rwlock_write" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0xa661084, "get_user_pages_remote" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x20cbb30a, "__percpu_counter_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xa44a1307, "interval_tree_iter_first" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x613a36c1, "perf_event_read_value" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1ceaf9a0, "cpufreq_cpu_put" },
	{ 0xe02ba436, "trace_print_hex_seq" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x273e1002, "fpu_sync_guest_vmexit_xfd_state" },
	{ 0x844d65c7, "kthread_park" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4d924f20, "memremap" },
	{ 0x3c22d93f, "bpf_trace_run8" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x1cbd92b0, "cpu_mitigations_off" },
	{ 0x14c8dfb3, "synchronize_srcu" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0x26cda94f, "e820__mapped_raw_any" },
	{ 0xc182d435, "send_sig_mceerr" },
	{ 0x6b46f3f8, "vm_mmap" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xbb12fe41, "perf_event_period" },
	{ 0xe23b37f, "alloc_cpumask_var_node" },
	{ 0xae04012c, "__vmalloc" },
	{ 0xce88c9, "perf_event_pause" },
	{ 0x37a0cba, "kfree" },
	{ 0xea5c4317, "smp_ops" },
	{ 0x9bcf9f7d, "housekeeping_enabled" },
	{ 0xfa1eb910, "unregister_syscore_ops" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x1c4150c0, "fd_install" },
	{ 0xf2b9144b, "param_set_uint" },
	{ 0x3d83bbbd, "register_shrinker" },
	{ 0x59237586, "irq_work_queue" },
	{ 0x301304c2, "__get_user_nocheck_8" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xcd81a945, "switch_fpu_return" },
	{ 0x3ba01b47, "get_compat_sigset" },
	{ 0x8fc84473, "set_user_nice" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xf8af7c22, "__put_task_struct" },
	{ 0x1057a279, "bsearch" },
	{ 0x466c14a7, "__delay" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x3135e9fa, "fpu_copy_guest_fpstate_to_uabi" },
	{ 0x355386c1, "get_pid_task" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x5b56860c, "vm_munmap" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8d5a609c, "vtime_guest_exit" },
	{ 0x51c60bea, "bpf_trace_run6" },
	{ 0x2b6731c0, "param_get_bool" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x2eb6cb1, "cgroup_attach_task_all" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xefad16d, "perf_event_create_kernel_counter" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0x63f835ba, "on_each_cpu_cond_mask" },
	{ 0x9241b358, "__static_key_slow_dec_deferred" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8e92f7c4, "static_key_slow_inc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x67955ce6, "profile_hits" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0x6988d0ca, "cpu_dr7" },
	{ 0x762b76f2, "kthread_flush_work" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xe2d2e418, "kthread_create_worker" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6f5445fe, "anon_inode_getfile" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x4e5ee273, "tick_nohz_full_mask" },
	{ 0x4fddc9de, "simple_attr_write" },
	{ 0xa08a9380, "get_user_pages_fast" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd5f3bb7b, "set_memory_encrypted" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x196614ce, "hw_breakpoint_restore" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "irqbypass");


MODULE_INFO(srcversion, "772B84270334FF01100CF3D");
