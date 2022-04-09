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
	{ 0xb7c21046, "mipi_dsi_dcs_read" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x2293ac3, "dma_fence_chain_ops" },
	{ 0x4e4f0f16, "dma_fence_chain_find_seqno" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x2f79d54c, "ttm_bo_unmap_virtual" },
	{ 0x170929f6, "kobj_sysfs_ops" },
	{ 0x5b3e282f, "xa_store" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x266a4b08, "tasklet_unlock" },
	{ 0x9da81751, "drm_release_noglobal" },
	{ 0x8f3a069, "drm_fb_helper_debug_enter" },
	{ 0x5a8857da, "drm_add_edid_modes" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3753ff09, "drm_mode_create_hdmi_colorspace_property" },
	{ 0x2579c081, "pwm_get" },
	{ 0x134e4f32, "drm_fb_helper_cfb_copyarea" },
	{ 0x44386919, "drm_kms_helper_hotplug_event" },
	{ 0x521ad6d0, "drm_puts" },
	{ 0xd449c07c, "i2c_put_adapter" },
	{ 0xb759bd4f, "drm_kms_helper_poll_fini" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x667bf743, "drm_av_sync_delay" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0x383d2889, "device_create_bin_file" },
	{ 0xb2c047f8, "drm_hdmi_infoframe_set_hdr_metadata" },
	{ 0xedc03953, "iounmap" },
	{ 0x41b24a5, "ttm_resource_manager_evict_all" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x5c7b0e68, "drm_crtc_vblank_get" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x9b02585d, "single_release" },
	{ 0x4045cb0b, "simple_attr_read" },
	{ 0xf50196a4, "drm_framebuffer_plane_height" },
	{ 0xb9478d90, "hdmi_drm_infoframe_unpack_only" },
	{ 0xc9addcd2, "dma_resv_reserve_shared" },
	{ 0xaf6ba651, "drm_syncobj_find" },
	{ 0xffb7c514, "ida_free" },
	{ 0x4219b50b, "drm_crtc_vblank_waitqueue" },
	{ 0xcd9d1b3e, "drm_connector_set_vrr_capable_property" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x2ec97348, "kobject_put" },
	{ 0xeb6eb87, "add_taint" },
	{ 0xb2f74fb6, "intel_gmch_remove" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0x6df14e22, "drm_syncobj_replace_fence" },
	{ 0x62e9cd55, "drm_dp_read_lttpr_common_caps" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x6677e9d6, "drm_dev_dbg" },
	{ 0x5738bde2, "drm_modeset_lock_all" },
	{ 0x576c2df8, "drm_hdmi_avi_infoframe_content_type" },
	{ 0xf2ae34e1, "kern_unmount" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x754d539c, "strlen" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0x397399da, "drm_plane_cleanup" },
	{ 0x550ce709, "pat_enabled" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0xa546efce, "dma_buf_map_attachment" },
	{ 0xe40976c0, "pnp_range_reserved" },
	{ 0x3e41032d, "dma_buf_detach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x12efca58, "seq_write" },
	{ 0xefaaa550, "drm_atomic_helper_damage_iter_init" },
	{ 0x2c360504, "gpiod_get" },
	{ 0x284bfbee, "drm_kms_helper_poll_disable" },
	{ 0xf7ef9a79, "iosf_mbi_punit_release" },
	{ 0x3f8f11e1, "ttm_move_memcpy" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x1e0ce865, "ttm_bo_move_to_lru_tail" },
	{ 0x79728442, "drm_property_create_range" },
	{ 0xf3808cb1, "get_state_synchronize_rcu" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x5b06f4ae, "drm_dp_pcon_dsc_bpp_incr" },
	{ 0xd5fff2c, "drm_read" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x6e6d333, "drm_crtc_init_with_planes" },
	{ 0x6727802e, "drm_mode_destroy" },
	{ 0xff497054, "__tracepoint_dma_fence_signaled" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcd72d04c, "drm_compat_ioctl" },
	{ 0x858ba2b2, "drm_dp_pcon_hdmi_link_mode" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x6efb11a2, "clear_page_dirty_for_io" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0x4d924f20, "memremap" },
	{ 0xad9901ae, "bit_waitqueue" },
	{ 0x7205ce73, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb047f4, "drm_mode_object_find" },
	{ 0x39e4abcf, "drm_fb_helper_init" },
	{ 0xda9b7a4, "drm_edp_backlight_set_level" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x94961283, "vunmap" },
	{ 0x5012a70, "pv_ops" },
	{ 0xba8b44f2, "pci_bus_write_config_byte" },
	{ 0x638b65f1, "__i2c_transfer" },
	{ 0x6ef2f78e, "drm_format_info" },
	{ 0xf17dce39, "drm_crtc_vblank_put" },
	{ 0xce36a401, "anon_inode_getfd" },
	{ 0x65e86ac, "drm_detect_hdmi_monitor" },
	{ 0xc3bc72ad, "trace_print_array_seq" },
	{ 0xa00c7294, "drm_dp_cec_irq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x21b7448c, "drm_plane_from_index" },
	{ 0xf939b6ae, "drm_dp_read_downstream_info" },
	{ 0x4f5e8529, "drm_dp_read_sink_count_cap" },
	{ 0x4226beb7, "drm_atomic_helper_set_config" },
	{ 0x26ed2186, "register_vmap_purge_notifier" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x3d1f51f3, "drm_framebuffer_cleanup" },
	{ 0xf9fea1ad, "drm_dp_get_vc_payload_bw" },
	{ 0x6c49551, "drm_dp_dsc_sink_line_buf_depth" },
	{ 0x192ea14f, "__SCT__tp_func_dma_fence_signaled" },
	{ 0x21075824, "__free_pages" },
	{ 0xa9227c5e, "drm_gem_private_object_init" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf27f598d, "drm_dp_cec_set_edid" },
	{ 0xcfc9deaf, "atomic_dec_and_mutex_lock" },
	{ 0x582ee7de, "drm_modeset_drop_locks" },
	{ 0x514774a4, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x2387097b, "ttm_pool_free" },
	{ 0xdca846a3, "drm_dev_register" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xa01fbb6b, "cec_notifier_set_phys_addr" },
	{ 0x17660511, "drm_connector_list_iter_next" },
	{ 0x7e8f9fdb, "drm_scdc_set_high_tmds_clock_ratio" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x81188c30, "match_string" },
	{ 0x4814b02f, "drm_connector_attach_content_protection_property" },
	{ 0xb7c69a63, "unregister_vmap_purge_notifier" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xf7962fc0, "ttm_bo_vm_fault_reserved" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xddbfdca, "drm_fb_helper_cfb_imageblit" },
	{ 0x9bef8cb0, "sg_alloc_table_from_pages_segment" },
	{ 0xa8e7f4c9, "drm_mode_create" },
	{ 0x4213e52a, "pci_iomap_range" },
	{ 0x3d97a19c, "drm_framebuffer_remove" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x780fdfd1, "intel_enable_gtt" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3295df08, "drm_fb_helper_hotplug_event" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xce62a9d9, "drm_plane_create_zpos_immutable_property" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6db799fa, "pagecache_write_end" },
	{ 0xf5402612, "kernel_param_lock" },
	{ 0x92623cb7, "mipi_dsi_attach" },
	{ 0xb59d2cb5, "drm_edp_backlight_init" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x9e29dc28, "drm_fb_helper_set_par" },
	{ 0x6e30ba8e, "drm_rect_rotate_inv" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0xcfb17d1b, "__srcu_read_unlock" },
	{ 0x4ca80989, "drm_dev_printk" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x9c463e07, "drm_fb_helper_blank" },
	{ 0xaea2108, "drm_dp_check_act_status" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xe7ab247a, "pm_runtime_no_callbacks" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x22749e72, "simple_open" },
	{ 0xa6bb50d7, "ttm_device_fini" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x5a587ab5, "drm_dp_pcon_is_frl_ready" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0x648d953b, "drm_dsc_dp_pps_header_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd272c899, "is_swiotlb_active" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x3da171f9, "pci_mem_start" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x4668c9dc, "drm_dp_downstream_min_tmds_clock" },
	{ 0x2183c08c, "drm_mm_scan_add_block" },
	{ 0x38aa1397, "gpiod_add_lookup_table" },
	{ 0x1210e335, "ttm_device_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xfdd4216d, "pcibios_align_resource" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xfb6eedf9, "power_group_name" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xe197eb5e, "drm_encoder_init" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0xb027a021, "drm_dp_read_dpcd_caps" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x25daad93, "__drm_mm_interval_first" },
	{ 0x4f18a150, "__drm_debug" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xff91286, "drm_get_edid_switcheroo" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc722d0b7, "drm_dp_mst_detect_port" },
	{ 0x5f23f984, "drm_hdcp_update_content_protection" },
	{ 0xafb864c1, "refcount_dec_and_lock_irqsave" },
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x88597ed6, "drm_dp_dual_mode_detect" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1295d2fa, "mipi_dsi_compression_mode" },
	{ 0x2ed3c600, "drm_mode_debug_printmodeline" },
	{ 0xc512626a, "__supported_pte_mask" },
	{ 0x107b1f79, "drm_plane_create_color_properties" },
	{ 0x92997ed8, "_printk" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x148653, "vsnprintf" },
	{ 0xfb1a7a5a, "drm_dp_downstream_rgb_to_ycbcr_conversion" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x4403a9c3, "drm_mode_get_hv_timing" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc83693e2, "drm_fb_helper_restore_fbdev_mode_unlocked" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xefab5706, "drm_dp_cec_register_connector" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x44f74e6f, "drm_dp_pcon_enc_is_dsc_1_2" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xfe12bcb9, "drm_dsc_compute_rc_parameters" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xb19b445, "ioread8" },
	{ 0xa8a485e0, "__irq_alloc_descs" },
	{ 0x7a45377b, "acpi_video_unregister" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x4d14a211, "__cpuhp_state_remove_instance" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xcbbf89a9, "kobject_add" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x4d5acea, "drm_dp_atomic_find_vcpi_slots" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0xea874fb4, "drm_atomic_helper_swap_state" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x1057a279, "bsearch" },
	{ 0x2754dad8, "drm_mm_reserve_node" },
	{ 0x3a6a0e57, "debugfs_create_bool" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x51e5ba1b, "drm_atomic_state_clear" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7617dd86, "drm_dp_mst_hpd_irq" },
	{ 0xb570d09d, "mmu_interval_notifier_remove" },
	{ 0xadbeed61, "mipi_dsi_packet_format_is_long" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x8812868e, "drm_modeset_acquire_init" },
	{ 0xc7d04fc5, "drm_vma_node_allow" },
	{ 0xe7d0ef87, "get_task_pid" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x918511e4, "drm_crtc_accurate_vblank_count" },
	{ 0xdf3f760d, "drm_mm_scan_color_evict" },
	{ 0x685d5b31, "device_link_add" },
	{ 0x452a7f78, "drm_dp_dual_mode_set_tmds_output" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xe3feba56, "tasklet_unlock_spin_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x616f56b4, "drm_modeset_unlock" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x2d38b128, "devm_pinctrl_put" },
	{ 0x24e5769, "drm_connector_attach_dp_subconnector_property" },
	{ 0x275f3d49, "hdmi_vendor_infoframe_check" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5bd7084e, "drm_kms_helper_poll_enable" },
	{ 0x64c5e646, "drm_dp_mst_put_port_malloc" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xcb2340b8, "drm_rect_debug_print" },
	{ 0xd09761ab, "single_open_size" },
	{ 0x452bc27, "drm_dp_get_phy_test_pattern" },
	{ 0xc72016f1, "drm_atomic_state_alloc" },
	{ 0x65702bd6, "drm_default_rgb_quant_range" },
	{ 0xb52ee8be, "intel_gtt_clear_range" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x6e6ee55c, "drm_atomic_helper_duplicate_state" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0xc3f9143d, "dma_fence_array_create" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x622fb4dd, "drm_crtc_cleanup" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xe54b8675, "shmem_file_setup_with_mnt" },
	{ 0x37169f79, "cpu_latency_qos_update_request" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7410aba2, "strreplace" },
	{ 0x361ef720, "drm_dp_update_payload_part1" },
	{ 0x91fec1cc, "drm_rect_calc_vscale" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x350ea558, "dma_fence_default_wait" },
	{ 0x40d378ea, "drm_dp_update_payload_part2" },
	{ 0xeb5b55ef, "drm_atomic_helper_suspend" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x46f2a85c, "drm_dp_aux_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc23477d, "current_task" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x22041817, "drm_edp_backlight_disable" },
	{ 0xb0845b8b, "drm_connector_update_edid_property" },
	{ 0xa0ebd437, "hdmi_drm_infoframe_check" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6b5c2b06, "drm_atomic_helper_damage_iter_next" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x63f835ba, "on_each_cpu_cond_mask" },
	{ 0xa6498ac6, "drm_atomic_helper_commit_cleanup_done" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x16664270, "drm_dp_mst_topology_mgr_resume" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x28cbff68, "drm_atomic_add_affected_planes" },
	{ 0x1be625f6, "mipi_dsi_generic_write" },
	{ 0x2576741b, "pm_runtime_get_if_active" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4a4cc052, "perf_pmu_register" },
	{ 0x59ceb925, "put_pid" },
	{ 0xa07dd47d, "drm_fb_helper_cfb_fillrect" },
	{ 0xfc512872, "drm_atomic_state_default_clear" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x2d50570f, "drm_rect_calc_hscale" },
	{ 0xa257e0e5, "pagecache_get_page" },
	{ 0x3d11efe5, "dma_resv_add_shared_fence" },
	{ 0x42999e92, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x5d2cdf67, "drm_dp_mst_topology_mgr_init" },
	{ 0xa61e279, "drm_dp_mst_get_edid" },
	{ 0x42ef4b99, "drm_crtc_enable_color_mgmt" },
	{ 0x6d3587b7, "drm_universal_plane_init" },
	{ 0x76ff6644, "drm_dp_lttpr_pre_emphasis_level_3_supported" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0x1259c14b, "drm_connector_attach_privacy_screen_provider" },
	{ 0x17384c16, "drm_connector_init_with_ddc" },
	{ 0x2b912f3f, "drm_property_blob_get" },
	{ 0x25fe22fd, "drm_probe_ddc" },
	{ 0xc111ae64, "intel_gtt_get" },
	{ 0x1a5bf3ca, "drm_dsc_dp_rc_buffer_size" },
	{ 0x1c4150c0, "fd_install" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0xf028b69, "apply_to_page_range" },
	{ 0xe8362900, "drm_edid_duplicate" },
	{ 0x6536031b, "ttm_kmap_iter_iomap_init" },
	{ 0x595d8002, "hdmi_infoframe_pack" },
	{ 0x4fddc9de, "simple_attr_write" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0xccc59759, "drm_format_info_block_width" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x651a4139, "test_taint" },
	{ 0x9097c3a, "drm_plane_enable_fb_damage_clips" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xf8049ecb, "handle_simple_irq" },
	{ 0xf6588ea9, "drm_mode_is_420_only" },
	{ 0xdd8166a1, "dma_fence_free" },
	{ 0x28714395, "dma_unmap_resource" },
	{ 0xa64c3892, "set_page_dirty" },
	{ 0x6c44e551, "drm_atomic_helper_commit_hw_done" },
	{ 0x58a10589, "drm_dp_dpcd_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0xe8a0e334, "drm_vma_offset_add" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x3f0ab966, "drm_connector_list_iter_begin" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xe091c977, "list_sort" },
	{ 0x4c9c6388, "drm_fb_helper_initial_config" },
	{ 0xec788566, "acpi_target_system_state" },
	{ 0x7f7e1b02, "drm_dp_dpcd_write" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xc442df40, "drm_mode_create_tv_properties" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x28d87421, "__srcu_read_lock" },
	{ 0xa0d3456d, "nr_swap_pages" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xc1c41868, "drm_dp_cec_unset_edid" },
	{ 0x2dd00f02, "drm_object_attach_property" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xf0767cae, "drm_property_create_blob" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xb96b390a, "drm_helper_probe_detect" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe1b0db2f, "pci_d3cold_disable" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0x1f0ca91d, "kobject_uevent_env" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xaeb3abb2, "drm_connector_attach_colorspace_property" },
	{ 0x508fcdcf, "drm_encoder_cleanup" },
	{ 0xa5074d90, "intel_gmch_probe" },
	{ 0x364850b1, "down_write_killable" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb2922cca, "gpiod_put" },
	{ 0x11daceb9, "ttm_kmap_iter_tt_init" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xf0e02cc6, "drm_mode_config_cleanup" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0xca9beaa4, "__xa_store" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xbb8e169a, "vga_switcheroo_handler_flags" },
	{ 0x1f89dccc, "drm_crtc_add_crc_entry" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xa1fefe6a, "drm_dp_psr_setup_time" },
	{ 0x9e28d6d8, "pagecache_write_begin" },
	{ 0x311e3ba7, "unregister_shrinker" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3448bfee, "drm_gem_dmabuf_export" },
	{ 0x9b5bfc56, "drm_clflush_pages" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xbc1e4729, "dma_resv_add_excl_fence" },
	{ 0xfb660bf, "kernel_param_unlock" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x14f92f5e, "drm_dev_unplug" },
	{ 0xda8c8b32, "drm_dp_mst_allocate_vcpi" },
	{ 0x41db7fb2, "drm_dp_send_power_updown_phy" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0xdf0ca3f4, "cpu_latency_qos_request_active" },
	{ 0x21bbb3a0, "drm_property_create" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xbddec6d8, "drm_privacy_screen_put" },
	{ 0x7ad1ded1, "pinctrl_register_mappings" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xde80cd09, "ioremap" },
	{ 0x36fba308, "drm_dev_enter" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x94216657, "seq_read" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x438cbdb2, "drm_lspcon_get_mode" },
	{ 0xee808462, "drm_gem_dmabuf_release" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x540c46a3, "ttm_tt_populate" },
	{ 0x7bdfa8ed, "drm_dp_mst_dump_topology" },
	{ 0x81a311c7, "drm_connector_atomic_hdr_metadata_equal" },
	{ 0x85ce1577, "ttm_resource_manager_debug" },
	{ 0x90ce582b, "__drm_atomic_helper_crtc_state_reset" },
	{ 0x3117b63b, "drm_dp_downstream_max_bpc" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0x1d63f7e4, "drm_fb_helper_fill_info" },
	{ 0x1c4ced47, "unmap_mapping_range" },
	{ 0x66cb9ee5, "drm_crtc_send_vblank_event" },
	{ 0xac9638ca, "drm_atomic_set_crtc_for_plane" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x1730f2e8, "irq_set_chip_and_handler_name" },
	{ 0xd564cc99, "find_vma" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0xbc9f459f, "vmap" },
	{ 0xff81487d, "gpiod_remove_lookup_table" },
	{ 0xf43a2a55, "drm_connector_attach_hdr_output_metadata_property" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0xdfbcf889, "module_put" },
	{ 0x6758b3b7, "drm_modeset_acquire_fini" },
	{ 0x7b2e2166, "drm_vma_node_revoke" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x51cf315a, "pci_bus_read_config_word" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe03a689d, "dma_fence_array_ops" },
	{ 0xa44228e6, "drm_fb_helper_ioctl" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x1e6bf99f, "drm_atomic_helper_check_modeset" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x907d94cf, "vga_put" },
	{ 0x23daa989, "mipi_dsi_create_packet" },
	{ 0xfffa4690, "drm_firmware_drivers_only" },
	{ 0x317362e5, "drm_dp_cec_unregister_connector" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x6989c107, "drm_dp_pcon_hdmi_frl_link_error_count" },
	{ 0x971773bb, "drm_kms_helper_poll_init" },
	{ 0xb290ada, "dma_fence_chain_walk" },
	{ 0x244ac0c2, "mark_page_accessed" },
	{ 0xd9b555e2, "shmem_truncate_range" },
	{ 0xf689ad25, "drm_dp_downstream_420_passthrough" },
	{ 0x2da09720, "drm_dp_read_mst_cap" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x7a81541b, "async_synchronize_cookie" },
	{ 0xaa309cf, "synchronize_hardirq" },
	{ 0x930341e2, "drm_atomic_get_connector_state" },
	{ 0x55565b46, "vga_client_register" },
	{ 0xb2d2f1c4, "mmu_interval_read_begin" },
	{ 0x103cda11, "drm_dp_vsc_sdp_log" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x44dec824, "drm_vblank_work_init" },
	{ 0x99fd20aa, "drm_rect_clip_scaled" },
	{ 0x20978fb9, "idr_find" },
	{ 0xdd25f079, "drm_dp_pcon_dsc_max_slice_width" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x7a7dab2c, "drm_crtc_create_scaling_filter_property" },
	{ 0xded249a4, "drm_dp_mst_topology_mgr_suspend" },
	{ 0x2c541e7b, "radix_tree_next_chunk" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xaf267620, "drm_dp_lttpr_count" },
	{ 0xd2423f76, "i2c_acpi_get_i2c_resource" },
	{ 0x107742a9, "drm_get_subpixel_order_name" },
	{ 0x6bc3a29e, "drm_connector_set_panel_orientation_with_quirk" },
	{ 0x6ec86beb, "drm_dp_set_phy_test_pattern" },
	{ 0x59237586, "irq_work_queue" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xef6c3f70, "round_jiffies_up_relative" },
	{ 0x2a227550, "drm_atomic_state_default_release" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x44c9d63, "drm_vblank_init" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x8d4156d4, "drm_any_plane_has_format" },
	{ 0x6615069e, "drm_dp_dsc_sink_max_slice_count" },
	{ 0xc7791dbb, "mipi_dsi_set_maximum_return_packet_size" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0xdb210c32, "i2c_bit_algo" },
	{ 0xa2c56cf2, "kobject_create_and_add" },
	{ 0xf90c7956, "drm_dp_pcon_frl_configure_2" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0x7231e22f, "drm_plane_create_scaling_filter_property" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0x2a962499, "drm_mm_scan_init_with_range" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0xcd45bf6e, "drm_vblank_work_flush" },
	{ 0x5407ae9e, "drm_dp_get_dual_mode_type_name" },
	{ 0xe07186a9, "relay_open" },
	{ 0xc5bed0e3, "drm_dp_pcon_frl_configure_1" },
	{ 0xb96995f4, "drm_hdmi_avi_infoframe_quant_range" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x71f2a00e, "drm_debugfs_create_files" },
	{ 0xf0785fc6, "fput" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0xef269f8e, "drm_dp_aux_init" },
	{ 0xf8333b3c, "drm_dp_pcon_dsc_max_slices" },
	{ 0x5308c56d, "device_link_remove" },
	{ 0x668b19a1, "down_read" },
	{ 0x670941b8, "drm_dp_dpcd_read_phy_link_status" },
	{ 0xf9f324e5, "drm_dp_read_sink_count" },
	{ 0xbd5f04b4, "ttm_bo_put" },
	{ 0x17d6ff59, "drm_plane_create_alpha_property" },
	{ 0x5c9df047, "pci_bus_alloc_resource" },
	{ 0x23ee2889, "mipi_dsi_dcs_write" },
	{ 0xd690f4b2, "pid_task" },
	{ 0x7279c178, "drm_crtc_vblank_helper_get_vblank_timestamp_internal" },
	{ 0x301304c2, "__get_user_nocheck_8" },
	{ 0x9395b9cd, "drm_atomic_helper_shutdown" },
	{ 0x50961394, "drm_crtc_set_max_vblank_count" },
	{ 0x785b4c17, "kmem_cache_create_usercopy" },
	{ 0x55bda7c6, "ttm_bo_wait" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xe48beb7e, "drm_connector_unregister" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x1dfa0d0d, "drm_connector_attach_content_type_property" },
	{ 0xfcd1819a, "hdmi_spd_infoframe_check" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x7585d61b, "drm_dp_read_clock_recovery_delay" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x77482713, "component_del" },
	{ 0x2a118b32, "drm_property_add_enum" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x86632d5a, "default_llseek" },
	{ 0xffcd7f49, "iosf_mbi_punit_acquire" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xc0a7a96f, "sysfs_create_files" },
	{ 0xae4dc0ae, "drm_connector_attach_max_bpc_property" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0x1b0a1fdc, "drm_dp_lttpr_voltage_swing_level_3_supported" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x162a8d90, "ttm_bo_move_accel_cleanup" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6fb49676, "queue_rcu_work" },
	{ 0x6dc35b25, "radix_tree_iter_delete" },
	{ 0xa72f765, "drm_clflush_virt_range" },
	{ 0xa2331b14, "check_move_unevictable_pages" },
	{ 0xef6859df, "drm_calc_timestamping_constants" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x1a63af34, "vga_switcheroo_process_delayed_switch" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x2d4c773a, "hdmi_spd_infoframe_init" },
	{ 0x90042456, "drm_connector_attach_scaling_mode_property" },
	{ 0x3a45e387, "drm_dp_pcon_pps_override_param" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xffddba71, "drm_atomic_helper_cleanup_planes" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xf93d70df, "mipi_dsi_picture_parameter_set" },
	{ 0xfff7ae26, "dma_buf_unmap_attachment" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x77358855, "iomem_resource" },
	{ 0x20654d2a, "drm_connector_set_link_status_property" },
	{ 0x40d04664, "console_trylock" },
	{ 0x583325f1, "devm_pinctrl_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6667d789, "cec_fill_conn_info_from_drm" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x1db7706b, "__copy_user_nocache" },
	{ 0x87706d4e, "__put_user_nocheck_8" },
	{ 0x29eba37f, "current_is_async" },
	{ 0x998cc3c, "hdmi_infoframe_unpack" },
	{ 0x1d36acf4, "i2c_get_adapter" },
	{ 0x3ebd1582, "devm_gpiod_get_index" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x1e83ee0a, "drm_mode_probed_add" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x9ffcdfdb, "drm_detect_monitor_audio" },
	{ 0x4a5edea0, "drm_color_lut_check" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x203aaa7d, "ww_mutex_lock" },
	{ 0x56b48e53, "drm_framebuffer_init" },
	{ 0xc805f93, "clflush_cache_range" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x9306c110, "drm_dp_aux_register" },
	{ 0x7c90c753, "relay_buf_full" },
	{ 0x377bbcbc, "pm_suspend_target_state" },
	{ 0x8d9ca0e6, "dma_fence_enable_sw_signaling" },
	{ 0x4575a0ca, "drm_mode_set_crtcinfo" },
	{ 0x68d212c3, "init_uts_ns" },
	{ 0xb053adda, "drm_rect_rotate" },
	{ 0x751b1796, "kobject_init" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x9cd91791, "register_sysctl" },
	{ 0x74ac60e9, "dma_resv_iter_first_unlocked" },
	{ 0x44bfcdc3, "drm_connector_set_path_property" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xabdf39c6, "pci_d3cold_enable" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0x8323ecc5, "drm_dp_dual_mode_max_tmds_clock" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x1c21ecf9, "drm_atomic_helper_page_flip" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xf3644e5a, "drm_atomic_get_plane_state" },
	{ 0x1c3b42fa, "drm_fb_helper_debug_leave" },
	{ 0x86f6b99d, "synchronize_rcu_expedited" },
	{ 0x823c19ea, "iosf_mbi_unregister_pmic_bus_access_notifier_unlocked" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x3024ba4b, "device_get_next_child_node" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x349cba85, "strchr" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x8dea5b67, "drm_vblank_work_schedule" },
	{ 0xc631580a, "console_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x593f7aa7, "drm_dp_mst_connector_early_unregister" },
	{ 0x207e7e55, "drm_noop" },
	{ 0xf8d68b3f, "ttm_resource_manager_init" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7483dc59, "pci_dev_present" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1b2a9b8, "ww_mutex_lock_interruptible" },
	{ 0xccf54d5e, "drm_dp_get_adjust_tx_ffe_preset" },
	{ 0x7ac90ced, "debugfs_create_file_unsafe" },
	{ 0x9a908c6, "pci_get_class" },
	{ 0xa77e12cb, "unlock_page" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xddf0fa9b, "drm_helper_move_panel_connectors_to_head" },
	{ 0xbbd33326, "drm_dp_pcon_convert_rgb_to_ycbcr" },
	{ 0xb0b05ff5, "drm_clflush_sg" },
	{ 0x8113cc0d, "drm_syncobj_add_point" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x48476bcb, "intel_gtt_insert_page" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0xe18d1486, "debugfs_create_ulong" },
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0x2e7a17d4, "vmap_pfn" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xd349d253, "seq_printf" },
	{ 0x5a67ae6f, "drm_ioctl_kernel" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xc5e74216, "release_resource" },
	{ 0x191af822, "relay_flush" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x18177ab4, "ttm_resource_free" },
	{ 0x247b341d, "drm_fb_helper_check_var" },
	{ 0x3b509e53, "ttm_tt_fini" },
	{ 0xc60157c0, "drm_dev_get" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x243c9acd, "drm_dp_read_desc" },
	{ 0x58d8fcaa, "drm_dsc_pps_payload_pack" },
	{ 0xd268e216, "__cpuhp_state_add_instance" },
	{ 0xa2aae103, "ttm_bo_validate" },
	{ 0x4dca08ee, "sync_file_get_fence" },
	{ 0x806e02a3, "drm_edp_backlight_enable" },
	{ 0x76701210, "drm_property_replace_blob" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0xbcd66a94, "irq_work_sync" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x333b3a47, "drm_fb_helper_prepare" },
	{ 0x8b0cba42, "dma_resv_fini" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x21be37e1, "hdmi_avi_infoframe_check" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe7186c1a, "ttm_pool_alloc" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x8ca2d9e4, "drm_dp_calc_pbn_mode" },
	{ 0xfa044333, "drm_atomic_helper_commit_duplicated_state" },
	{ 0x86afab43, "pci_bus_read_config_byte" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x213cd84c, "drm_poll" },
	{ 0x5b6b0329, "swiotlb_max_segment" },
	{ 0xc4f8bafa, "drm_gem_handle_create" },
	{ 0x8f2703b7, "wbinvd_on_all_cpus" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0x12b843bd, "drm_modeset_backoff" },
	{ 0xf5eefaee, "drm_crtc_arm_vblank_event" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x28779e52, "drm_printf" },
	{ 0x87bef50d, "drm_hdcp_check_ksvs_revoked" },
	{ 0x8e10445e, "drm_privacy_screen_get" },
	{ 0x301872de, "drm_mode_object_put" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0x52f51679, "drm_helper_hpd_irq_event" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x4e22eaef, "drm_dp_mst_deallocate_vcpi" },
	{ 0xf25034ce, "vfs_kern_mount" },
	{ 0x208a26ab, "drm_invalid_op" },
	{ 0xad2b1f1c, "__drm_atomic_helper_plane_destroy_state" },
	{ 0x2b452e1f, "drm_atomic_helper_wait_for_flip_done" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xde0a91fe, "drm_connector_list_iter_end" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0x9d155aaf, "drm_dp_downstream_mode" },
	{ 0xdd94ebef, "drm_fb_helper_pan_display" },
	{ 0xe167dc3d, "init_srcu_struct" },
	{ 0xac42e20, "drm_mode_object_get" },
	{ 0xfd60df2, "drm_get_connector_status_name" },
	{ 0x8c0d9cc, "vga_switcheroo_unregister_client" },
	{ 0xcac6af8e, "drm_dp_pcon_hdmi_link_active" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x58fec7b4, "drm_helper_mode_fill_fb_struct" },
	{ 0x99bf3299, "hdmi_infoframe_log" },
	{ 0x4b5e3a47, "__get_user_nocheck_1" },
	{ 0x39ebd0, "__SCK__tp_func_dma_fence_signaled" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0x1fbca594, "__drm_atomic_helper_plane_state_reset" },
	{ 0x2921e434, "sysfs_create_file_ns" },
	{ 0x90d1abbb, "relay_switch_subbuf" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x1605d0ed, "drm_dp_lttpr_max_lane_count" },
	{ 0xde0eba69, "pinctrl_select_state" },
	{ 0xfe94e207, "drm_dev_put" },
	{ 0x8a93550c, "cpufreq_cpu_get" },
	{ 0xe72cc289, "__pagevec_release" },
	{ 0xa916b694, "strnlen" },
	{ 0x1c73b498, "drm_hdmi_avi_infoframe_colorspace" },
	{ 0x649668a3, "dma_buf_attach" },
	{ 0xe659a687, "drm_dp_atomic_release_vcpi_slots" },
	{ 0x73011db0, "drm_dp_bw_code_to_link_rate" },
	{ 0x622ae652, "pci_unmap_rom" },
	{ 0xce807a25, "up_write" },
	{ 0xec47a6fc, "mipi_dsi_dcs_nop" },
	{ 0x9d5448ad, "drm_atomic_add_affected_connectors" },
	{ 0xcc23002a, "hdmi_infoframe_pack_only" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x3ba3630c, "drm_crtc_vblank_off" },
	{ 0x50aa3fb, "drm_atomic_helper_disable_plane" },
	{ 0x622c7922, "register_oom_notifier" },
	{ 0xcbf620d5, "ttm_tt_init" },
	{ 0xf3c8e629, "drm_scdc_set_scrambling" },
	{ 0x3a32839e, "intel_gtt_chipset_flush" },
	{ 0x9f984513, "strrchr" },
	{ 0x53b954a2, "up_read" },
	{ 0xc17e4c4d, "drm_gem_prime_fd_to_handle" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x5a290250, "hdmi_drm_infoframe_pack_only" },
	{ 0x55b05d2f, "drm_dp_mst_get_port_malloc" },
	{ 0xe75bf512, "shmem_read_mapping_page_gfp" },
	{ 0x28abcbaa, "sysfs_remove_files" },
	{ 0x72ad465, "dma_resv_wait_timeout" },
	{ 0xfa174f0b, "acpi_find_child_device" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf824c7db, "__drm_printfn_debug" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xebcd316c, "drm_open" },
	{ 0xfe5eb2fd, "sysfs_merge_group" },
	{ 0x48c093fb, "_atomic_dec_and_lock_irqsave" },
	{ 0x160d44c4, "drm_atomic_helper_prepare_planes" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x6f36bb6a, "drm_mode_create_dp_colorspace_property" },
	{ 0xc617f82c, "unregister_oom_notifier" },
	{ 0x8b08a34a, "drm_modeset_lock_single_interruptible" },
	{ 0x807ef12e, "ww_mutex_trylock" },
	{ 0x10958611, "dma_buf_put" },
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0x1fc0cc7c, "intel_gtt_insert_sg_entries" },
	{ 0x49e96999, "cond_synchronize_rcu" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x3f3737c8, "page_mapped" },
	{ 0x5f7985a5, "drm_mm_scan_remove_block" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x3a7b2b28, "drm_gem_free_mmap_offset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x5a921311, "strncmp" },
	{ 0xe9a5e67f, "intel_graphics_stolen_res" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x6f720dbc, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x3dbcd995, "drm_fb_helper_alloc_fbi" },
	{ 0xad26179b, "ttm_bo_vm_access" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0xbe94e383, "drm_mode_crtc_set_gamma_size" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0x4fb50855, "i2c_acpi_find_adapter_by_handle" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3ac65c09, "relay_close" },
	{ 0xeabf254f, "pci_map_rom" },
	{ 0xaaacd15a, "vga_switcheroo_client_fb_set" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0x97a30c09, "drm_lspcon_set_mode" },
	{ 0x3d83bbbd, "register_shrinker" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x4bb89424, "drm_dp_downstream_max_tmds_clock" },
	{ 0x4f8b3338, "drm_atomic_commit" },
	{ 0xa207aad2, "drm_connector_attach_vrr_capable_property" },
	{ 0x31b10d72, "drm_gem_prime_handle_to_fd" },
	{ 0x18aad025, "ttm_bo_init_reserved" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xb5a3b440, "drm_plane_create_blend_mode_property" },
	{ 0xc5c99a79, "drm_dp_get_adjust_request_voltage" },
	{ 0x1564421, "request_firmware" },
	{ 0x3a8063f3, "drm_dp_dsc_sink_supported_input_bpcs" },
	{ 0xee111615, "param_ops_int" },
	{ 0xdb84d981, "__drm_atomic_helper_connector_reset" },
	{ 0xe44aecc1, "fwnode_handle_get" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x82226c53, "pinctrl_unregister_mappings" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x1ebf6c2a, "pci_power_names" },
	{ 0xaee236c6, "cec_notifier_conn_unregister" },
	{ 0x2bcc9515, "drm_crtc_vblank_restore" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8e4160f, "device_remove_bin_file" },
	{ 0xfe287d2b, "drm_dp_pcon_frl_prepare" },
	{ 0x7640d517, "vga_switcheroo_register_client" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xe4345174, "single_open" },
	{ 0xc40956ec, "mmu_interval_notifier_insert" },
	{ 0xf75dd7d6, "drm_dp_pcon_frl_enable" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xff2d37b7, "dma_map_resource" },
	{ 0x1ceaf9a0, "cpufreq_cpu_put" },
	{ 0xc7910e38, "drm_vma_offset_lookup_locked" },
	{ 0x14b256d3, "perf_event_sysfs_show" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x1c4bba9, "drm_dp_lttpr_max_link_rate" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0xf562eb58, "pin_user_pages_fast" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xece784c2, "rb_first" },
	{ 0xfb578fc5, "memset" },
	{ 0xe8aa5306, "cleanup_srcu_struct" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6f105db5, "perf_pmu_unregister" },
	{ 0x68c4b824, "cpumask_any_but" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x582f248e, "drm_dp_get_adjust_request_pre_emphasis" },
	{ 0xf7cd6330, "dma_resv_iter_next_unlocked" },
	{ 0x6730b5c, "vma_set_file" },
	{ 0xfbc4f89e, "io_schedule_timeout" },
	{ 0x9076801f, "drm_dp_read_lttpr_phy_caps" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0x94a7add8, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x77bc13a0, "strim" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x26815dbc, "drm_dp_link_rate_to_bw_code" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x37447de7, "synchronize_srcu_expedited" },
	{ 0x98783514, "unpin_user_pages" },
	{ 0xbdc46c07, "shmem_file_setup" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0xd227a2c6, "drm_crtc_vblank_on" },
	{ 0x5750674b, "get_fs_type" },
	{ 0x9b95c885, "drm_mode_match" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6b46f3f8, "vm_mmap" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x96cbe9fd, "drm_dp_read_channel_eq_delay" },
	{ 0xdb756b26, "drm_kms_helper_connector_hotplug_event" },
	{ 0x6e977d62, "mipi_dsi_dcs_write_buffer" },
	{ 0xf30965ac, "iosf_mbi_register_pmic_bus_access_notifier" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x723c57c3, "component_add_typed" },
	{ 0x9ad7a582, "iosf_mbi_assert_punit_acquired" },
	{ 0xa5ea959d, "sysfs_unmerge_group" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x1ae2b9be, "platform_device_register_full" },
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
	{ 0x7053fa72, "drm_dp_get_pcon_max_frl_bw" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x3b20fb95, "dma_fence_remove_callback" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0x24cf437a, "drm_vma_node_is_allowed" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x2d393f48, "intel_soc_pmic_exec_mipi_pmic_seq_element" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x2590edf8, "cec_notifier_conn_register" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0xd900956d, "drm_crtc_wait_one_vblank" },
	{ 0xe70bb55b, "vga_get" },
	{ 0xc2591f66, "drm_atomic_get_crtc_state" },
	{ 0xb0abe1cf, "bpf_trace_run5" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x51c60bea, "bpf_trace_run6" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x72eedffb, "drm_syncobj_create" },
	{ 0x642f01ff, "drm_fb_helper_fini" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x871ab41a, "drm_rect_intersect" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0x29ae4d84, "drm_fb_helper_set_suspend" },
	{ 0x96848186, "scnprintf" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xd67dfe8f, "sync_file_create" },
	{ 0x6e4ed37f, "drm_property_create_enum" },
	{ 0xcb970751, "stop_machine" },
	{ 0x1ac7f710, "pwm_put" },
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0xb25b2846, "perf_pmu_migrate_context" },
	{ 0xca9360b5, "rb_next" },
	{ 0x7decbec8, "acpi_dev_get_resources" },
	{ 0x2fa94ef2, "drm_dp_downstream_444_to_420_conversion" },
	{ 0xce77cc63, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0x9593710b, "drm_modeset_unlock_all" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0xbf8e87c0, "zap_vma_ptes" },
	{ 0x76a31ec1, "ttm_bo_vm_reserve" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x7db370f9, "drm_dp_mst_topology_mgr_destroy" },
	{ 0x3ce0bbfe, "drm_atomic_helper_update_legacy_modeset_state" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x88c0971a, "drm_dp_mst_atomic_check" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x93c5dc27, "drm_dp_set_subconnector_property" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x8d1571d4, "ww_mutex_unlock" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x133be684, "bpf_trace_run9" },
	{ 0x4831da6e, "drm_vma_offset_remove" },
	{ 0x67e1dfdc, "cec_notifier_set_phys_addr_from_edid" },
	{ 0x3faad943, "drm_fb_helper_unregister_fbi" },
	{ 0xe1194d5, "hrtimer_try_to_cancel" },
	{ 0x732b07cf, "drm_crtc_from_index" },
	{ 0x4c6c23d4, "drm_atomic_set_crtc_for_connector" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe8cdf82e, "drm_atomic_set_mode_for_crtc" },
	{ 0x3d02cd70, "dma_fence_signal_locked" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe3ff2c41, "get_random_u64" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xe2154344, "drm_hdmi_vendor_infoframe_from_display_mode" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x8826c13b, "acpi_video_register" },
	{ 0x789d907c, "drm_connector_update_privacy_screen" },
	{ 0xc563402c, "ttm_resource_init" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x8546d496, "drm_connector_attach_encoder" },
	{ 0x5820a2e9, "drm_property_blob_put" },
	{ 0x2e349c9c, "drm_plane_create_rotation_property" },
	{ 0xf6b031bb, "drm_mode_duplicate" },
	{ 0x19ce1f08, "pinctrl_lookup_state" },
	{ 0x5bcb8eca, "drm_get_edid" },
	{ 0xcd6692c1, "drm_scdc_read" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x54967bc8, "drm_mode_create_aspect_ratio_property" },
	{ 0x6f5445fe, "anon_inode_getfile" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xacb87415, "drm_crtc_handle_vblank" },
	{ 0xc1c8a0c9, "dma_resv_init" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xe4a91038, "drm_atomic_helper_wait_for_dependencies" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0x715dbf85, "drm_atomic_helper_disable_all" },
	{ 0xd825a72e, "drm_crtc_vblank_reset" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x2fd828ab, "drm_dp_mst_connector_late_register" },
	{ 0x999e8297, "vfree" },
	{ 0x5f112090, "dma_resv_iter_first" },
	{ 0xd050d01e, "drm_atomic_helper_update_plane" },
	{ 0x75239fba, "drm_fb_helper_setcmap" },
	{ 0x40f1c802, "relay_file_operations" },
	{ 0xc440c8d0, "pwm_apply_state" },
	{ 0xe4f6bac8, "drm_aperture_remove_conflicting_pci_framebuffers" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8786a2a5, "drm_modeset_lock_all_ctx" },
	{ 0xc749376e, "drm_atomic_helper_setup_commit" },
	{ 0xb4971d2d, "drm_dp_downstream_debug" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x82aa5f7a, "dma_buf_fd" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x4017b255, "drm_is_current_master" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0xedcf81ce, "drm_dp_channel_eq_ok" },
	{ 0xe89dc99d, "drm_atomic_set_fb_for_plane" },
	{ 0xdc0970c4, "drm_dp_mst_reset_vcpi_slots" },
	{ 0x27ff6da7, "drm_atomic_state_init" },
	{ 0x144307f1, "drm_dp_mst_topology_mgr_set_mst" },
	{ 0x745a981, "xa_erase" },
	{ 0x392a838b, "drm_dp_downstream_max_dotclock" },
	{ 0xbd617799, "drm_mode_is_420_also" },
	{ 0x518ea61b, "ttm_bo_vm_dummy_page" },
	{ 0xa48dbc43, "vga_switcheroo_client_probe_defer" },
};

MODULE_INFO(depends, "ttm,drm,drm_kms_helper,i2c-core,cec,video,backlight,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00003577sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002562sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000358Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002572sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000258Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002592sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002772sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027AEsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002972sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002982sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002992sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029C2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029D2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E92sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A001sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A011sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000042sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000046sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000102sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000010Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000112sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000122sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000106sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000116sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000126sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv0000152Dsd00008990bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000156sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000166sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000152sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000015Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000162sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000402sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000406sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000412sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000416sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000422sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000426sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F30sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F31sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F33sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001606sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001602sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001616sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001612sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001626sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001622sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001636sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001632sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001913sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001915sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001917sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001923sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001927sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001932sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001A85sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A85sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003184sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003185sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005913sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005915sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005908sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005917sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005923sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005927sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000593Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000087C0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E90sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E93sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E99sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E91sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E92sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E96sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E98sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E9Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E9Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E94sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E9Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA9sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA5sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA7sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA4sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000087CAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BA2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BA4sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BA5sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BA8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BC2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BC4sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BC5sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BC6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BC8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BE6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BF6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009B21sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BAAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BACsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009B41sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BCAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009BCCsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A50sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A52sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A53sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A54sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A56sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A57sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A58sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A59sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A70sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A71sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A51sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004541sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004551sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004555sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004557sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004571sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004E51sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004E55sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004E57sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004E61sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004E71sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A60sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A68sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A70sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A40sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A49sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A59sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009A78sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AC0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AC9sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AD9sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00009AF8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C80sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C8Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C8Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C8Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C90sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004C9Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004680sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004682sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004688sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000468Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004690sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004692sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004693sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046A8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046AAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000462Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004626sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004628sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046B3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000046C3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004905sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004907sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004908sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00004909sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A780sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A781sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A782sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A783sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A788sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A789sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "CF8C131D604789B9C7E3B6A");
