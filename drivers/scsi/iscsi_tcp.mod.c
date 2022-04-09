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
	{ 0x6432e2b9, "__SCK__tp_func_iscsi_dbg_sw_tcp" },
	{ 0xaa5b4517, "iscsi_eh_cmd_timed_out" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x8e34c292, "iscsi_target_alloc" },
	{ 0xb3645290, "iscsi_eh_recover_target" },
	{ 0x8340b409, "iscsi_eh_device_reset" },
	{ 0x302ce418, "iscsi_eh_abort" },
	{ 0xad28f84f, "iscsi_queuecommand" },
	{ 0x96b6d3fa, "iscsi_session_recovery_timedout" },
	{ 0x642dc039, "iscsi_tcp_cleanup_task" },
	{ 0x6745dcc3, "iscsi_tcp_task_xmit" },
	{ 0x3375d515, "iscsi_tcp_task_init" },
	{ 0x35bcd5b3, "iscsi_conn_send_pdu" },
	{ 0xb5ecec2, "iscsi_host_set_param" },
	{ 0x8f26b1e4, "iscsi_session_get_param" },
	{ 0x80f1d3f2, "iscsi_conn_start" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xee111615, "param_ops_int" },
	{ 0x4b5a413, "iscsi_unregister_transport" },
	{ 0xcb6b92d7, "iscsi_register_transport" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x95ecfe41, "crypto_alloc_ahash" },
	{ 0x726ce6ec, "iscsi_tcp_conn_setup" },
	{ 0x45c25bc7, "iscsi_host_get_param" },
	{ 0xcb97d4b7, "iscsi_conn_stop" },
	{ 0xb0e604e0, "iscsi_suspend_tx" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x68e60db6, "iscsi_tcp_conn_teardown" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x82b24054, "kernel_sock_shutdown" },
	{ 0xd3fb201b, "tcp_read_sock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x87f244b9, "sk_free" },
	{ 0x264ac608, "kernel_getsockname" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x2634450a, "kernel_getpeername" },
	{ 0x89959250, "iscsi_conn_get_param" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xdf515c49, "__SCT__tp_func_iscsi_dbg_sw_tcp" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa7dadcd6, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0x35d93880, "blk_queue_dma_alignment" },
	{ 0x92997ed8, "_printk" },
	{ 0xba121ed4, "iscsi_tcp_r2tpool_alloc" },
	{ 0x4036c508, "iscsi_session_setup" },
	{ 0x9753f9e6, "iscsi_host_add" },
	{ 0xc51f32f1, "iscsi_host_get_max_scsi_cmds" },
	{ 0x8736dbba, "iscsi_host_alloc" },
	{ 0xbe6021ec, "iscsi_host_free" },
	{ 0xa2df3cd, "iscsi_host_remove" },
	{ 0xf660caf5, "iscsi_session_teardown" },
	{ 0x6f9a7716, "iscsi_tcp_r2tpool_free" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0xd0ea4f86, "iscsi_tcp_recv_skb" },
	{ 0xc0820b4d, "iscsi_conn_queue_work" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xf0785fc6, "fput" },
	{ 0xbc96e96c, "iscsi_tcp_hdr_recv_prep" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x35be7868, "sock_no_linger" },
	{ 0x8a24cbc9, "sk_set_memalloc" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xcf1fda2a, "iscsi_conn_bind" },
	{ 0x68523297, "sockfd_lookup" },
	{ 0x33cf3513, "iscsi_tcp_set_max_r2t" },
	{ 0xfa225959, "sock_no_sendpage" },
	{ 0x33e668f4, "iscsi_set_param" },
	{ 0x9b52d2e0, "iscsi_tcp_conn_get_stats" },
	{ 0x78eafc1a, "iscsi_conn_failure" },
	{ 0xc23477d, "current_task" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdb4f5ea9, "iscsi_tcp_segment_unmap" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7e478053, "kernel_sendmsg" },
	{ 0x922033ae, "iscsi_tcp_segment_done" },
	{ 0xe6658e9d, "iscsi_tcp_dgst_header" },
	{ 0xf1171329, "iscsi_segment_seek_sg" },
	{ 0x64e0c302, "iscsi_segment_init_linear" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x29387061, "iscsi_dbg_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "scsi_transport_iscsi,libiscsi,libiscsi_tcp");


MODULE_INFO(srcversion, "449F6AA3574B939CE579996");
