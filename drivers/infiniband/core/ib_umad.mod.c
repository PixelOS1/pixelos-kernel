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
	{ 0xacb32f2d, "cdev_init" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x39b6939b, "ib_register_mad_agent" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0x9f666988, "ib_free_recv_mad" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x8371509, "nonseekable_open" },
	{ 0x18ca6e27, "ib_get_rmpp_segment" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xca0b8641, "ib_free_send_mad" },
	{ 0xf5461416, "rdma_destroy_ah_user" },
	{ 0x5d6c6cec, "rdma_create_user_ah" },
	{ 0x613b1e2e, "ib_is_mad_class_rmpp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xc23477d, "current_task" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x52d91e96, "class_unregister" },
	{ 0x85ab8b90, "ib_mad_kernel_rmpp_agent" },
	{ 0xffb7c514, "ida_free" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x97ac8144, "__class_register" },
	{ 0xc5067ebf, "ib_set_client_data" },
	{ 0xe0f60c6d, "rdma_destroy_ah_attr" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xaf1178a0, "ib_create_send_mad" },
	{ 0x33758ecf, "ib_post_send_mad" },
	{ 0x4e155af0, "ib_response_mad" },
	{ 0x2f5a3ead, "ib_unregister_mad_agent" },
	{ 0xd1a7a58, "ib_register_client" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1fdba44b, "cdev_device_add" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7fffe376, "ib_init_ah_attr_from_wc" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6a4c3f75, "rdma_dev_access_netns" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd449e898, "ib_modify_port" },
	{ 0x37a0cba, "kfree" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0xcf2a6966, "up" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x60805a2, "cdev_device_del" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x787ccc4c, "ib_get_mad_data_offset" },
	{ 0xc906ef7d, "ib_unregister_client" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "DB3859597A7081697C6E3D6");
