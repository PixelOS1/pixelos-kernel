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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x47665861, "__nvme_check_ready" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa5abf0ca, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0x33be61c0, "nvme_init_ctrl_finish" },
	{ 0xdbfb38b2, "nvme_stop_ctrl" },
	{ 0xa147db67, "blk_mq_tagset_busy_iter" },
	{ 0x606db81c, "blk_mq_start_request" },
	{ 0xe743afb2, "nvmf_register_transport" },
	{ 0xee62daee, "nvme_start_admin_queue" },
	{ 0x441d40d3, "nvme_shutdown_ctrl" },
	{ 0x7b96e368, "nvme_set_queue_count" },
	{ 0x5e9508fa, "nvme_stop_queues" },
	{ 0x5fb8ea83, "nvme_complete_async_event" },
	{ 0xfb0cc67c, "nvmet_sq_init" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1b9e2f5c, "nvme_stop_admin_queue" },
	{ 0x2a757cf2, "nvmf_reg_write32" },
	{ 0x7de8ba75, "blk_mq_update_nr_hw_queues" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4cf6f2df, "blk_mq_hctx_set_fq_lock_class" },
	{ 0xa926a4d, "blk_mq_init_queue" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4813f85c, "nvme_enable_ctrl" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x5c021406, "nvmf_connect_admin_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x75587220, "blk_mq_free_tag_set" },
	{ 0xc3ee5371, "nvmf_reg_read64" },
	{ 0xed759704, "__blk_rq_map_sg" },
	{ 0x22df349f, "nvmet_register_transport" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xa8d7b477, "nvme_fail_nonready_command" },
	{ 0x4ee52556, "nvmet_req_init" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0x5ab4f2b8, "nvme_init_ctrl" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6a404cf4, "nvme_change_ctrl_state" },
	{ 0x4859faf3, "nvmet_unregister_transport" },
	{ 0x761527a1, "put_device" },
	{ 0x1eabbc0e, "nvmf_unregister_transport" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xce77f777, "nvme_cleanup_cmd" },
	{ 0x92997ed8, "_printk" },
	{ 0xaa9634be, "nvme_cancel_request" },
	{ 0x12459cd6, "nvmet_sq_destroy" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x1317d136, "nvmf_get_address" },
	{ 0xce226563, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa7361b71, "nvme_delete_ctrl" },
	{ 0xf95d12a8, "nvmf_reg_read32" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b835b1c, "nvmf_connect_io_queue" },
	{ 0x833deb75, "nvme_start_ctrl" },
	{ 0x1a77a0dd, "nvme_setup_cmd" },
	{ 0x5887ef7f, "blk_mq_complete_request_remote" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x49e2fc05, "blk_mq_tagset_wait_completed_request" },
	{ 0x51c659eb, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x2730bcf1, "nvme_complete_rq" },
	{ 0x4ffc8f73, "nvme_uninit_ctrl" },
};

MODULE_INFO(depends, "nvme-core,nvme-fabrics,nvmet");


MODULE_INFO(srcversion, "037859B428B92F9CD84569B");
