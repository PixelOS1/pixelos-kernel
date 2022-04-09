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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x47665861, "__nvme_check_ready" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xa5abf0ca, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x81eb278f, "nvme_reset_ctrl" },
	{ 0x349cba85, "strchr" },
	{ 0x33be61c0, "nvme_init_ctrl_finish" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xdbfb38b2, "nvme_stop_ctrl" },
	{ 0xa147db67, "blk_mq_tagset_busy_iter" },
	{ 0x606db81c, "blk_mq_start_request" },
	{ 0xe743afb2, "nvmf_register_transport" },
	{ 0xee62daee, "nvme_start_admin_queue" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7b96e368, "nvme_set_queue_count" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x5e9508fa, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5fb8ea83, "nvme_complete_async_event" },
	{ 0x6c9047c8, "nvmf_should_reconnect" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1b9e2f5c, "nvme_stop_admin_queue" },
	{ 0x2a757cf2, "nvmf_reg_write32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7de8ba75, "blk_mq_update_nr_hw_queues" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa926a4d, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x4813f85c, "nvme_enable_ctrl" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x5c021406, "nvmf_connect_admin_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x49224181, "nvme_reset_wq" },
	{ 0x75587220, "blk_mq_free_tag_set" },
	{ 0x52d91e96, "class_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc3ee5371, "nvmf_reg_read64" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9166fada, "strncpy" },
	{ 0xed759704, "__blk_rq_map_sg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xf91ecd2b, "blk_sync_queue" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dce8ff3, "device_create" },
	{ 0x97ac8144, "__class_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1f0ca91d, "kobject_uevent_env" },
	{ 0xa8d7b477, "nvme_fail_nonready_command" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5ab4f2b8, "nvme_init_ctrl" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6a404cf4, "nvme_change_ctrl_state" },
	{ 0xa916b694, "strnlen" },
	{ 0x761527a1, "put_device" },
	{ 0x1eabbc0e, "nvmf_unregister_transport" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xce77f777, "nvme_cleanup_cmd" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x1317d136, "nvmf_get_address" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xce226563, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0xa7361b71, "nvme_delete_ctrl" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf95d12a8, "nvmf_reg_read32" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x8b835b1c, "nvmf_connect_io_queue" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x833deb75, "nvme_start_ctrl" },
	{ 0x1a77a0dd, "nvme_setup_cmd" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x5887ef7f, "blk_mq_complete_request_remote" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5f492db, "nvme_start_queues" },
	{ 0x49e2fc05, "blk_mq_tagset_wait_completed_request" },
	{ 0x51c659eb, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x2730bcf1, "nvme_complete_rq" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x4ffc8f73, "nvme_uninit_ctrl" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x80555e92, "nvme_sync_io_queues" },
};

MODULE_INFO(depends, "nvme-core,nvme-fabrics");


MODULE_INFO(srcversion, "903EF011C8CE1F42ED4D515");
