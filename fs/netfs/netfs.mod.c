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
	{ 0x7381287f, "trace_handle_return" },
	{ 0xebc19666, "folio_wait_private_2_killable" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xca1e67a6, "iov_iter_xarray" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xe0ee4361, "iov_iter_zero" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3b8c3eab, "folio_end_private_2" },
	{ 0xfb578fc5, "memset" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xc23477d, "current_task" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4c033e77, "readahead_expand" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xfac1482f, "__filemap_get_folio" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x4dce6497, "swapcache_mapping" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0xde09a94d, "xas_find" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4b58090f, "folio_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x9eedd85, "__page_file_index" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C69A58C1C7F8CA760AF2C6D");
