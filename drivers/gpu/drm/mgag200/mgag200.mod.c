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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x622ae652, "pci_unmap_rom" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0x4e5fd603, "drm_atomic_helper_connector_reset" },
	{ 0xb9d666a5, "pcim_iomap" },
	{ 0x516c7a70, "drm_gem_simple_kms_reset_shadow_plane" },
	{ 0x79b037b, "__drm_atomic_helper_crtc_reset" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x999e8297, "vfree" },
	{ 0x1b02a41, "drm_gem_simple_kms_duplicate_shadow_plane_state" },
	{ 0x7205ce73, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0x1ea83d81, "drm_simple_display_pipe_init" },
	{ 0x6f720dbc, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x94a7add8, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0xcdb1fec, "devm_arch_phys_wc_add" },
	{ 0xa24bd280, "drm_fbdev_generic_setup" },
	{ 0xb0845b8b, "drm_connector_update_edid_property" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x5b1a4f0, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0xb19b445, "ioread8" },
	{ 0xf30db916, "drm_fb_clip_offset" },
	{ 0x64dbad54, "drm_dev_unregister" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xeabf254f, "pci_map_rom" },
	{ 0xedf8fe35, "drm_gem_fb_create_with_dirty" },
	{ 0xd5fff2c, "drm_read" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x1c93bb86, "drm_gem_simple_kms_prepare_shadow_fb" },
	{ 0x4ffd0e7e, "drm_atomic_helper_damage_merged" },
	{ 0x5a8857da, "drm_add_edid_modes" },
	{ 0x17384c16, "drm_connector_init_with_ddc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x5bb6fa6b, "drm_gem_simple_kms_destroy_shadow_plane_state" },
	{ 0xc17e4c4d, "drm_gem_prime_fd_to_handle" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0x9a06b54c, "drm_gem_mmap" },
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0xb61328de, "drm_atomic_helper_check" },
	{ 0x9a0696a6, "drm_atomic_helper_commit" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x92997ed8, "_printk" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfffa4690, "drm_firmware_drivers_only" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0x9cc8d23c, "devm_arch_io_reserve_memtype_wc" },
	{ 0x31b10d72, "drm_gem_prime_handle_to_fd" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xc78aa33a, "drm_gem_simple_kms_cleanup_shadow_fb" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xccaae608, "drm_gem_prime_mmap" },
	{ 0x61a67417, "i2c_bit_add_bus" },
	{ 0xc70030f6, "drm_gem_shmem_dumb_create" },
	{ 0x6677e9d6, "drm_dev_dbg" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbe94e383, "drm_mode_crtc_set_gamma_size" },
	{ 0x20dabd66, "drm_fb_memcpy_toio" },
	{ 0x213cd84c, "drm_poll" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xebcd316c, "drm_open" },
	{ 0xe4f6bac8, "drm_aperture_remove_conflicting_pci_framebuffers" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_shmem_helper,i2c-core,i2c-algo-bit");

MODULE_ALIAS("pci:v0000102Bd00000520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000530sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000532sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000534sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000102Bd00000538sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B7963D02C97B2BD3A92CAD3");
