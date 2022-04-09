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
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xa2df3cd, "iscsi_host_remove" },
	{ 0xee111615, "param_ops_int" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xf6f7fd3a, "ib_dealloc_pd_user" },
	{ 0xad28f84f, "iscsi_queuecommand" },
	{ 0xcb97d4b7, "iscsi_conn_stop" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb3645290, "iscsi_eh_recover_target" },
	{ 0x4b5a413, "iscsi_unregister_transport" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0xf660caf5, "iscsi_session_teardown" },
	{ 0x5c1e5554, "rdma_destroy_id" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcd3e5f93, "ib_dma_virt_map_sg" },
	{ 0x9753f9e6, "iscsi_host_add" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8736dbba, "iscsi_host_alloc" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x4087f8dd, "iscsi_lookup_endpoint" },
	{ 0x96aae811, "iscsi_itt_to_ctask" },
	{ 0x56f6af8f, "rdma_connect_locked" },
	{ 0x666d096e, "ib_cq_pool_get" },
	{ 0x37a99701, "ib_alloc_mr" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1562cd53, "iscsi_conn_unbind" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x80f1d3f2, "iscsi_conn_start" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x447568d, "ib_check_mr_status" },
	{ 0x6ca0d38a, "rdma_destroy_qp" },
	{ 0x35bcd5b3, "iscsi_conn_send_pdu" },
	{ 0x8f26b1e4, "iscsi_session_get_param" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb5ecec2, "iscsi_host_set_param" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x6dfe92d8, "iscsi_conn_teardown" },
	{ 0xac383bbc, "iscsi_put_task" },
	{ 0xbe6021ec, "iscsi_host_free" },
	{ 0x89959250, "iscsi_conn_get_param" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa998ae7d, "iscsi_destroy_endpoint" },
	{ 0x7464f9e3, "ib_cq_pool_put" },
	{ 0xf88cf3ce, "init_net" },
	{ 0xac2adb55, "ib_alloc_mr_integrity" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe7af8c95, "ib_map_mr_sg" },
	{ 0x713b4db1, "rdma_create_qp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x33e668f4, "iscsi_set_param" },
	{ 0xa1aa83c6, "ib_unregister_event_handler" },
	{ 0x100d252d, "rdma_resolve_route" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xd04820ea, "ib_register_event_handler" },
	{ 0x7d4bb616, "__rdma_create_kernel_id" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdfdd520f, "param_get_uint" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xcb6b92d7, "iscsi_register_transport" },
	{ 0x8340b409, "iscsi_eh_device_reset" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xd6c76bb9, "ib_drain_sq" },
	{ 0x92327444, "iscsi_prep_data_out_pdu" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3556af86, "rdma_disconnect" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x208dd77a, "iscsi_complete_pdu" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x78eafc1a, "iscsi_conn_failure" },
	{ 0x6d343dff, "ib_query_qp" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0xaa5b4517, "iscsi_eh_cmd_timed_out" },
	{ 0x60ff3905, "iscsi_suspend_queue" },
	{ 0xdb105065, "ib_dereg_mr_user" },
	{ 0xc09f0993, "iscsi_create_endpoint" },
	{ 0x302ce418, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf2b9144b, "param_set_uint" },
	{ 0x709a34c4, "ib_map_mr_sg_pi" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x728e56d1, "rdma_resolve_addr" },
	{ 0x4036c508, "iscsi_session_setup" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x45c25bc7, "iscsi_host_get_param" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x16fb069e, "__ib_alloc_pd" },
	{ 0xcf1fda2a, "iscsi_conn_bind" },
	{ 0x8e34c292, "iscsi_target_alloc" },
	{ 0xdbb1f354, "iscsi_put_endpoint" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0xbc73c6ad, "rdma_reject_msg" },
	{ 0x96b6d3fa, "iscsi_session_recovery_timedout" },
	{ 0xd26202c3, "iscsi_conn_setup" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "libiscsi,ib_core,scsi_transport_iscsi,rdma_cm");


MODULE_INFO(srcversion, "2629CDD8ECA58ED1ABF1503");
