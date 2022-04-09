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
	{ 0xccf2840, "param_get_int" },
	{ 0x1e2ecbb7, "iscsit_unregister_transport" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x99f6bbc0, "iscsit_register_transport" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xbc73c6ad, "rdma_reject_msg" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0x16fb069e, "__ib_alloc_pd" },
	{ 0xcf2a6966, "up" },
	{ 0xb297eda6, "rdma_reject" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfcc29fbe, "rdma_accept" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x6856baf3, "rdma_listen" },
	{ 0xdf6289e4, "rdma_bind_addr" },
	{ 0x85d38b3b, "rdma_set_afonly" },
	{ 0x7d4bb616, "__rdma_create_kernel_id" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xb372cdf0, "target_execute_cmd" },
	{ 0x6e0f4278, "transport_generic_request_failure" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x447568d, "ib_check_mr_status" },
	{ 0xabe1e201, "iscsit_build_text_rsp" },
	{ 0x8e15c8d1, "iscsit_build_logout_rsp" },
	{ 0xde4a1ef6, "iscsit_build_task_mgt_rsp" },
	{ 0x7891c457, "iscsit_build_reject" },
	{ 0xc95035, "iscsit_logout_post_handler" },
	{ 0x6ed9c300, "iscsit_tmr_post_handler" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5a34f80, "iscsit_set_unsolicited_dataout" },
	{ 0x48d1d7ef, "iscsit_sequence_cmd" },
	{ 0x863bbbcc, "iscsit_process_scsi_cmd" },
	{ 0xd47c9d19, "iscsit_setup_scsi_cmd" },
	{ 0x55f7cd1b, "iscsit_process_text_cmd" },
	{ 0xfdaaa11d, "iscsit_setup_text_cmd" },
	{ 0x5d1a0681, "iscsit_find_cmd_from_itt" },
	{ 0xd390d3e4, "iscsit_process_nop_out" },
	{ 0xf3c9d8a1, "iscsit_setup_nop_out" },
	{ 0xebe43524, "iscsit_handle_logout_cmd" },
	{ 0x624822f4, "iscsit_check_dataout_payload" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xb90c77e9, "iscsit_check_dataout_hdr" },
	{ 0x7927bd29, "iscsit_handle_task_mgt_cmd" },
	{ 0xd612c56d, "iscsit_allocate_cmd" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcaaf18de, "rdma_rw_ctx_signature_init" },
	{ 0xa542c97d, "rdma_rw_ctx_post" },
	{ 0xfde095af, "rdma_rw_ctx_init" },
	{ 0x39dceab7, "iscsit_build_rsp_pdu" },
	{ 0x516c682c, "iscsit_build_nopin_rsp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x26552f7a, "iscsit_cause_connection_reinstatement" },
	{ 0xc23477d, "current_task" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5c1e5554, "rdma_destroy_id" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfba04b08, "ib_destroy_qp_user" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x7ea33954, "target_wait_for_sess_cmds" },
	{ 0x577d2b09, "target_stop_session" },
	{ 0xdb1fbae4, "ib_drain_qp" },
	{ 0x3556af86, "rdma_disconnect" },
	{ 0x4dc1c329, "target_put_sess_cmd" },
	{ 0x62d07e55, "iscsit_stop_dataout_timer" },
	{ 0x48444202, "iscsit_release_cmd" },
	{ 0x3d80fde7, "transport_generic_free_cmd" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf6f7fd3a, "ib_dealloc_pd_user" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xb1c9612d, "rdma_rw_ctx_destroy_signature" },
	{ 0x8c6047c9, "rdma_rw_ctx_destroy" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7464f9e3, "ib_cq_pool_put" },
	{ 0x713b4db1, "rdma_create_qp" },
	{ 0x6b9e5717, "rdma_rw_mr_factor" },
	{ 0x666d096e, "ib_cq_pool_get" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7aad950, "rdma_notify" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf2c82101, "param_set_int" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iscsi_target_mod,rdma_cm,ib_core,target_core_mod");


MODULE_INFO(srcversion, "44ED8DC0FF7721FA5CE5602");
