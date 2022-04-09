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
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xb042c0f3, "nvme_fc_register_localport" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xe5855ceb, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0xd12e564, "nvme_fc_register_remoteport" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x767ddb02, "set_memory_wc" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x7d466a68, "scsi_block_requests" },
	{ 0xec32212e, "pci_irq_get_affinity" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xdd4b8dcd, "scsi_unblock_requests" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x695f0fa7, "scsi_is_fc_rport" },
	{ 0xb98123d, "nvmet_fc_rcv_ls_req" },
	{ 0x3884f8b8, "nvme_fc_unregister_localport" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xebb49c23, "pci_disable_sriov" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x70f6ffab, "fc_eh_should_retry_cmd" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6e841389, "cpu_info" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x85df9b6c, "strsep" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xd079d4f2, "pci_reset_bus" },
	{ 0x6d933550, "fc_host_fpin_rcv" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x375f8bbd, "fc_get_event_number" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7fa5302a, "nvmet_fc_rcv_fcp_abort" },
	{ 0x5012a70, "pv_ops" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x81dda7c9, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0xa164df89, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xa7299ff3, "pci_enable_pcie_error_reporting" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0x305e313d, "pci_aer_clear_nonfatal_status" },
	{ 0xd268e216, "__cpuhp_state_add_instance" },
	{ 0xcc0de743, "fc_vport_terminate" },
	{ 0x9166fada, "strncpy" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0x48ba271b, "fixed_size_llseek" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfca9dc99, "nvme_fc_unregister_remoteport" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xff380184, "fc_remote_port_rolechg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9ef76d99, "nvmet_fc_unregister_targetport" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x68d212c3, "init_uts_ns" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x22749e72, "simple_open" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x1048b92a, "nvmet_fc_rcv_fcp_req" },
	{ 0x20a1fd4, "fc_vport_create" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x28fb7f9b, "fc_host_post_vendor_event" },
	{ 0x4a013682, "nvmet_fc_invalidate_host" },
	{ 0x192d24e6, "fc_release_transport" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5ce77a67, "nvmet_fc_register_targetport" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x3a54e9b4, "fc_host_post_event" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x5b9adb5a, "scsi_host_get" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9fe899b7, "get_cpu_idle_time" },
	{ 0xd289272f, "fc_remote_port_delete" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x1953c958, "mempool_create" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4d14a211, "__cpuhp_state_remove_instance" },
	{ 0x443cf844, "fc_block_scsi_eh" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x6cb2f5a1, "cpumask_next_and" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xa7218eba, "irq_set_affinity" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x9493fc86, "node_states" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbb0e18a6, "nvme_fc_rcv_ls_req" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x69bb525b, "pci_try_set_mwi" },
	{ 0x1a632a59, "__scsi_iterate_devices" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4cd22de1, "fc_eh_timed_out" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x3cf47bb0, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xedc03953, "iounmap" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x8fc84473, "set_user_nice" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x7c3c0d1e, "fc_remove_host" },
	{ 0x96848186, "scnprintf" },
	{ 0x1564421, "request_firmware" },
	{ 0x3e33ac54, "nvme_fc_rescan_remoteport" },
	{ 0xaeafaa63, "scsi_build_sense" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf11ae373, "fc_remote_port_add" },
	{ 0xa084f79f, "cpumask_next_wrap" },
	{ 0x96e91be1, "bsg_job_done" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x8a9cf5a7, "nvme_fc_set_remoteport_devloss" },
	{ 0xe0aef0a6, "pci_release_selected_regions" },
	{ 0xe0cce0fe, "pci_request_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xb24a808, "pci_find_ext_capability" },
	{ 0xc465ba94, "fc_attach_transport" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xbe4ed559, "param_ops_ullong" },
	{ 0xbe277c8f, "scsi_dma_map" },
};

MODULE_INFO(depends, "nvme-fc,scsi_transport_fc,nvmet-fc");

MODULE_ALIAS("pci:v000010DFd0000FB00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00001AE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F980sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE05sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000704sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000714sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E260sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E208sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000724sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000072Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E258AEDD3A4F4268C35FF11");
