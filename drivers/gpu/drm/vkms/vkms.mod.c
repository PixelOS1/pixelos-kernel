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
	{ 0xabdb3a26, "drm_release" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdca846a3, "drm_dev_register" },
	{ 0xcd72d04c, "drm_compat_ioctl" },
	{ 0xef6859df, "drm_calc_timestamping_constants" },
	{ 0xd050d01e, "drm_atomic_helper_update_plane" },
	{ 0xf5eefaee, "drm_crtc_arm_vblank_event" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc6c07f84, "__drm_gem_destroy_shadow_plane_state" },
	{ 0x4955c901, "__drm_gem_duplicate_shadow_plane_state" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0x4e5fd603, "drm_atomic_helper_connector_reset" },
	{ 0x6c44e551, "drm_atomic_helper_commit_hw_done" },
	{ 0xd6a66f9f, "drm_set_preferred_mode" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x1c21ecf9, "drm_atomic_helper_page_flip" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xacb87415, "drm_crtc_handle_vblank" },
	{ 0x79b037b, "__drm_atomic_helper_crtc_reset" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0xd349d253, "seq_printf" },
	{ 0x3ba3630c, "drm_crtc_vblank_off" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2b452e1f, "drm_atomic_helper_wait_for_flip_done" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x44c9d63, "drm_vblank_init" },
	{ 0xf412077, "drm_simple_encoder_init" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x7205ce73, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6f720dbc, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x94a7add8, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0xa24bd280, "drm_fbdev_generic_setup" },
	{ 0x4226beb7, "drm_atomic_helper_set_config" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x5b1a4f0, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0x64dbad54, "drm_dev_unregister" },
	{ 0x45f0e206, "drm_gem_prepare_shadow_fb" },
	{ 0xf17dce39, "drm_crtc_vblank_put" },
	{ 0x6e6d333, "drm_crtc_init_with_planes" },
	{ 0xc6c981d, "drm_atomic_helper_check_plane_state" },
	{ 0x1606604e, "drm_gem_fb_get_obj" },
	{ 0xb2ff318a, "drm_gem_fb_create" },
	{ 0xf9aa1869, "devres_open_group" },
	{ 0xd227a2c6, "drm_crtc_vblank_on" },
	{ 0x85a73158, "drm_gem_fb_vunmap" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd5fff2c, "drm_read" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x9e69a29c, "__drmm_universal_plane_alloc" },
	{ 0x71f2a00e, "drm_debugfs_create_files" },
	{ 0x39c6fb82, "drm_atomic_helper_fake_vblank" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0x1a4881e3, "drm_writeback_connector_init" },
	{ 0xf1d3bab5, "drm_gem_cleanup_shadow_fb" },
	{ 0xc2591f66, "drm_atomic_get_crtc_state" },
	{ 0xc17e4c4d, "drm_gem_prime_fd_to_handle" },
	{ 0x32b38ff3, "drm_gem_fb_vmap" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0x9a06b54c, "drm_gem_mmap" },
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0xb61328de, "drm_atomic_helper_check" },
	{ 0x9a0696a6, "drm_atomic_helper_commit" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x918511e4, "drm_crtc_accurate_vblank_count" },
	{ 0xe5eb3580, "drm_atomic_helper_commit_modeset_disables" },
	{ 0x8546d496, "drm_connector_attach_encoder" },
	{ 0x66cb9ee5, "drm_crtc_send_vblank_event" },
	{ 0x5c7b0e68, "drm_crtc_vblank_get" },
	{ 0x301872de, "drm_mode_object_put" },
	{ 0x9fad6477, "drm_add_modes_noedid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0x31b10d72, "drm_gem_prime_handle_to_fd" },
	{ 0x508fcdcf, "drm_encoder_cleanup" },
	{ 0x749e23a0, "drm_writeback_signal_completion" },
	{ 0x622fb4dd, "drm_crtc_cleanup" },
	{ 0x862906f4, "drm_atomic_helper_commit_planes" },
	{ 0x398cab93, "drm_writeback_queue_job" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xac42e20, "drm_mode_object_get" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xffddba71, "drm_atomic_helper_cleanup_planes" },
	{ 0x9395b9cd, "drm_atomic_helper_shutdown" },
	{ 0xccaae608, "drm_gem_prime_mmap" },
	{ 0x50aa3fb, "drm_atomic_helper_disable_plane" },
	{ 0xc70030f6, "drm_gem_shmem_dumb_create" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x28cbff68, "drm_atomic_add_affected_planes" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x627ac832, "devres_release_group" },
	{ 0x7b87a9f3, "drm_atomic_helper_commit_modeset_enables" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x2273f418, "__drm_gem_reset_shadow_plane" },
	{ 0x213cd84c, "drm_poll" },
	{ 0xebcd316c, "drm_open" },
	{ 0x1f89dccc, "drm_crtc_add_crc_entry" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_shmem_helper");


MODULE_INFO(srcversion, "CD6A0AD509A8B1A7E453AD4");
