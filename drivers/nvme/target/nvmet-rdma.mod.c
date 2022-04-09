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
	{ 0xfde095af, "rdma_rw_ctx_init" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0xccf2840, "param_get_int" },
	{ 0x5f94d1a4, "nvmet_req_uninit" },
	{ 0xf6f7fd3a, "ib_dealloc_pd_user" },
	{ 0xa58d1297, "nvmet_ctrl_fatal_error" },
	{ 0xdb1fbae4, "ib_drain_qp" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfcc29fbe, "rdma_accept" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0xfb0cc67c, "nvmet_sq_init" },
	{ 0x5c1e5554, "rdma_destroy_id" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf2c82101, "param_set_int" },
	{ 0x7fcef2b6, "nvmet_req_alloc_sgls" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x666d096e, "ib_cq_pool_get" },
	{ 0xcaaf18de, "rdma_rw_ctx_signature_init" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xfba04b08, "ib_destroy_qp_user" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x447568d, "ib_check_mr_status" },
	{ 0x6ca0d38a, "rdma_destroy_qp" },
	{ 0x6856baf3, "rdma_listen" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x31de1a15, "inet_pton_with_scope" },
	{ 0xffb7c514, "ida_free" },
	{ 0x85d38b3b, "rdma_set_afonly" },
	{ 0x7aad950, "rdma_notify" },
	{ 0x22df349f, "nvmet_register_transport" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7464f9e3, "ib_cq_pool_put" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfad60dc6, "rdma_rw_ctx_wrs" },
	{ 0x8f933fb0, "ib_create_srq_user" },
	{ 0x713b4db1, "rdma_create_qp" },
	{ 0x4ee52556, "nvmet_req_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd1a7a58, "ib_register_client" },
	{ 0xdf6289e4, "rdma_bind_addr" },
	{ 0x21075824, "__free_pages" },
	{ 0x4859faf3, "nvmet_unregister_transport" },
	{ 0xb1c9612d, "rdma_rw_ctx_destroy_signature" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7d4bb616, "__rdma_create_kernel_id" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x12459cd6, "nvmet_sq_destroy" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x88445a61, "ib_destroy_srq_user" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3556af86, "rdma_disconnect" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb297eda6, "rdma_reject" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0xa542c97d, "rdma_rw_ctx_post" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8dcb36c, "nvmet_req_free_sgls" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x8e7b8558, "nvmet_req_complete" },
	{ 0x16fb069e, "__ib_alloc_pd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6b9e5717, "rdma_rw_mr_factor" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0x8c6047c9, "rdma_rw_ctx_destroy" },
	{ 0xbc73c6ad, "rdma_reject_msg" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xc906ef7d, "ib_unregister_client" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "ib_core,nvmet,rdma_cm");


MODULE_INFO(srcversion, "9E6AA9BC9B174125AFDDBA8");
