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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb29ba1da, "ib_create_ah_from_wc" },
	{ 0x9eedc196, "ib_modify_mad" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x39b6939b, "ib_register_mad_agent" },
	{ 0x9f666988, "ib_free_recv_mad" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5b3e282f, "xa_store" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16befa28, "rdma_find_gid" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa02ed6c3, "rdma_move_ah_attr" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x745a981, "xa_erase" },
	{ 0x966d4f3a, "ib_port_unregister_client_groups" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0xca0b8641, "ib_free_send_mad" },
	{ 0xf5461416, "rdma_destroy_ah_user" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb04a43ad, "__xa_alloc_cyclic" },
	{ 0x32f0f57c, "rdma_put_gid_attr" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7e41555, "ib_get_cached_pkey" },
	{ 0xc5067ebf, "ib_set_client_data" },
	{ 0xe0f60c6d, "rdma_destroy_ah_attr" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xaf1178a0, "ib_create_send_mad" },
	{ 0x33758ecf, "ib_post_send_mad" },
	{ 0x2f5a3ead, "ib_unregister_mad_agent" },
	{ 0xd1a7a58, "ib_register_client" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x43e11534, "ib_find_cached_pkey" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x7fffe376, "ib_init_ah_attr_from_wc" },
	{ 0x9b4f8716, "rdma_create_ah" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xd449e898, "ib_modify_port" },
	{ 0x197edd08, "ib_port_register_client_groups" },
	{ 0x555d2319, "rdma_query_gid" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xa6257a2f, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xcceb69c1, "ib_init_ah_attr_from_path" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc906ef7d, "ib_unregister_client" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "33D0F288D91F1B3B7D833B2");
