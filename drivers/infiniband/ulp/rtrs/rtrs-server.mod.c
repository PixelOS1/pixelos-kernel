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
	{ 0x2ec97348, "kobject_put" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4df9f4a8, "kobject_get" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xec3a0935, "rtrs_iu_alloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe84051f1, "rtrs_send_hb_ack" },
	{ 0x349cba85, "strchr" },
	{ 0xa5f585dc, "rtrs_stop_hb" },
	{ 0x58976fb7, "rtrs_init_hb" },
	{ 0xee111615, "param_ops_int" },
	{ 0x44b3dab4, "rtrs_ib_dev_put" },
	{ 0xac844fd8, "rtrs_cq_qp_create" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xdb1fbae4, "ib_drain_qp" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0xf8ee194c, "rtrs_start_hb" },
	{ 0xfcc29fbe, "rdma_accept" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5c1e5554, "rdma_destroy_id" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb7208e8a, "kobject_del" },
	{ 0xcd3e5f93, "ib_dma_virt_map_sg" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x5b01e41d, "sockaddr_to_str" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa2c56cf2, "kobject_create_and_add" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x37a99701, "ib_alloc_mr" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x339c0a66, "device_del" },
	{ 0xe19dc2c3, "sysfs_remove_file_self" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x6856baf3, "rdma_listen" },
	{ 0xa980d013, "kobject_init_and_add" },
	{ 0xe2017442, "rtrs_iu_post_recv" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x630a7ea3, "rtrs_cq_qp_destroy" },
	{ 0x170929f6, "kobj_sysfs_ops" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf5c5e04e, "device_add" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x37bf7be3, "percpu_ref_exit" },
	{ 0xe7af8c95, "ib_map_mr_sg" },
	{ 0x5dce21cd, "rtrs_iu_free" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd1a7a58, "ib_register_client" },
	{ 0xdf6289e4, "rdma_bind_addr" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x67f155a7, "rtrs_rdma_dev_pd_deinit" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7d4bb616, "__rdma_create_kernel_id" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2bc38ef, "rtrs_ib_dev_find_or_add" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1953c958, "mempool_create" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xfa545232, "rtrs_rdma_dev_pd_init" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3556af86, "rdma_disconnect" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1ed4d2eb, "percpu_ref_kill_and_confirm" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb297eda6, "rdma_reject" },
	{ 0x16e6d67f, "get_device" },
	{ 0x383393f9, "rtrs_iu_post_send" },
	{ 0xdb105065, "ib_dereg_mr_user" },
	{ 0x23eb0d10, "rtrs_post_recv_empty" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x4195254f, "class_destroy" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x81a7f541, "percpu_ref_init" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc906ef7d, "ib_unregister_client" },
	{ 0x242a8646, "rtrs_addr_to_str" },
};

MODULE_INFO(depends, "rtrs-core,ib_core,rdma_cm");


MODULE_INFO(srcversion, "2C2123B6D12EEB7C5282604");
