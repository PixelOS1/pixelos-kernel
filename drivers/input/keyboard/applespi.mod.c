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
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc8a016aa, "param_ops_string" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x3a6a0e57, "debugfs_create_bool" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb2a8f11, "efivar_entry_get" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xfa227d2f, "device_wakeup_enable" },
	{ 0xb97f7045, "acpi_install_gpe_handler" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb25a454e, "acpi_dev_get_property" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa07a37f0, "memchr" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x331337dc, "input_event" },
	{ 0xb670b8a1, "input_mt_assign_slots" },
	{ 0x19df99b9, "acpi_finish_gpe" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x1344d7e6, "acpi_enable_gpe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x232b032c, "device_wakeup_disable" },
	{ 0x9d099a39, "acpi_remove_gpe_handler" },
	{ 0xa4faf62a, "acpi_disable_gpe" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa916b694, "strnlen" },
	{ 0x8371509, "nonseekable_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0xb1b6121c, "spi_async" },
	{ 0xbd6841d4, "crc16" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x81b03377, "efivar_entry_set_safe" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xe02ba436, "trace_print_hex_seq" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:APP000D:*");

MODULE_INFO(srcversion, "08D4911864E8E9314DA6E01");
