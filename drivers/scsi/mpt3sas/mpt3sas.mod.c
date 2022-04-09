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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xba6c657e, "scsi_remove_target" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf62b85dc, "sas_release_transport" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x1537b21c, "debugfs_create_u8" },
	{ 0xccf2840, "param_get_int" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x7d466a68, "scsi_block_requests" },
	{ 0x7f1218d3, "blk_queue_max_hw_sectors" },
	{ 0xec32212e, "pci_irq_get_affinity" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xa4eb5793, "sbitmap_weight" },
	{ 0x476b57b9, "sas_is_tlr_enabled" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x7b49e6f2, "pci_stop_and_remove_bus_device_locked" },
	{ 0x8f410af0, "sas_phy_add" },
	{ 0xdd4b8dcd, "scsi_unblock_requests" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x59dae093, "sas_disable_tlr" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc594d618, "sas_port_add_phy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc2ef9e6a, "sas_port_delete_phy" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xf2c82101, "param_set_int" },
	{ 0x8549e1f6, "sas_rphy_add" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc751da51, "blk_queue_virt_boundary" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xaf85c712, "scsi_print_command" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9034196, "sas_port_delete" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4b432a03, "scsi_host_busy" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x81dda7c9, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaec7ed46, "dma_get_required_mask" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1536b4af, "scsi_internal_device_block_nowait" },
	{ 0x5a7eac4b, "raid_class_release" },
	{ 0x83e780d8, "sas_attach_transport" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0xa164df89, "misc_register" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xa7299ff3, "pci_enable_pcie_error_reporting" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xc6d61c63, "sas_expander_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xee3c884e, "sas_read_port_mode_page" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x7c229eed, "sas_end_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xde80cd09, "ioremap" },
	{ 0xf1e046cc, "panic" },
	{ 0x9166fada, "strncpy" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0x6216cbf0, "pci_device_is_present" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1b4f8c5c, "sas_port_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8bf0861d, "raid_class_attach" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xef731740, "pci_find_capability" },
	{ 0x42160443, "attribute_container_find_class_device" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0x6705c65a, "sas_phy_free" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xa0965042, "pci_disable_link_state" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0x4d31f48f, "blk_queue_flag_set" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa2321332, "starget_for_each_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd2493fc1, "device_reprobe" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x69f266a4, "blk_mq_pci_map_queues" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x6cb2f5a1, "cpumask_next_and" },
	{ 0x354d23d1, "scsi_device_set_state" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xa0715105, "sas_phy_alloc" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b5500c5, "pci_cfg_access_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe9b9b881, "sas_remove_host" },
	{ 0x1a632a59, "__scsi_iterate_devices" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3cf47bb0, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x9fcb6d50, "scsi_internal_device_unblock_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x56a7a602, "sas_port_alloc_num" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x1259bddc, "scsi_get_vpd_page" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x76abb595, "kill_fasync" },
	{ 0xaeafaa63, "scsi_build_sense" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x96e91be1, "bsg_job_done" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe0aef0a6, "pci_release_selected_regions" },
	{ 0xe0cce0fe, "pci_request_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x4460f2a, "pci_cfg_access_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xfe33dd94, "sas_enable_tlr" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xbe4ed559, "param_ops_ullong" },
	{ 0xbe277c8f, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_sas,raid_class");

MODULE_ALIAS("pci:v00001000d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000082sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000006Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000097sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000094sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "06EA34732DCCBD87641D3E6");
