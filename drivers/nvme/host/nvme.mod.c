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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5c26a53b, "wait_for_completion_io_timeout" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x47665861, "__nvme_check_ready" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xd1d1cf1a, "nvme_get_features" },
	{ 0xa5abf0ca, "blk_cleanup_queue" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x81eb278f, "nvme_reset_ctrl" },
	{ 0x33be61c0, "nvme_init_ctrl_finish" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb2cd868d, "pci_free_p2pmem" },
	{ 0xee111615, "param_ops_int" },
	{ 0xacb81e38, "pci_sriov_configure_simple" },
	{ 0x21752e, "device_release_driver" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x20736fb0, "pci_p2pmem_virt_to_bus" },
	{ 0x57184bd4, "pci_p2pdma_unmap_sg_attrs" },
	{ 0xb9b48b7, "nvme_wait_reset" },
	{ 0x3bf2393a, "__SCT__tp_func_nvme_sq" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xdbfb38b2, "nvme_stop_ctrl" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x30453dff, "nvme_unfreeze" },
	{ 0xa147db67, "blk_mq_tagset_busy_iter" },
	{ 0x606db81c, "blk_mq_start_request" },
	{ 0xd00c8219, "nvme_set_features" },
	{ 0xee62daee, "nvme_start_admin_queue" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0x441d40d3, "nvme_shutdown_ctrl" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7b96e368, "nvme_set_queue_count" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x5e9508fa, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5fb8ea83, "nvme_complete_async_event" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa3a48405, "nvme_kill_queues" },
	{ 0x1b9e2f5c, "nvme_stop_admin_queue" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x51e02ce7, "param_set_uint_minmax" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8a85b97a, "__SCK__tp_func_nvme_sq" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7de8ba75, "blk_mq_update_nr_hw_queues" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x8a9c70ed, "nvme_sec_submit" },
	{ 0xa926a4d, "blk_mq_init_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf4ae19b9, "pci_p2pmem_publish" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xa7299ff3, "pci_enable_pcie_error_reporting" },
	{ 0x4e27ddf9, "nvme_try_sched_reset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x4813f85c, "nvme_enable_ctrl" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xc67e48c5, "blk_put_queue" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x75587220, "blk_mq_free_tag_set" },
	{ 0xde80cd09, "ioremap" },
	{ 0x6761f2ce, "nvme_remove_namespaces" },
	{ 0xed759704, "__blk_rq_map_sg" },
	{ 0x6453d015, "acpi_storage_d3" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x6216cbf0, "pci_device_is_present" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xfd741b50, "blk_execute_rq_nowait" },
	{ 0x12f6d12, "pci_load_saved_state" },
	{ 0xfec856a9, "pci_request_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xa8d7b477, "nvme_fail_nonready_command" },
	{ 0xe77d72c4, "blk_get_queue" },
	{ 0x5ab4f2b8, "nvme_init_ctrl" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x3d964f0c, "pci_p2pdma_map_sg_attrs" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x6a404cf4, "nvme_change_ctrl_state" },
	{ 0xa17ee47c, "blk_mq_free_request" },
	{ 0xa93e595b, "__tracepoint_nvme_sq" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x9c122bcf, "mempool_create_node" },
	{ 0x5fc7e1d5, "pci_free_irq" },
	{ 0x761527a1, "put_device" },
	{ 0x378246c8, "dma_max_mapping_size" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6cb7c2f7, "nvme_sync_queues" },
	{ 0xdfdd520f, "param_get_uint" },
	{ 0xce77f777, "nvme_cleanup_cmd" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xaa9634be, "nvme_cancel_request" },
	{ 0xc630ee77, "nvme_wait_freeze" },
	{ 0x69f266a4, "blk_mq_pci_map_queues" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x531580ce, "blk_mq_end_request_batch" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xce226563, "blk_mq_alloc_tag_set" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x9493fc86, "node_states" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcdfbb86f, "nvme_disable_ctrl" },
	{ 0x33f7ee0, "pci_p2pdma_add_resource" },
	{ 0x16e6d67f, "get_device" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x64b62862, "nvme_wq" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x3cf47bb0, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3970bde2, "nvme_submit_sync_cmd" },
	{ 0x79d631e1, "nvme_complete_batch_req" },
	{ 0xf2b9144b, "param_set_uint" },
	{ 0xedc03953, "iounmap" },
	{ 0xdca50ab1, "pcibios_resource_to_bus" },
	{ 0x833deb75, "nvme_start_ctrl" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x142de0fd, "pci_alloc_p2pmem" },
	{ 0x8b473375, "nvme_start_freeze" },
	{ 0x1a77a0dd, "nvme_setup_cmd" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x5887ef7f, "blk_mq_complete_request_remote" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc6708bae, "nvme_alloc_request" },
	{ 0xc5f492db, "nvme_start_queues" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x49e2fc05, "blk_mq_tagset_wait_completed_request" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0xbe4dedaf, "nvme_wait_freeze_timeout" },
	{ 0xe0aef0a6, "pci_release_selected_regions" },
	{ 0xe0cce0fe, "pci_request_selected_regions" },
	{ 0x2730bcf1, "nvme_complete_rq" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x4ffc8f73, "nvme_uninit_ctrl" },
	{ 0xf9def644, "pcie_aspm_enabled" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xe14c20e4, "__do_once_done" },
};

MODULE_INFO(depends, "nvme-core");

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB1d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001987d00005016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00001092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Cd00001504sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B7d00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D97d00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00002646d00002262sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00002646d00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd00000061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd00008061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000CD00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000CD01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000CD02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");

MODULE_INFO(srcversion, "DA6209364D1ADFBEEC22557");
