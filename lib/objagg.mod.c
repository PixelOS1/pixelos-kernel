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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xffb7c514, "ida_free" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb7c0f443, "sort" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3E88BF9D3A1FBAD5CC53477");
