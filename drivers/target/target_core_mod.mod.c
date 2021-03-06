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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x104c672, "kernel_write" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xeb9e913d, "sgl_alloc_order" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xf3ab12d9, "configfs_undepend_item" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x44e9a829, "match_token" },
	{ 0xec01f426, "config_item_put" },
	{ 0x62eb8a7e, "filp_close" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5012a70, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x966a5c32, "configfs_depend_item" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0x11089ac7, "_ctype" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x97a57333, "crc_t10dif_update" },
	{ 0xbc9f459f, "vmap" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x9166fada, "strncpy" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9e77ad21, "config_group_init_type_name" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8c687b35, "configfs_remove_default_groups" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4e3567f7, "match_int" },
	{ 0x22b63fdd, "configfs_register_subsystem" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf0785fc6, "fput" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37bf7be3, "percpu_ref_exit" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdfbcf889, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x21075824, "__free_pages" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0xa916b694, "strnlen" },
	{ 0xe0397aa5, "config_item_get_unless_zero" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x49ad35e8, "configfs_unregister_subsystem" },
	{ 0x6f95bb84, "sbitmap_queue_init_node" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x1ed4d2eb, "percpu_ref_kill_and_confirm" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe02ba436, "trace_print_hex_seq" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0xcf2a6966, "up" },
	{ 0x24f6dc43, "config_item_get" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x81a7f541, "percpu_ref_init" },
	{ 0x6aa11aa6, "sgl_free_n_order" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x1b7be489, "config_group_init" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc91fdf58, "percpu_ref_is_zero" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x388d81e8, "filp_open" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "configfs");


MODULE_INFO(srcversion, "9B89B5DA8665B50EA934475");
