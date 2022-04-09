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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x71dfc095, "acpi_walk_resources" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xe4345174, "single_open" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x9b02585d, "single_release" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xdc966f00, "acpi_bus_get_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd349d253, "seq_printf" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94216657, "seq_read" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x5012a70, "pv_ops" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb578fc5, "memset" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x133536b8, "register_netdev" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6aea6a51, "dev_close" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86814848, "ether_setup" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0xdcf6bbc2, "dev_trans_start" },
	{ 0xedc03953, "iounmap" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xd5c12924, "vmalloc_to_page" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xa0ead61d, "__napi_alloc_skb" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x24e48d13, "skb_put" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xda096e40, "acpi_device_hid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc3bc72ad, "trace_print_array_seq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C02:*");

MODULE_INFO(srcversion, "77F796D2F990FDB65B94003");
