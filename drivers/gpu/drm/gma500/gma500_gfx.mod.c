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
	{ 0xabdb3a26, "drm_release" },
	{ 0x9e29dc28, "drm_fb_helper_set_par" },
	{ 0xa44228e6, "drm_fb_helper_ioctl" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x21bb6da9, "drm_crtc_helper_set_config" },
	{ 0xdca846a3, "drm_dev_register" },
	{ 0xcd72d04c, "drm_compat_ioctl" },
	{ 0x53b954a2, "up_read" },
	{ 0x24bf8629, "drm_helper_resume_force_mode" },
	{ 0x1ec3f5c8, "drm_gem_put_pages" },
	{ 0x5bcb8eca, "drm_get_edid" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xa07dd47d, "drm_fb_helper_cfb_fillrect" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x4c9c6388, "drm_fb_helper_initial_config" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xc5e74216, "release_resource" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x622ae652, "pci_unmap_rom" },
	{ 0xf0e02cc6, "drm_mode_config_cleanup" },
	{ 0xcddca71c, "vmf_insert_mixed" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0x732b07cf, "drm_crtc_from_index" },
	{ 0x6ce76cd7, "drm_gem_fb_create_handle" },
	{ 0x6727802e, "drm_mode_destroy" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x79728442, "drm_property_create_range" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x1c3b42fa, "drm_fb_helper_debug_leave" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0x3ba3630c, "drm_crtc_vblank_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0x999e8297, "vfree" },
	{ 0x44c9d63, "drm_vblank_init" },
	{ 0xf412077, "drm_simple_encoder_init" },
	{ 0xb6e35dca, "set_pages_array_wc" },
	{ 0xe197eb5e, "drm_encoder_init" },
	{ 0x4cf863fe, "drm_object_property_set_value" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0x5012a70, "pv_ops" },
	{ 0x9ffcdfdb, "drm_detect_monitor_audio" },
	{ 0x8826c13b, "acpi_video_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0xc664eba3, "drm_get_format_info" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x3faad943, "drm_fb_helper_unregister_fbi" },
	{ 0xdd94ebef, "drm_fb_helper_pan_display" },
	{ 0xbb07b98e, "drm_handle_vblank" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0xb0845b8b, "drm_connector_update_edid_property" },
	{ 0xd75f2c51, "drm_helper_connector_dpms" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x134e4f32, "drm_fb_helper_cfb_copyarea" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x64dbad54, "drm_dev_unregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xf17dce39, "drm_crtc_vblank_put" },
	{ 0x58fec7b4, "drm_helper_mode_fill_fb_struct" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2dd00f02, "drm_object_attach_property" },
	{ 0xf6b031bb, "drm_mode_duplicate" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0xc4f8bafa, "drm_gem_handle_create" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xeabf254f, "pci_map_rom" },
	{ 0xd227a2c6, "drm_crtc_vblank_on" },
	{ 0x9166fada, "strncpy" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0xb881338a, "drm_gem_object_release" },
	{ 0xd5fff2c, "drm_read" },
	{ 0x5a8857da, "drm_add_edid_modes" },
	{ 0x2a118b32, "drm_property_add_enum" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xce807a25, "up_write" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0x333b3a47, "drm_fb_helper_prepare" },
	{ 0x1db804a, "drm_gem_vm_open" },
	{ 0x2ec0324, "drm_gem_vm_close" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xcddcc69c, "drm_helper_crtc_in_use" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x4575a0ca, "drm_mode_set_crtcinfo" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0x48861b1b, "drm_fb_helper_output_poll_changed" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x9a06b54c, "drm_gem_mmap" },
	{ 0x21075824, "__free_pages" },
	{ 0xd315eeaf, "set_pages_array_wb" },
	{ 0x19db7fed, "i2c_add_numbered_adapter" },
	{ 0xe6f2a4bb, "drm_mode_create_scaling_mode_property" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0x25287ad8, "drm_framebuffer_unregister_private" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x247b341d, "drm_fb_helper_check_var" },
	{ 0xa9227c5e, "drm_gem_private_object_init" },
	{ 0xf0731762, "drm_object_property_get_value" },
	{ 0x9c463e07, "drm_fb_helper_blank" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x21f1e459, "drm_crtc_helper_set_mode" },
	{ 0x2ed3c600, "drm_mode_debug_printmodeline" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xce0f384c, "set_pages_wb" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x8546d496, "drm_connector_attach_encoder" },
	{ 0x66cb9ee5, "drm_crtc_send_vblank_event" },
	{ 0xd6fdddea, "drm_gem_object_lookup" },
	{ 0x5c7b0e68, "drm_crtc_vblank_get" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x65e86ac, "drm_detect_hdmi_monitor" },
	{ 0x3dbcd995, "drm_fb_helper_alloc_fbi" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xaf78938f, "drm_crtc_init" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0xe48beb7e, "drm_connector_unregister" },
	{ 0xbe297836, "drm_gem_object_init" },
	{ 0x508fcdcf, "drm_encoder_cleanup" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x1d63f7e4, "drm_fb_helper_fill_info" },
	{ 0x317eb31e, "drm_aperture_remove_conflicting_framebuffers" },
	{ 0x622fb4dd, "drm_crtc_cleanup" },
	{ 0x37a0cba, "kfree" },
	{ 0x52f51679, "drm_helper_hpd_irq_event" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0xddbfdca, "drm_fb_helper_cfb_imageblit" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x41c75f53, "set_pages_uc" },
	{ 0x642f01ff, "drm_fb_helper_fini" },
	{ 0x5738bde2, "drm_modeset_lock_all" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x61a67417, "i2c_bit_add_bus" },
	{ 0x1e83ee0a, "drm_mode_probed_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9593710b, "drm_modeset_unlock_all" },
	{ 0x51e8fc42, "drm_helper_disable_unused_functions" },
	{ 0x75239fba, "drm_fb_helper_setcmap" },
	{ 0x21bbb3a0, "drm_property_create" },
	{ 0xeb76e138, "drm_fb_helper_lastclose" },
	{ 0x56b48e53, "drm_framebuffer_init" },
	{ 0x971773bb, "drm_kms_helper_poll_init" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x1d36acf4, "i2c_get_adapter" },
	{ 0x39196e30, "drm_gem_get_pages" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xb23c0578, "drm_connector_register" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0xbe94e383, "drm_mode_crtc_set_gamma_size" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xa84bd83d, "vmf_insert_pfn" },
	{ 0x8f3a069, "drm_fb_helper_debug_enter" },
	{ 0x213cd84c, "drm_poll" },
	{ 0x39e4abcf, "drm_fb_helper_init" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xebcd316c, "drm_open" },
	{ 0xb759bd4f, "drm_kms_helper_poll_fini" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x93146ccb, "drm_gem_fb_destroy" },
	{ 0x3d1f51f3, "drm_framebuffer_cleanup" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,i2c-core,video,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00008108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008109sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "885B5185DB9D93D752A020C");
