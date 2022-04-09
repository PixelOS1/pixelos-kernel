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
	{ 0x7381287f, "trace_handle_return" },
	{ 0x5211fb7a, "fw_iso_context_flush_completions" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0x8505272c, "snd_pcm_hw_constraint_msbits" },
	{ 0xcb64725, "snd_pcm_stop_xrun" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x93d4aa26, "fw_iso_context_start" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x187adfc5, "snd_pcm_period_elapsed_under_stream_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe80c9ac2, "fw_iso_resource_manage" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x86468d44, "fw_rcode_string" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7d18b4af, "fw_iso_buffer_destroy" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x289445f2, "fw_iso_context_queue" },
	{ 0x967336a7, "snd_pcm_hw_rule_add" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xd4f4bf56, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3c22d93f, "bpf_trace_run8" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x589aa2ed, "fw_iso_context_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xda6af6f7, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x82fde540, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xc5929162, "snd_rawmidi_transmit" },
	{ 0xb9610d34, "fw_iso_buffer_init" },
	{ 0xfd95b68d, "snd_rawmidi_receive" },
	{ 0x962c98ce, "fw_run_transaction" },
	{ 0xc3bc72ad, "trace_print_array_seq" },
	{ 0x6b2a837a, "fw_iso_context_destroy" },
};

MODULE_INFO(depends, "firewire-core,snd-pcm,snd-rawmidi");


MODULE_INFO(srcversion, "5A25CFD78BCBA6A70E5EC6A");
