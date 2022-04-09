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
	{ 0xa39f67e5, "cdev_alloc" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xf5fa5da, "cdev_del" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdbce8bb, "media_entity_find_link" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x754d539c, "strlen" },
	{ 0x12b41126, "media_device_unregister_entity" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0xc2559893, "media_entity_get_fwnode_pad" },
	{ 0xdb773c53, "media_devnode_create" },
	{ 0x8c10ecb3, "media_graph_walk_start" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x1eeebc48, "media_get_pad_index" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdaf02d94, "device_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x64de87f1, "media_graph_walk_next" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x52d91e96, "class_unregister" },
	{ 0xe3e5213e, "media_request_object_bind" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x8c7922fd, "spi_new_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x897db409, "media_request_put" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0x97ac8144, "__class_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3b09f2ee, "cdev_add" },
	{ 0x3931120c, "media_request_get_by_fd" },
	{ 0x5660bee0, "media_device_register_entity" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xdfbcf889, "module_put" },
	{ 0x88ec40ba, "media_request_object_put" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0xe7a3485c, "i2c_new_scanned_device" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x1bfb9a7c, "media_create_pad_link" },
	{ 0x71cc0d23, "media_create_intf_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0x2df06a40, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe8856202, "media_request_object_complete" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xc23cd18b, "fwnode_graph_get_next_endpoint" },
	{ 0x5dc7222c, "media_request_object_unbind" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x776c87fd, "device_unregister" },
	{ 0xfe253ed3, "spi_unregister_device" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x7e98e773, "fwnode_graph_get_remote_endpoint" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x577e2767, "media_request_object_init" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x42acd7eb, "media_request_object_find" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x6ca0bc7b, "media_devnode_remove" },
};

MODULE_INFO(depends, "mc,i2c-core");


MODULE_INFO(srcversion, "186BE89CEB910EB8CF4003A");
