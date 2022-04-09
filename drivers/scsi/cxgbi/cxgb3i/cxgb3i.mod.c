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
	{ 0xee111615, "param_ops_int" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xaa5b4517, "iscsi_eh_cmd_timed_out" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x8e34c292, "iscsi_target_alloc" },
	{ 0xb3645290, "iscsi_eh_recover_target" },
	{ 0x8340b409, "iscsi_eh_device_reset" },
	{ 0x302ce418, "iscsi_eh_abort" },
	{ 0xad28f84f, "iscsi_queuecommand" },
	{ 0xef346615, "cxgbi_attr_is_visible" },
	{ 0xd368492a, "cxgbi_ep_disconnect" },
	{ 0x4cc9d7eb, "cxgbi_ep_poll" },
	{ 0xf8703213, "cxgbi_ep_connect" },
	{ 0x96b6d3fa, "iscsi_session_recovery_timedout" },
	{ 0x66fbfbf2, "cxgbi_parse_pdu_itt" },
	{ 0x241174f0, "cxgbi_conn_init_pdu" },
	{ 0xf57b2a0b, "cxgbi_conn_xmit_pdu" },
	{ 0x4fbcd14, "cxgbi_conn_alloc_pdu" },
	{ 0x1015440, "cxgbi_cleanup_task" },
	{ 0x6745dcc3, "iscsi_tcp_task_xmit" },
	{ 0x3375d515, "iscsi_tcp_task_init" },
	{ 0x580643d8, "cxgbi_get_conn_stats" },
	{ 0x35bcd5b3, "iscsi_conn_send_pdu" },
	{ 0xa0103c12, "cxgbi_set_host_param" },
	{ 0x89a1f1ed, "cxgbi_get_host_param" },
	{ 0x8f26b1e4, "iscsi_session_get_param" },
	{ 0x89959250, "iscsi_conn_get_param" },
	{ 0xa6037d43, "cxgbi_get_ep_param" },
	{ 0xc825bac1, "cxgbi_set_conn_param" },
	{ 0x68e60db6, "iscsi_tcp_conn_teardown" },
	{ 0xcb97d4b7, "iscsi_conn_stop" },
	{ 0x80f1d3f2, "iscsi_conn_start" },
	{ 0xea70fa78, "cxgbi_bind_conn" },
	{ 0x1562cd53, "iscsi_conn_unbind" },
	{ 0xb20c4d0a, "cxgbi_create_conn" },
	{ 0x69cf48f0, "cxgbi_destroy_session" },
	{ 0xa71946ea, "cxgbi_create_session" },
	{ 0xf59fb481, "cxgbi_iscsi_cleanup" },
	{ 0x7fdb6004, "cxgbi_device_unregister_all" },
	{ 0x3ffe90fe, "cxgb3_unregister_client" },
	{ 0xc702c99c, "cxgb3_register_client" },
	{ 0xba0184d6, "cxgbi_iscsi_init" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0xb84d4006, "cxgbi_sock_select_mss" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0xe8d826ec, "cxgb3_alloc_atid" },
	{ 0x4dcafd6, "t3_l2t_get" },
	{ 0xd60bdd5a, "t3_l2e_free" },
	{ 0x89497f0d, "cxgb3_remove_tid" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf5d67e4b, "cxgbi_sock_purge_wr_queue" },
	{ 0x7ee75ef6, "cxgb3_free_atid" },
	{ 0xfdbf76a7, "cxgbi_conn_tx_open" },
	{ 0x80bdd89a, "cxgbi_sock_established" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa774c93f, "cxgb3_insert_tid" },
	{ 0x2d0021a4, "cxgbi_sock_free_cpl_skbs" },
	{ 0x8c558ba0, "cxgbi_sock_closed" },
	{ 0x37a0cba, "kfree" },
	{ 0x6cda21ee, "cxgbi_sock_fail_act_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1d651e91, "cxgb3_queue_tid_release" },
	{ 0x4ea591a4, "___pskb_trim" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x424dca7, "cxgbi_conn_pdu_ready" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc011af75, "cxgbi_ddp_set_one_ppod" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x67746bb1, "cxgbi_sock_skb_entail" },
	{ 0xe345c1ca, "t3_l2t_send_slow" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf1bae83c, "cxgbi_hbas_add" },
	{ 0x86455e51, "cxgbi_device_portmap_create" },
	{ 0x87c7357e, "cxgbi_ddp_ppm_setup" },
	{ 0x1bdaafe1, "cxgbi_tagmask_set" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7f090b5e, "cxgbi_device_register" },
	{ 0x46632dd4, "cxgbi_sock_rcv_peer_close" },
	{ 0xbb3facc4, "cxgbi_sock_rcv_abort_rpl" },
	{ 0x1e06b4ca, "cxgbi_sock_rcv_close_conn_rpl" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x4d5228ba, "cxgbi_sock_act_open_req_arp_failure" },
	{ 0x1c6118ab, "cxgb3_ofld_send" },
	{ 0x49711140, "cxgbi_device_unregister" },
	{ 0x2f435914, "cxgbi_device_find_by_lldev" },
	{ 0x92997ed8, "_printk" },
	{ 0xd931638b, "__kfree_skb" },
	{ 0x54becad0, "cxgbi_sock_rcv_wr_ack" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libiscsi,libcxgbi,libiscsi_tcp,cxgb3,libcxgb");


MODULE_INFO(srcversion, "972476221D06EA01D4225EC");
