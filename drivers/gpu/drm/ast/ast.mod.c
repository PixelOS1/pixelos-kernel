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
	{ 0xabdb3a26, "drm_release" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdca846a3, "drm_dev_register" },
	{ 0xcd72d04c, "drm_compat_ioctl" },
	{ 0x5bcb8eca, "drm_get_edid" },
	{ 0xd050d01e, "drm_atomic_helper_update_plane" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0xc16cc669, "drm_mode_config_helper_resume" },
	{ 0x2b7a7d3f, "drm_gem_vram_plane_helper_cleanup_fb" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0x4e5fd603, "drm_atomic_helper_connector_reset" },
	{ 0xd350b3df, "drm_gem_ttm_dumb_map_offset" },
	{ 0x1c21ecf9, "drm_atomic_helper_page_flip" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xb9d666a5, "pcim_iomap" },
	{ 0x1593e34f, "drm_gem_vram_put" },
	{ 0xd4b60c90, "drm_gem_reset_shadow_plane" },
	{ 0x95c4b2bc, "drm_gem_vram_vunmap" },
	{ 0x79b037b, "__drm_atomic_helper_crtc_reset" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf412077, "drm_simple_encoder_init" },
	{ 0x7205ce73, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x8460140b, "drm_gem_destroy_shadow_plane_state" },
	{ 0x6d3587b7, "drm_universal_plane_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0x6f720dbc, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x94a7add8, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0xcfcbf52b, "drmm_vram_helper_init" },
	{ 0xcdb1fec, "devm_arch_phys_wc_add" },
	{ 0xa24bd280, "drm_fbdev_generic_setup" },
	{ 0x4226beb7, "drm_atomic_helper_set_config" },
	{ 0xb2df2249, "drm_gem_vram_create" },
	{ 0xb0845b8b, "drm_connector_update_edid_property" },
	{ 0x6ade72c0, "drmm_kmalloc" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0xb19b445, "ioread8" },
	{ 0xc7db63f2, "drm_atomic_helper_commit_tail_rpm" },
	{ 0x64dbad54, "drm_dev_unregister" },
	{ 0x45f0e206, "drm_gem_prepare_shadow_fb" },
	{ 0xcf2a2c18, "drm_gem_vram_pin" },
	{ 0x7d8c3a0c, "drm_atomic_helper_disable_planes_on_crtc" },
	{ 0x6e6d333, "drm_crtc_init_with_planes" },
	{ 0xb4f83b67, "drm_atomic_helper_plane_reset" },
	{ 0xc6c981d, "drm_atomic_helper_check_plane_state" },
	{ 0xb2ff318a, "drm_gem_fb_create" },
	{ 0x2a4a9dc9, "drm_vram_mm_debugfs_init" },
	{ 0xd8b59288, "drm_vram_helper_mode_valid" },
	{ 0xd5fff2c, "drm_read" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x6a919975, "drm_gem_vram_vmap" },
	{ 0x5a8857da, "drm_add_edid_modes" },
	{ 0x17384c16, "drm_connector_init_with_ddc" },
	{ 0xdafa7f52, "drm_mode_config_helper_suspend" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4213e52a, "pci_iomap_range" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0xf1d3bab5, "drm_gem_cleanup_shadow_fb" },
	{ 0x3378cb69, "drm_gem_vram_plane_helper_prepare_fb" },
	{ 0x325557fe, "drm_gem_vram_unpin" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x397399da, "drm_plane_cleanup" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0x8da694ef, "drm_gem_duplicate_shadow_plane_state" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x9a06b54c, "drm_gem_mmap" },
	{ 0xdf1dc7de, "drm_atomic_helper_plane_duplicate_state" },
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0xb61328de, "drm_atomic_helper_check" },
	{ 0x9a0696a6, "drm_atomic_helper_commit" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdf8e188a, "__drmm_add_action_or_reset" },
	{ 0x848d372e, "iowrite8" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x8546d496, "drm_connector_attach_encoder" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfffa4690, "drm_firmware_drivers_only" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0x9cc8d23c, "devm_arch_io_reserve_memtype_wc" },
	{ 0x55aae8c7, "drm_gem_vram_offset" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x317eb31e, "drm_aperture_remove_conflicting_framebuffers" },
	{ 0x622fb4dd, "drm_crtc_cleanup" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c36bd9, "drmm_kfree" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0x9395b9cd, "drm_atomic_helper_shutdown" },
	{ 0xccaae608, "drm_gem_prime_mmap" },
	{ 0x50aa3fb, "drm_atomic_helper_disable_plane" },
	{ 0x61a67417, "i2c_bit_add_bus" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x100ad7e5, "drm_gem_vram_driver_dumb_create" },
	{ 0xbe94e383, "drm_mode_crtc_set_gamma_size" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x213cd84c, "drm_poll" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xebcd316c, "drm_open" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x7c51be4a, "drm_atomic_helper_plane_destroy_state" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_vram_helper,drm_ttm_helper,i2c-core,i2c-algo-bit");

MODULE_ALIAS("pci:v00001A03d00002000sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00001A03d00002010sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "A61066C09E8721345CA1874");
