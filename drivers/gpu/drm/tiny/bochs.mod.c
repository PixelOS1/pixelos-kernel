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
	{ 0xee111615, "param_ops_int" },
	{ 0xe103605d, "drm_gem_vram_simple_display_pipe_cleanup_fb" },
	{ 0xdc577a9d, "drm_gem_vram_simple_display_pipe_prepare_fb" },
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0x6f720dbc, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0x4e5fd603, "drm_atomic_helper_connector_reset" },
	{ 0x9a0696a6, "drm_atomic_helper_commit" },
	{ 0xb61328de, "drm_atomic_helper_check" },
	{ 0xd8b59288, "drm_vram_helper_mode_valid" },
	{ 0xabdb3a26, "drm_release" },
	{ 0xebcd316c, "drm_open" },
	{ 0x9a06b54c, "drm_gem_mmap" },
	{ 0xcd72d04c, "drm_compat_ioctl" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0x213cd84c, "drm_poll" },
	{ 0xd5fff2c, "drm_read" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xd350b3df, "drm_gem_ttm_dumb_map_offset" },
	{ 0x100ad7e5, "drm_gem_vram_driver_dumb_create" },
	{ 0xccaae608, "drm_gem_prime_mmap" },
	{ 0x2a4a9dc9, "drm_vram_mm_debugfs_init" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xfffa4690, "drm_firmware_drivers_only" },
	{ 0xa24bd280, "drm_fbdev_generic_setup" },
	{ 0xdca846a3, "drm_dev_register" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0x1ea83d81, "drm_simple_display_pipe_init" },
	{ 0xb0845b8b, "drm_connector_update_edid_property" },
	{ 0x84d74e73, "drm_connector_attach_edid_property" },
	{ 0x75b2f230, "drm_do_get_edid" },
	{ 0x81992424, "drm_edid_header_is_valid" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0xcfcbf52b, "drmm_vram_helper_init" },
	{ 0x92997ed8, "_printk" },
	{ 0xde80cd09, "ioremap" },
	{ 0xeea2364e, "pci_request_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0x6ade72c0, "drmm_kmalloc" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x623891cc, "drm_dev_alloc" },
	{ 0xe4f6bac8, "drm_aperture_remove_conflicting_pci_framebuffers" },
	{ 0xd6a66f9f, "drm_set_preferred_mode" },
	{ 0x9fad6477, "drm_add_modes_noedid" },
	{ 0x5a8857da, "drm_add_edid_modes" },
	{ 0xb2ff318a, "drm_gem_fb_create" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x55aae8c7, "drm_gem_vram_offset" },
	{ 0x36fba308, "drm_dev_enter" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xfe94e207, "drm_dev_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x9395b9cd, "drm_atomic_helper_shutdown" },
	{ 0x14f92f5e, "drm_dev_unplug" },
	{ 0xdafa7f52, "drm_mode_config_helper_suspend" },
	{ 0xc16cc669, "drm_mode_config_helper_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_vram_helper,drm_kms_helper,drm,drm_ttm_helper");

MODULE_ALIAS("pci:v00001234d00001111sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001234d00001111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004321d00001111sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7D953F7A5253C5F771E126F");
