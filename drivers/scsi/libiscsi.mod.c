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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd3a678c, "__tracepoint_iscsi_dbg_eh" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0xc3579057, "iscsi_block_session" },
	{ 0xdc6f0e30, "iscsi_put_conn" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x4fd193b3, "iscsi_remove_session" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x1f17f1f1, "iscsi_get_conn" },
	{ 0xc72f7472, "iscsi_unblock_session" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xef67ddc1, "iscsi_add_session" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf7e749fb, "__SCT__tp_func_iscsi_dbg_eh" },
	{ 0xeb083202, "__SCK__tp_func_iscsi_dbg_eh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x681451f, "iscsi_recv_pdu" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3e818e01, "iscsi_create_conn" },
	{ 0x886e2a58, "flush_signals" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xa2499060, "__tracepoint_iscsi_dbg_session" },
	{ 0xdfbcf889, "module_put" },
	{ 0x79839831, "iscsi_destroy_conn" },
	{ 0x5b9adb5a, "scsi_host_get" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x53b813b1, "iscsi_conn_error_event" },
	{ 0x1000e51, "schedule" },
	{ 0x52575134, "__SCT__tp_func_iscsi_dbg_session" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x13bbc1c7, "__SCK__tp_func_iscsi_dbg_conn" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7f870497, "__SCK__tp_func_iscsi_dbg_session" },
	{ 0xf7370f56, "system_state" },
	{ 0x7b1457b7, "iscsi_free_session" },
	{ 0xaeafaa63, "scsi_build_sense" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x29387061, "iscsi_dbg_trace" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xadba374b, "__tracepoint_iscsi_dbg_conn" },
	{ 0x15dc8bab, "__SCT__tp_func_iscsi_dbg_conn" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xb325a4dd, "iscsi_host_for_each_session" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xbb229a50, "iscsi_session_chkready" },
	{ 0x89a2b630, "iscsi_alloc_session" },
};

MODULE_INFO(depends, "scsi_transport_iscsi");


MODULE_INFO(srcversion, "766407113BAA08886E0E6CF");
