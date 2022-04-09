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
	{ 0x2467ebbe, "pm_genpd_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xf43d7220, "drm_dp_link_train_channel_eq_delay" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xb4f83b67, "drm_atomic_helper_plane_reset" },
	{ 0x2293ac3, "dma_fence_chain_ops" },
	{ 0xeec0e117, "drm_atomic_get_private_obj_state" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x5a8857da, "drm_add_edid_modes" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0x85df9b6c, "strsep" },
	{ 0x44386919, "drm_kms_helper_hotplug_event" },
	{ 0x5c56c513, "drm_atomic_private_obj_fini" },
	{ 0x24bf8629, "drm_helper_resume_force_mode" },
	{ 0xb759bd4f, "drm_kms_helper_poll_fini" },
	{ 0x6a765bf9, "drm_sched_increase_karma" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0xb2c047f8, "drm_hdmi_infoframe_set_hdr_metadata" },
	{ 0xedc03953, "iounmap" },
	{ 0x41b24a5, "ttm_resource_manager_evict_all" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x5c7b0e68, "drm_crtc_vblank_get" },
	{ 0x9b02585d, "single_release" },
	{ 0x599dea05, "drm_edid_is_valid" },
	{ 0xc9addcd2, "dma_resv_reserve_shared" },
	{ 0xaf6ba651, "drm_syncobj_find" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0xffb7c514, "ida_free" },
	{ 0xcd9d1b3e, "drm_connector_set_vrr_capable_property" },
	{ 0x56c97f17, "__irq_domain_add" },
	{ 0x2ec97348, "kobject_put" },
	{ 0xeb6eb87, "add_taint" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6df14e22, "drm_syncobj_replace_fence" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x6677e9d6, "drm_dev_dbg" },
	{ 0x5738bde2, "drm_modeset_lock_all" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xdea2be57, "pci_bus_resource_n" },
	{ 0x754d539c, "strlen" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0x397399da, "drm_plane_cleanup" },
	{ 0x355386c1, "get_pid_task" },
	{ 0x6ce76cd7, "drm_gem_fb_create_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0xa546efce, "dma_buf_map_attachment" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbb07b98e, "drm_handle_vblank" },
	{ 0x1568f18b, "alloc_pages_vma" },
	{ 0x12efca58, "seq_write" },
	{ 0x284bfbee, "drm_kms_helper_poll_disable" },
	{ 0x4eac5693, "param_ops_hexint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7408f66e, "sysfs_remove_file_ns" },
	{ 0x1e0ce865, "ttm_bo_move_to_lru_tail" },
	{ 0x79728442, "drm_property_create_range" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xd5fff2c, "drm_read" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0x19f925ea, "drm_sched_entity_fini" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x4dce8ff3, "device_create" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x6e6d333, "drm_crtc_init_with_planes" },
	{ 0x6727802e, "drm_mode_destroy" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcd72d04c, "drm_compat_ioctl" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x506d693, "drm_sched_fini" },
	{ 0x7205ce73, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x86f15040, "pci_enable_atomic_ops_to_root" },
	{ 0xd75f2c51, "drm_helper_connector_dpms" },
	{ 0x79b037b, "__drm_atomic_helper_crtc_reset" },
	{ 0x44a2cadb, "drm_prime_sg_to_dma_addr_array" },
	{ 0x79ba488b, "component_add" },
	{ 0x5012a70, "pv_ops" },
	{ 0x6ef2f78e, "drm_format_info" },
	{ 0xf17dce39, "drm_crtc_vblank_put" },
	{ 0xce36a401, "anon_inode_getfd" },
	{ 0x99fac7a3, "amd_iommu_set_invalid_ppr_cb" },
	{ 0xc3bc72ad, "trace_print_array_seq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa00c7294, "drm_dp_cec_irq" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xa44a1307, "interval_tree_iter_first" },
	{ 0x21bb6da9, "drm_crtc_helper_set_config" },
	{ 0x4226beb7, "drm_atomic_helper_set_config" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xcd643e36, "drm_atomic_helper_calc_timestamping_constants" },
	{ 0x2493f1c0, "drm_gem_ttm_vunmap" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa7299ff3, "pci_enable_pcie_error_reporting" },
	{ 0xaec7ed46, "dma_get_required_mask" },
	{ 0xa9227c5e, "drm_gem_private_object_init" },
	{ 0x4df9f4a8, "kobject_get" },
	{ 0x5c4c570c, "pci_assign_unassigned_bus_resources" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xf27f598d, "drm_dp_cec_set_edid" },
	{ 0x514774a4, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x582ee7de, "drm_modeset_drop_locks" },
	{ 0x2387097b, "ttm_pool_free" },
	{ 0xd2f65d17, "drm_prime_pages_to_sg" },
	{ 0xdca846a3, "drm_dev_register" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xb1d95c76, "pci_release_resource" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x17660511, "drm_connector_list_iter_next" },
	{ 0x888bc2bc, "request_firmware_direct" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1567369c, "drm_dp_mst_update_slots" },
	{ 0x4814b02f, "drm_connector_attach_content_protection_property" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xf7962fc0, "ttm_bo_vm_fault_reserved" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9bef8cb0, "sg_alloc_table_from_pages_segment" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xaf78938f, "drm_crtc_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9a0696a6, "drm_atomic_helper_commit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf2b81b64, "arch_io_reserve_memtype_wc" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0xcfb17d1b, "__srcu_read_unlock" },
	{ 0x4ca80989, "drm_dev_printk" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e7e8009, "drm_edid_to_sad" },
	{ 0xaea2108, "drm_dp_check_act_status" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x22749e72, "simple_open" },
	{ 0xfbafd50b, "irq_domain_remove" },
	{ 0xa6bb50d7, "ttm_device_fini" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xceebd6bf, "pm_genpd_remove_device" },
	{ 0xf1421d13, "drm_mode_sort" },
	{ 0x1210e335, "ttm_device_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xe197eb5e, "drm_encoder_init" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x4f18a150, "__drm_debug" },
	{ 0x9e9eab95, "devcgroup_check_permission" },
	{ 0x1eb55bd3, "drm_sched_entity_destroy" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0xaeb69fbf, "drm_gem_ttm_mmap" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc722d0b7, "drm_dp_mst_detect_port" },
	{ 0x5f23f984, "drm_hdcp_update_content_protection" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xeb76e138, "drm_fb_helper_lastclose" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe50cc681, "drm_fb_helper_set_suspend_unlocked" },
	{ 0x107b1f79, "drm_plane_create_color_properties" },
	{ 0x9e45c634, "pci_resize_resource" },
	{ 0x92997ed8, "_printk" },
	{ 0xa24bd280, "drm_fbdev_generic_setup" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xa56dff6e, "drm_sched_reset_karma" },
	{ 0x148653, "vsnprintf" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xa2cb9089, "pci_wait_for_pending_transaction" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xefab5706, "drm_dp_cec_register_connector" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x536d56bd, "hwmon_device_register_with_groups" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xfe12bcb9, "drm_dsc_compute_rc_parameters" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x681b6670, "is_firmware_framebuffer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xd2f9bc7, "drm_gem_ttm_vmap" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x1ba3c76d, "kthread_unpark" },
	{ 0x6604ef93, "debugfs_create_u32" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x201b72ff, "drm_helper_force_disable_all" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xbde1f7f3, "drm_sched_pick_best" },
	{ 0x4d5acea, "drm_dp_atomic_find_vcpi_slots" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0x2754dad8, "drm_mm_reserve_node" },
	{ 0xbc99e3c3, "amd_iommu_init_device" },
	{ 0x3a6a0e57, "debugfs_create_bool" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xabdb3a26, "drm_release" },
	{ 0x1cd8438b, "pxm_to_node" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7617dd86, "drm_dp_mst_hpd_irq" },
	{ 0xb570d09d, "mmu_interval_notifier_remove" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x8af9539c, "ttm_glob" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0x8812868e, "drm_modeset_acquire_init" },
	{ 0x4cf863fe, "drm_object_property_set_value" },
	{ 0x480f1366, "amd_iommu_unbind_pasid" },
	{ 0xc7d04fc5, "drm_vma_node_allow" },
	{ 0xe7d0ef87, "get_task_pid" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x918511e4, "drm_crtc_accurate_vblank_count" },
	{ 0xb37f33a5, "drm_syncobj_get_fd" },
	{ 0x3f1f9b5c, "send_sig" },
	{ 0x809712ff, "hdmi_avi_infoframe_pack" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x1000e51, "schedule" },
	{ 0x616f56b4, "drm_modeset_unlock" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x24e5769, "drm_connector_attach_dp_subconnector_property" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5bd7084e, "drm_kms_helper_poll_enable" },
	{ 0x64c5e646, "drm_dp_mst_put_port_malloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x7c51be4a, "drm_atomic_helper_plane_destroy_state" },
	{ 0xbf073b80, "drm_atomic_helper_async_check" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe7aba2ea, "drm_send_event_locked" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0xc72016f1, "drm_atomic_state_alloc" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xe6da47e1, "iommu_get_domain_for_dev" },
	{ 0xc3f9143d, "dma_fence_array_create" },
	{ 0xfdde547c, "ttm_bo_kmap" },
	{ 0x5b88a221, "drm_primary_helper_destroy" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x622fb4dd, "drm_crtc_cleanup" },
	{ 0x4c98e46, "get_task_mm" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x639b19c3, "pci_reset_function" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x361ef720, "drm_dp_update_payload_part1" },
	{ 0x40d378ea, "drm_dp_update_payload_part2" },
	{ 0xf992d1e8, "cc_platform_has" },
	{ 0xeb5b55ef, "drm_atomic_helper_suspend" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x46f2a85c, "drm_dp_aux_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc23477d, "current_task" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xb0845b8b, "drm_connector_update_edid_property" },
	{ 0x9b53e14, "interval_tree_remove" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0xb6127243, "drm_need_swiotlb" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xcf2a6966, "up" },
	{ 0x16664270, "drm_dp_mst_topology_mgr_resume" },
	{ 0xbd508a26, "device_for_each_child" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x28cbff68, "drm_atomic_add_affected_planes" },
	{ 0x9fad6477, "drm_add_modes_noedid" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xcd349350, "drm_sched_entity_set_priority" },
	{ 0x4a4cc052, "perf_pmu_register" },
	{ 0x59ceb925, "put_pid" },
	{ 0x3d11efe5, "dma_resv_add_shared_fence" },
	{ 0x42999e92, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x7e1a29d9, "drm_gem_dmabuf_vunmap" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x5d2cdf67, "drm_dp_mst_topology_mgr_init" },
	{ 0xa61e279, "drm_dp_mst_get_edid" },
	{ 0xf3e9c1c3, "dma_fence_chain_init" },
	{ 0x6d3587b7, "drm_universal_plane_init" },
	{ 0x42ef4b99, "drm_crtc_enable_color_mgmt" },
	{ 0x17384c16, "drm_connector_init_with_ddc" },
	{ 0x1c4150c0, "fd_install" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x583a1ecb, "sysfs_remove_file_from_group" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xf8049ecb, "handle_simple_irq" },
	{ 0xf6588ea9, "drm_mode_is_420_only" },
	{ 0x28714395, "dma_unmap_resource" },
	{ 0xd6fdddea, "drm_gem_object_lookup" },
	{ 0x8678229, "_dev_emerg" },
	{ 0x6c44e551, "drm_atomic_helper_commit_hw_done" },
	{ 0x58a10589, "drm_dp_dpcd_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2d8e60e2, "ttm_pool_debugfs" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xc310b981, "strnstr" },
	{ 0x3f0ab966, "drm_connector_list_iter_begin" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xb83fa506, "pci_ignore_hotplug" },
	{ 0x7f7e1b02, "drm_dp_dpcd_write" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x28d87421, "__srcu_read_lock" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xc1c41868, "drm_dp_cec_unset_edid" },
	{ 0xccaae608, "drm_gem_prime_mmap" },
	{ 0xe718d6a8, "ttm_bo_bulk_move_lru_tail" },
	{ 0x2dd00f02, "drm_object_attach_property" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0x9954de41, "__drm_atomic_helper_connector_destroy_state" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfdfb792f, "amd_iommu_pc_supported" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc124b170, "drm_sched_entity_modify_sched" },
	{ 0x46c47fb6, "__node_distance" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x2b13688f, "ttm_eu_reserve_buffers" },
	{ 0x6946111a, "drm_sched_start" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x508fcdcf, "drm_encoder_cleanup" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x69d19772, "ttm_bo_kunmap" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf7313486, "ttm_bo_unlock_delayed_workqueue" },
	{ 0x65acf63b, "__drm_atomic_helper_private_obj_duplicate_state" },
	{ 0xf412077, "drm_simple_encoder_init" },
	{ 0xe6f2a4bb, "drm_mode_create_scaling_mode_property" },
	{ 0xf956a686, "mmu_notifier_get_locked" },
	{ 0xf0e02cc6, "drm_mode_config_cleanup" },
	{ 0x9f4f2aa3, "acpi_gbl_FADT" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0xca9beaa4, "__xa_store" },
	{ 0x6d94f182, "pm_genpd_add_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x1f89dccc, "drm_crtc_add_crc_entry" },
	{ 0x5d2a8323, "sysfs_add_file_to_group" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x7e8b7d1e, "drm_dp_mst_dsc_aux_for_port" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xf8c85045, "drm_sched_resubmit_jobs_ext" },
	{ 0xbc1e4729, "dma_resv_add_excl_fence" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x14f92f5e, "drm_dev_unplug" },
	{ 0xda8c8b32, "drm_dp_mst_allocate_vcpi" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0x845871e5, "to_drm_sched_fence" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xde80cd09, "ioremap" },
	{ 0x36fba308, "drm_dev_enter" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x94216657, "seq_read" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x9b285573, "drm_match_cea_mode" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xee808462, "drm_gem_dmabuf_release" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x5a4734d1, "drm_kms_helper_is_poll_worker" },
	{ 0x499c1d15, "__drm_atomic_helper_plane_reset" },
	{ 0x26fe7592, "kthread_unuse_mm" },
	{ 0x7bdfa8ed, "drm_dp_mst_dump_topology" },
	{ 0x81a311c7, "drm_connector_atomic_hdr_metadata_equal" },
	{ 0xa673a4d5, "pcie_get_speed_cap" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0xa980d013, "kobject_init_and_add" },
	{ 0x92ec510d, "jiffies64_to_msecs" },
	{ 0x1c4ced47, "unmap_mapping_range" },
	{ 0x66cb9ee5, "drm_crtc_send_vblank_event" },
	{ 0x1730f2e8, "irq_set_chip_and_handler_name" },
	{ 0xd564cc99, "find_vma" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0xf43a2a55, "drm_connector_attach_hdr_output_metadata_property" },
	{ 0x6758b3b7, "drm_modeset_acquire_fini" },
	{ 0x7b2e2166, "drm_vma_node_revoke" },
	{ 0x5ace8674, "hmm_range_fault" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x21456117, "pcie_capability_read_dword" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x1e6bf99f, "drm_atomic_helper_check_modeset" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xb61328de, "drm_atomic_helper_check" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0xfffa4690, "drm_firmware_drivers_only" },
	{ 0x317362e5, "drm_dp_cec_unregister_connector" },
	{ 0x971773bb, "drm_kms_helper_poll_init" },
	{ 0xb290ada, "dma_fence_chain_walk" },
	{ 0x292649e9, "node_data" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0x2adb7bff, "drm_dp_stop_crc" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x930341e2, "drm_atomic_get_connector_state" },
	{ 0x55565b46, "vga_client_register" },
	{ 0xb2d2f1c4, "mmu_interval_read_begin" },
	{ 0x20978fb9, "idr_find" },
	{ 0xa15875e9, "__devm_release_region" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xded249a4, "drm_dp_mst_topology_mgr_suspend" },
	{ 0xff2c80c2, "vga_switcheroo_fini_domain_pm_ops" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x53425a69, "dma_buf_get" },
	{ 0x6bc3a29e, "drm_connector_set_panel_orientation_with_quirk" },
	{ 0x23dacb4f, "dma_buf_dynamic_attach" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x44c9d63, "drm_vblank_init" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x8d4156d4, "drm_any_plane_has_format" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0xa2c56cf2, "kobject_create_and_add" },
	{ 0x510260ad, "drm_sched_resubmit_jobs" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0x2ca2a84e, "ttm_bo_vm_close" },
	{ 0x93146ccb, "drm_gem_fb_destroy" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xa13e8de6, "param_ops_bint" },
	{ 0x955515a0, "amd_iommu_free_device" },
	{ 0xf0785fc6, "fput" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0xef269f8e, "drm_dp_aux_init" },
	{ 0xbd6f2080, "ttm_bo_lock_delayed_workqueue" },
	{ 0x668b19a1, "down_read" },
	{ 0xbd5f04b4, "ttm_bo_put" },
	{ 0x17d6ff59, "drm_plane_create_alpha_property" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xe8d0b427, "kthread_use_mm" },
	{ 0xc54b07b5, "dma_resv_get_fences" },
	{ 0xd690f4b2, "pid_task" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x8727cd8c, "__get_task_comm" },
	{ 0x9395b9cd, "drm_atomic_helper_shutdown" },
	{ 0xc16cc669, "drm_mode_config_helper_resume" },
	{ 0x55bda7c6, "ttm_bo_wait" },
	{ 0x6216cbf0, "pci_device_is_present" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xe48beb7e, "drm_connector_unregister" },
	{ 0xd5e67c02, "pci_msix_vec_count" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x77482713, "component_del" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x86632d5a, "default_llseek" },
	{ 0xc0a7a96f, "sysfs_create_files" },
	{ 0x21d98ad9, "migrate_vma_finalize" },
	{ 0x2c208607, "power_supply_is_system_supplied" },
	{ 0xae4dc0ae, "drm_connector_attach_max_bpc_property" },
	{ 0x979cdc87, "ttm_eu_backoff_reservation" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9493fc86, "node_states" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0x162a8d90, "ttm_bo_move_accel_cleanup" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xeb23100a, "vga_switcheroo_init_domain_pm_ops" },
	{ 0x508313fb, "pcie_bandwidth_available" },
	{ 0xef6859df, "drm_calc_timestamping_constants" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x1a63af34, "vga_switcheroo_process_delayed_switch" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x618911fc, "numa_node" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0xffddba71, "drm_atomic_helper_cleanup_planes" },
	{ 0x6f3b0bf5, "fget" },
	{ 0xfff7ae26, "dma_buf_unmap_attachment" },
	{ 0x77358855, "iomem_resource" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe1c8dc50, "drm_sched_job_cleanup" },
	{ 0xa9077a5b, "drm_syncobj_get_handle" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x1e83ee0a, "drm_mode_probed_add" },
	{ 0xa7a3a73, "pci_rebar_get_possible_sizes" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x203aaa7d, "ww_mutex_lock" },
	{ 0x56b48e53, "drm_framebuffer_init" },
	{ 0x33f0768c, "cpufreq_quick_get_max" },
	{ 0x9306c110, "drm_dp_aux_register" },
	{ 0x72b37550, "mmput" },
	{ 0x6d17641b, "drm_sched_stop" },
	{ 0x6d4231e6, "__folio_lock" },
	{ 0x377bbcbc, "pm_suspend_target_state" },
	{ 0x4575a0ca, "drm_mode_set_crtcinfo" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0xc6c981d, "drm_atomic_helper_check_plane_state" },
	{ 0x44bfcdc3, "drm_connector_set_path_property" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x15136487, "amd_iommu_set_invalidate_ctx_cb" },
	{ 0x543a7e12, "drm_atomic_helper_check_planes" },
	{ 0x51d58e8, "dma_fence_wait_any_timeout" },
	{ 0xa1bedd72, "amd_iommu_pc_get_max_counters" },
	{ 0x1c21ecf9, "drm_atomic_helper_page_flip" },
	{ 0xa9c72303, "amd_iommu_pc_get_max_banks" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xf3644e5a, "drm_atomic_get_plane_state" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x349cba85, "strchr" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x4cad9e7e, "ttm_bo_mem_space" },
	{ 0x1b074f, "mce_is_correctable" },
	{ 0x593f7aa7, "drm_dp_mst_connector_early_unregister" },
	{ 0xf8d68b3f, "ttm_resource_manager_init" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x465cf94, "drm_dp_link_train_clock_recovery_delay" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x5b2f27fb, "do_wait_intr" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1b2a9b8, "ww_mutex_lock_interruptible" },
	{ 0xd60baf5a, "drm_edid_get_monitor_name" },
	{ 0x7ac90ced, "debugfs_create_file_unsafe" },
	{ 0x9a908c6, "pci_get_class" },
	{ 0xd96babb4, "interval_tree_iter_next" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xd9b4753, "drm_mode_equal" },
	{ 0x8eaf2a5f, "vga_switcheroo_unregister_handler" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x8113cc0d, "drm_syncobj_add_point" },
	{ 0x46622c36, "pcie_get_mps" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0x178cc369, "ttm_eu_fence_buffer_objects" },
	{ 0xd349d253, "seq_printf" },
	{ 0xc8a016aa, "param_ops_string" },
	{ 0xa6257a2f, "complete" },
	{ 0x92569bce, "ttm_range_man_fini_nocheck" },
	{ 0x18177ab4, "ttm_resource_free" },
	{ 0x3b509e53, "ttm_tt_fini" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x58d8fcaa, "drm_dsc_pps_payload_pack" },
	{ 0xfd5f20cf, "generic_handle_domain_irq" },
	{ 0xa2aae103, "ttm_bo_validate" },
	{ 0x6626afca, "down" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe7186c1a, "ttm_pool_alloc" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x8ca2d9e4, "drm_dp_calc_pbn_mode" },
	{ 0x69814307, "debugfs_create_file_size" },
	{ 0x213cd84c, "drm_poll" },
	{ 0xc4f8bafa, "drm_gem_handle_create" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0x12b843bd, "drm_modeset_backoff" },
	{ 0xf5eefaee, "drm_crtc_arm_vblank_event" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x28779e52, "drm_printf" },
	{ 0x2ca322df, "drm_dp_start_crc" },
	{ 0x7489d4d5, "drm_crtc_vblank_helper_get_vblank_timestamp" },
	{ 0x5d9dfb8d, "mfd_add_devices" },
	{ 0x52f51679, "drm_helper_hpd_irq_event" },
	{ 0x4e22eaef, "drm_dp_mst_deallocate_vcpi" },
	{ 0xf7acb66, "drm_mm_print" },
	{ 0x30be25a0, "drm_atomic_helper_crtc_destroy_state" },
	{ 0x2b452e1f, "drm_atomic_helper_wait_for_flip_done" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xfecdb304, "migrate_vma_pages" },
	{ 0xde0a91fe, "drm_connector_list_iter_end" },
	{ 0x5017849b, "drm_sched_entity_flush" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0xa43f4dbd, "drm_sched_entity_init" },
	{ 0x5a9b22b7, "mfd_remove_devices" },
	{ 0xea124bd1, "gcd" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x8c0d9cc, "vga_switcheroo_unregister_client" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x58fec7b4, "drm_helper_mode_fill_fb_struct" },
	{ 0xd89a30b6, "drm_dp_mst_add_affected_dsc_crtcs" },
	{ 0x2921e434, "sysfs_create_file_ns" },
	{ 0x3e567c2c, "pcie_set_readrq" },
	{ 0x8342b575, "ttm_bo_eviction_valuable" },
	{ 0x79ee02e2, "amd_iommu_bind_pasid" },
	{ 0xd31b8df2, "drm_dp_dpcd_read_link_status" },
	{ 0xa916b694, "strnlen" },
	{ 0x39f3606c, "drm_syncobj_find_fence" },
	{ 0x88fd45c, "vga_switcheroo_register_handler" },
	{ 0xe659a687, "drm_dp_atomic_release_vcpi_slots" },
	{ 0x73011db0, "drm_dp_bw_code_to_link_rate" },
	{ 0x622ae652, "pci_unmap_rom" },
	{ 0x24e64565, "seq_hex_dump" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x55c76a23, "ksys_sync_helper" },
	{ 0xc43e481e, "backlight_device_set_brightness" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xce807a25, "up_write" },
	{ 0x9d5448ad, "drm_atomic_add_affected_connectors" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x3ba3630c, "drm_crtc_vblank_off" },
	{ 0x50aa3fb, "drm_atomic_helper_disable_plane" },
	{ 0x46f99f3e, "perf_event_update_userpage" },
	{ 0x83af720c, "irq_create_mapping_affinity" },
	{ 0x53b954a2, "up_read" },
	{ 0xc17e4c4d, "drm_gem_prime_fd_to_handle" },
	{ 0x5a290250, "hdmi_drm_infoframe_pack_only" },
	{ 0x4e5fd603, "drm_atomic_helper_connector_reset" },
	{ 0x55b05d2f, "drm_dp_mst_get_port_malloc" },
	{ 0x28abcbaa, "sysfs_remove_files" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x72ad465, "dma_resv_wait_timeout" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xebcd316c, "drm_open" },
	{ 0x91e49f00, "pci_p2pdma_distance_many" },
	{ 0xb881338a, "drm_gem_object_release" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x807ef12e, "ww_mutex_trylock" },
	{ 0x10958611, "dma_buf_put" },
	{ 0x9a06b54c, "drm_gem_mmap" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x21f1e459, "drm_crtc_helper_set_mode" },
	{ 0x5a921311, "strncmp" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x6f720dbc, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xa2545864, "pci_pr3_present" },
	{ 0xc0e76a67, "drm_sched_job_init" },
	{ 0xad26179b, "ttm_bo_vm_access" },
	{ 0x6aa13255, "dma_buf_pin" },
	{ 0xbe94e383, "drm_mode_crtc_set_gamma_size" },
	{ 0xa001ec77, "drm_sched_job_arm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xeabf254f, "pci_map_rom" },
	{ 0xb0e602eb, "memmove" },
	{ 0x84213bd9, "drm_sched_dependency_optimized" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xfecc8840, "drm_edid_to_speaker_allocation" },
	{ 0xc31230a1, "drm_atomic_helper_crtc_duplicate_state" },
	{ 0x4f8b3338, "drm_atomic_commit" },
	{ 0xa207aad2, "drm_connector_attach_vrr_capable_property" },
	{ 0x31b10d72, "drm_gem_prime_handle_to_fd" },
	{ 0x18aad025, "ttm_bo_init_reserved" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xb5a3b440, "drm_plane_create_blend_mode_property" },
	{ 0x3e635409, "drm_sched_init" },
	{ 0xc5c99a79, "drm_dp_get_adjust_request_voltage" },
	{ 0x1564421, "request_firmware" },
	{ 0xee111615, "param_ops_int" },
	{ 0xdb84d981, "__drm_atomic_helper_connector_reset" },
	{ 0x56256e8a, "orderly_poweroff" },
	{ 0x81992424, "drm_edid_header_is_valid" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdc5ab292, "drm_sched_suspend_timeout" },
	{ 0x7640d517, "vga_switcheroo_register_client" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x71d4d445, "debugfs_create_blob" },
	{ 0x1d4fb5bb, "ttm_sg_tt_init" },
	{ 0xe4345174, "single_open" },
	{ 0xc40956ec, "mmu_interval_notifier_insert" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x5fdf7b32, "smca_get_bank_type" },
	{ 0xff2d37b7, "dma_map_resource" },
	{ 0xb22e1809, "dma_buf_move_notify" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xfb578fc5, "memset" },
	{ 0xb8ae5f57, "drm_dp_mst_topology_state_funcs" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6f105db5, "perf_pmu_unregister" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0xcadc7739, "drm_crtc_vblank_count" },
	{ 0x4b760680, "drm_sched_fault" },
	{ 0x76abb96b, "migrate_vma_setup" },
	{ 0x582f248e, "drm_dp_get_adjust_request_pre_emphasis" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0x94a7add8, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x26815dbc, "drm_dp_link_rate_to_bw_code" },
	{ 0xceb752a9, "drm_sched_entity_push_job" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xd227a2c6, "drm_crtc_vblank_on" },
	{ 0xd889dc8b, "drm_gem_prime_export" },
	{ 0xa18d511, "dma_resv_test_signaled" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x13f26ae, "dma_fence_get_stub" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6b46f3f8, "vm_mmap" },
	{ 0xb99597d9, "pm_runtime_autosuspend_expiration" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x325b65f4, "drm_cvt_mode" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xdb756b26, "drm_kms_helper_connector_hotplug_event" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x14c8dfb3, "synchronize_srcu" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2db492ac, "ttm_range_man_init_nocheck" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x33f3e269, "ttm_bo_vm_open" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x8d701329, "drm_dp_clock_recovery_ok" },
	{ 0x8d8c34f6, "drm_prime_gem_destroy" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x27e2f863, "dma_map_sgtable" },
	{ 0x36ab3c2d, "drm_modeset_lock" },
	{ 0x8b6f5657, "dma_resv_iter_next" },
	{ 0xdab5a1eb, "interval_tree_insert" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0x6e841389, "cpu_info" },
	{ 0x2abf640, "drm_atomic_helper_resume" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0xfc73ef28, "drm_dp_send_real_edid_checksum" },
	{ 0x3a5f1b3f, "ttm_device_clear_dma_mappings" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0xf8af7c22, "__put_task_struct" },
	{ 0xd6a66f9f, "drm_set_preferred_mode" },
	{ 0x4823704e, "ttm_bo_move_memcpy" },
	{ 0x61a67417, "i2c_bit_add_bus" },
	{ 0xc2591f66, "drm_atomic_get_crtc_state" },
	{ 0xb0abe1cf, "bpf_trace_run5" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x51c60bea, "bpf_trace_run6" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x72eedffb, "drm_syncobj_create" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd1f60a89, "arch_io_free_memtype_wc" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0x96848186, "scnprintf" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xd67dfe8f, "sync_file_create" },
	{ 0x6e4ed37f, "drm_property_create_enum" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0xca9360b5, "rb_next" },
	{ 0xd9e5fa5f, "mmu_notifier_put" },
	{ 0xce77cc63, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0x9593710b, "drm_modeset_unlock_all" },
	{ 0x76a31ec1, "ttm_bo_vm_reserve" },
	{ 0x7db370f9, "drm_dp_mst_topology_mgr_destroy" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x3ce0bbfe, "drm_atomic_helper_update_legacy_modeset_state" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x88c0971a, "drm_dp_mst_atomic_check" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x39e60e9d, "debugfs_create_x32" },
	{ 0x93c5dc27, "drm_dp_set_subconnector_property" },
	{ 0x6f56f792, "drm_gem_dmabuf_mmap" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x8d1571d4, "ww_mutex_unlock" },
	{ 0x87b8798d, "sg_next" },
	{ 0x11089ac7, "_ctype" },
	{ 0x62f7e207, "down_read_killable" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x133be684, "bpf_trace_run9" },
	{ 0x1e25bb60, "pcie_get_readrq" },
	{ 0x9acbdf2b, "devm_memremap_pages" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xe2154344, "drm_hdmi_vendor_infoframe_from_display_mode" },
	{ 0x3dd5becf, "pci_store_saved_state" },
	{ 0x6230172c, "__mmdrop" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x48861b1b, "drm_fb_helper_output_poll_changed" },
	{ 0xe962103f, "iommu_iova_to_phys" },
	{ 0xc563402c, "ttm_resource_init" },
	{ 0x8546d496, "drm_connector_attach_encoder" },
	{ 0xf9def644, "pcie_aspm_enabled" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0x6e549966, "amd_iommu_device_info" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x844d65c7, "kthread_park" },
	{ 0x2e349c9c, "drm_plane_create_rotation_property" },
	{ 0xf6b031bb, "drm_mode_duplicate" },
	{ 0x54101891, "pcie_capability_write_word" },
	{ 0x241f7522, "devm_request_free_mem_region" },
	{ 0x5bcb8eca, "drm_get_edid" },
	{ 0x6a4f623b, "mmu_notifier_synchronize" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x5e6f9843, "mmu_interval_notifier_insert_locked" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0xdc5bf447, "drm_gem_dmabuf_vmap" },
	{ 0x7c173634, "__bitmap_complement" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xacb87415, "drm_crtc_handle_vblank" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xdafa7f52, "drm_mode_config_helper_suspend" },
	{ 0xdf1dc7de, "drm_atomic_helper_plane_duplicate_state" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x2fd828ab, "drm_dp_mst_connector_late_register" },
	{ 0x999e8297, "vfree" },
	{ 0x5f112090, "dma_resv_iter_first" },
	{ 0x742e7f2b, "drm_dp_mst_atomic_enable_dsc" },
	{ 0xd050d01e, "drm_atomic_helper_update_plane" },
	{ 0x4195254f, "class_destroy" },
	{ 0x1d80d6d3, "drm_atomic_helper_crtc_reset" },
	{ 0x12f6d12, "pci_load_saved_state" },
	{ 0x1e21fd3f, "dma_buf_unpin" },
	{ 0xe4f6bac8, "drm_aperture_remove_conflicting_pci_framebuffers" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8786a2a5, "drm_modeset_lock_all_ctx" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4017b255, "drm_is_current_master" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0xedcf81ce, "drm_dp_channel_eq_ok" },
	{ 0xb7208e8a, "kobject_del" },
	{ 0xdc0970c4, "drm_dp_mst_reset_vcpi_slots" },
	{ 0x144307f1, "drm_dp_mst_topology_mgr_set_mst" },
	{ 0x2a88d4a0, "drm_atomic_private_obj_init" },
	{ 0xbd617799, "drm_mode_is_420_also" },
	{ 0x518ea61b, "ttm_bo_vm_dummy_page" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,gpu-sched,ttm,i2c-core,iommu_v2,drm_ttm_helper,backlight,mfd-core,i2c-algo-bit");

MODULE_ALIAS("pci:v00001002d00006780sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006784sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006788sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000678Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006790sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006791sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006792sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006798sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006799sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006810sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006816sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006613sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006617sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006623sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006631sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006825sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006826sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006827sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006828sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006829sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006830sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006837sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006838sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006839sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006660sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006663sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006664sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006665sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006667sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000666Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001305sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001309sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001316sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001317sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006650sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006651sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006658sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009830sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009832sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009833sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009834sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009836sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009837sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009838sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009839sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009850sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009851sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009852sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009853sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009854sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009855sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009856sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009857sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009858sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009859sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006901sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006907sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006921sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006928sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006929sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000692Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000692Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006938sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006939sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000730Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009870sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009874sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009875sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009876sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000098E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067FFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006FDFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006980sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006981sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006985sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006986sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006987sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006995sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006997sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000699Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006860sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006861sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006862sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006863sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006864sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006867sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006868sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006869sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000687Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000738Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007388sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000738Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000734Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001636sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001638sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000164Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000163Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000164Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073EDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073FFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007408sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000740Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000740Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000013FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007422sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007423sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000743Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d*sv*sd*bc03sc00i00*");
MODULE_ALIAS("pci:v00001002d*sv*sd*bc03sc80i00*");

MODULE_INFO(srcversion, "2AD9DD750C416F56F9DEB21");
