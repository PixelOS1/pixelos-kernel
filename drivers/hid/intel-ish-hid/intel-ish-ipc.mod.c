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
	{ 0x2d3385d3, "system_wq" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x754d539c, "strlen" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x873e0964, "pci_pme_capable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x639b19c3, "pci_reset_function" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x6aead57a, "ishtp_reset_handler" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x93f05b4f, "ishtp_start" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0x9005dfbb, "ishtp_reset_compl_handler" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb2c9bd1a, "ishtp_recv" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x7483dc59, "pci_dev_present" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1b331034, "pci_pme_active" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2858815b, "ishtp_bus_remove_all_clients" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb90084b6, "ishtp_send_suspend" },
	{ 0x616b5d6a, "ishtp_send_resume" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x148653, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xae1bf777, "ishtp_device_init" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1344d7e6, "acpi_enable_gpe" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "intel-ishtp");

MODULE_ALIAS("pci:v00008086d000022D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D35sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A37Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A135sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AF8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051FCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "45531583D6FFE092FF08025");
