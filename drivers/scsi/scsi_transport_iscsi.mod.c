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
	{ 0x763bb5d5, "transport_class_register" },
	{ 0x6eb91138, "class_find_device" },
	{ 0x5b7424d5, "bus_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xba6c657e, "scsi_remove_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a4f839, "scsi_host_lookup" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x658000c8, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7de9a0a1, "attribute_container_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x353e65c2, "scsi_scan_target" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x339c0a66, "device_del" },
	{ 0xdaf02d94, "device_register" },
	{ 0x11c2bbba, "scsi_queue_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6373128a, "transport_add_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3ba33f72, "device_find_child" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x52d91e96, "class_unregister" },
	{ 0xd2b80c1f, "netlink_kernel_release" },
	{ 0xffb7c514, "ida_free" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xef6fa3c, "attribute_container_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xff2022d, "transport_class_unregister" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x97ac8144, "__class_register" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdfbcf889, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x62785328, "netlink_capable" },
	{ 0x338bb812, "scsi_target_unblock" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x5b9adb5a, "scsi_host_get" },
	{ 0x6e33c5e0, "netlink_broadcast" },
	{ 0x761527a1, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x687c6ac4, "transport_setup_device" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0x148653, "vsnprintf" },
	{ 0xb9db107a, "__scsi_init_queue" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xbd508a26, "device_for_each_child" },
	{ 0x4bea554e, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0xf7370f56, "system_state" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x53782a5d, "transport_remove_device" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9f7f8a8a, "scsi_target_block" },
	{ 0x96e91be1, "bsg_job_done" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x1d371342, "bsg_remove_queue" },
	{ 0x4f0c5982, "bsg_setup_queue" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "546EF18D0AF2038AA050D0D");
