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
	{ 0x5b88a221, "drm_primary_helper_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xabdb3a26, "drm_release" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xdca846a3, "drm_dev_register" },
	{ 0xcd72d04c, "drm_compat_ioctl" },
	{ 0xd050d01e, "drm_atomic_helper_update_plane" },
	{ 0xc31230a1, "drm_atomic_helper_crtc_duplicate_state" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0xc16cc669, "drm_mode_config_helper_resume" },
	{ 0xf0e02cc6, "drm_mode_config_cleanup" },
	{ 0x2b7a7d3f, "drm_gem_vram_plane_helper_cleanup_fb" },
	{ 0x7d0ba682, "gen_pool_virt_to_phys" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0x4e5fd603, "drm_atomic_helper_connector_reset" },
	{ 0xd350b3df, "drm_gem_ttm_dumb_map_offset" },
	{ 0x1c21ecf9, "drm_atomic_helper_page_flip" },
	{ 0x6727802e, "drm_mode_destroy" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xd4b60c90, "drm_gem_reset_shadow_plane" },
	{ 0x325b65f4, "drm_cvt_mode" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0x44386919, "drm_kms_helper_hotplug_event" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe197eb5e, "drm_encoder_init" },
	{ 0x4cf863fe, "drm_object_property_set_value" },
	{ 0x17660511, "drm_connector_list_iter_next" },
	{ 0x1d80d6d3, "drm_atomic_helper_crtc_reset" },
	{ 0x8460140b, "drm_gem_destroy_shadow_plane_state" },
	{ 0x6d3587b7, "drm_universal_plane_init" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0x791cf2de, "devm_gen_pool_create" },
	{ 0x6f720dbc, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xcfcbf52b, "drmm_vram_helper_init" },
	{ 0xcdb1fec, "devm_arch_phys_wc_add" },
	{ 0xa24bd280, "drm_fbdev_generic_setup" },
	{ 0x4226beb7, "drm_atomic_helper_set_config" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0xb0845b8b, "drm_connector_update_edid_property" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0x64dbad54, "drm_dev_unregister" },
	{ 0x45f0e206, "drm_gem_prepare_shadow_fb" },
	{ 0x43e49a0b, "drm_plane_get_damage_clips_count" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2dd00f02, "drm_object_attach_property" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6e6d333, "drm_crtc_init_with_planes" },
	{ 0xb4f83b67, "drm_atomic_helper_plane_reset" },
	{ 0xc6c981d, "drm_atomic_helper_check_plane_state" },
	{ 0x2a4a9dc9, "drm_vram_mm_debugfs_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd8b59288, "drm_vram_helper_mode_valid" },
	{ 0xedf8fe35, "drm_gem_fb_create_with_dirty" },
	{ 0xd5fff2c, "drm_read" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdafa7f52, "drm_mode_config_helper_suspend" },
	{ 0x4213e52a, "pci_iomap_range" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0x616f56b4, "drm_modeset_unlock" },
	{ 0x36ab3c2d, "drm_modeset_lock" },
	{ 0xf1d3bab5, "drm_gem_cleanup_shadow_fb" },
	{ 0x3378cb69, "drm_gem_vram_plane_helper_prepare_fb" },
	{ 0x397399da, "drm_plane_cleanup" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0x8da694ef, "drm_gem_duplicate_shadow_plane_state" },
	{ 0x9a06b54c, "drm_gem_mmap" },
	{ 0xdf1dc7de, "drm_atomic_helper_plane_duplicate_state" },
	{ 0xde0a91fe, "drm_connector_list_iter_end" },
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0xb61328de, "drm_atomic_helper_check" },
	{ 0x9a0696a6, "drm_atomic_helper_commit" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x486075c8, "gen_pool_dma_alloc" },
	{ 0x8546d496, "drm_connector_attach_encoder" },
	{ 0x9fad6477, "drm_add_modes_noedid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfffa4690, "drm_firmware_drivers_only" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3466f516, "drm_plane_get_damage_clips" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0x55aae8c7, "drm_gem_vram_offset" },
	{ 0xe48beb7e, "drm_connector_unregister" },
	{ 0x508fcdcf, "drm_encoder_cleanup" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x3f0ab966, "drm_connector_list_iter_begin" },
	{ 0x622fb4dd, "drm_crtc_cleanup" },
	{ 0x30be25a0, "drm_atomic_helper_crtc_destroy_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x22467add, "drm_mode_create_suggested_offset_properties" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xccaae608, "drm_gem_prime_mmap" },
	{ 0x50aa3fb, "drm_atomic_helper_disable_plane" },
	{ 0x1e83ee0a, "drm_mode_probed_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xeb76e138, "drm_fb_helper_lastclose" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x100ad7e5, "drm_gem_vram_driver_dumb_create" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xbe94e383, "drm_mode_crtc_set_gamma_size" },
	{ 0x213cd84c, "drm_poll" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xebcd316c, "drm_open" },
	{ 0xe4f6bac8, "drm_aperture_remove_conflicting_pci_framebuffers" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x7c51be4a, "drm_atomic_helper_plane_destroy_state" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,drm_vram_helper,drm_ttm_helper");

MODULE_ALIAS("pci:v000080EEd0000BEEFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7BBEE4EA2C3B28872694C63");
