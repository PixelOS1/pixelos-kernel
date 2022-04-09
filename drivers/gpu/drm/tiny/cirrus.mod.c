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
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0x6f720dbc, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0x4e5fd603, "drm_atomic_helper_connector_reset" },
	{ 0x5bb6fa6b, "drm_gem_simple_kms_destroy_shadow_plane_state" },
	{ 0x1b02a41, "drm_gem_simple_kms_duplicate_shadow_plane_state" },
	{ 0x516c7a70, "drm_gem_simple_kms_reset_shadow_plane" },
	{ 0xc78aa33a, "drm_gem_simple_kms_cleanup_shadow_fb" },
	{ 0x1c93bb86, "drm_gem_simple_kms_prepare_shadow_fb" },
	{ 0x9a0696a6, "drm_atomic_helper_commit" },
	{ 0xb61328de, "drm_atomic_helper_check" },
	{ 0xabdb3a26, "drm_release" },
	{ 0xebcd316c, "drm_open" },
	{ 0x9a06b54c, "drm_gem_mmap" },
	{ 0xcd72d04c, "drm_compat_ioctl" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0x213cd84c, "drm_poll" },
	{ 0xd5fff2c, "drm_read" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xc70030f6, "drm_gem_shmem_dumb_create" },
	{ 0xccaae608, "drm_gem_prime_mmap" },
	{ 0x5b1a4f0, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xc17e4c4d, "drm_gem_prime_fd_to_handle" },
	{ 0x31b10d72, "drm_gem_prime_handle_to_fd" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xfffa4690, "drm_firmware_drivers_only" },
	{ 0x4ffd0e7e, "drm_atomic_helper_damage_merged" },
	{ 0x67e66457, "drm_fb_xrgb8888_to_rgb565_toio" },
	{ 0x20dabd66, "drm_fb_memcpy_toio" },
	{ 0x5928be66, "drm_fb_xrgb8888_to_rgb888_toio" },
	{ 0xf30db916, "drm_fb_clip_offset" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xb19b445, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x36fba308, "drm_dev_enter" },
	{ 0xa24bd280, "drm_fbdev_generic_setup" },
	{ 0xdca846a3, "drm_dev_register" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0x1ea83d81, "drm_simple_display_pipe_init" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xe4f6bac8, "drm_aperture_remove_conflicting_pci_framebuffers" },
	{ 0xd6a66f9f, "drm_set_preferred_mode" },
	{ 0x9fad6477, "drm_add_modes_noedid" },
	{ 0xedf8fe35, "drm_gem_fb_create_with_dirty" },
	{ 0x9395b9cd, "drm_atomic_helper_shutdown" },
	{ 0x14f92f5e, "drm_dev_unplug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,drm_shmem_helper");

MODULE_ALIAS("pci:v00001013d000000B8sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000B8sv00005853sd00000001bc*sc*i*");

MODULE_INFO(srcversion, "66B6098142B93B072FFC1DE");
