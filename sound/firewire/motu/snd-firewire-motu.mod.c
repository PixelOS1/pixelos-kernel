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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0x3b081a8, "amdtp_domain_start" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd98b2cc0, "fw_iso_resources_update" },
	{ 0x7549c36, "driver_register" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7486e70, "amdtp_domain_destroy" },
	{ 0xab68f087, "amdtp_domain_stream_pcm_ack" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x8505272c, "snd_pcm_hw_constraint_msbits" },
	{ 0x6ea00aa2, "snd_info_create_card_entry" },
	{ 0xdef8a2ac, "fw_iso_resources_init" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3ff92c06, "fw_bus_type" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0xd7ad819, "snd_rawmidi_set_ops" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x66d0ccc1, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0x46db7366, "amdtp_stream_get_max_payload" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xef9a91b9, "amdtp_domain_add_stream" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xf0d06086, "amdtp_stream_destroy" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6721d0f8, "snd_hwdep_new" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0xe62ce96e, "amdtp_domain_stop" },
	{ 0xed0d181e, "fw_iso_resources_destroy" },
	{ 0x967336a7, "snd_pcm_hw_rule_add" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xe9969226, "amdtp_stream_pcm_prepare" },
	{ 0xd4f4bf56, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x817d2986, "snd_pcm_set_sync" },
	{ 0x6db8a55, "fw_iso_resources_allocate" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x931b40a3, "amdtp_domain_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xda6af6f7, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x12248497, "amdtp_domain_stream_pcm_pointer" },
	{ 0xb2e57b66, "amdtp_stream_set_parameters" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0x37022a22, "amdtp_stream_init" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x6ce7486c, "amdtp_stream_add_pcm_hw_constraints" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xffa7e5cf, "snd_fw_transaction" },
	{ 0xc5929162, "snd_rawmidi_transmit" },
	{ 0x69255f54, "snd_pcm_hw_limit_rates" },
	{ 0x1a7e5100, "fw_iso_resources_free" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xfd95b68d, "snd_rawmidi_receive" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc3bc72ad, "trace_print_array_seq" },
	{ 0x30412b2, "fw_send_response" },
};

MODULE_INFO(depends, "firewire-core,snd-firewire-lib,snd-pcm,snd,snd-rawmidi,snd-hwdep");

MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000001*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000002*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000003*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000005*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000009*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver0000000D*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver0000000F*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000015*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000019*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver0000001B*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000030*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000035*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000033*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000039*");
MODULE_ALIAS("ieee1394:ven000001F2mo*sp000001F2ver00000045*");

MODULE_INFO(srcversion, "F282BDFCAC0C85EF4FCDC4E");
