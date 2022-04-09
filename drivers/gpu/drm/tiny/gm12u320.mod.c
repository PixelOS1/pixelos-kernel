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
	{ 0x78c2054, "param_ops_bool" },
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
	{ 0x9a0696a6, "drm_atomic_helper_commit" },
	{ 0xb61328de, "drm_atomic_helper_check" },
	{ 0xedf8fe35, "drm_gem_fb_create_with_dirty" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xc16cc669, "drm_mode_config_helper_resume" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xa24bd280, "drm_fbdev_generic_setup" },
	{ 0xdca846a3, "drm_dev_register" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0x1ea83d81, "drm_simple_display_pipe_init" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0x6ade72c0, "drmm_kmalloc" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7582eaf, "usb_intf_get_dma_device" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0x5a8857da, "drm_add_edid_modes" },
	{ 0xb0845b8b, "drm_connector_update_edid_property" },
	{ 0x85c2b51b, "drm_gem_prime_import_dev" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4ca80989, "drm_dev_printk" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x9666525d, "drm_gem_fb_end_cpu_access" },
	{ 0xecc4c778, "drm_gem_fb_begin_cpu_access" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x301872de, "drm_mode_object_put" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xac42e20, "drm_mode_object_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4ffd0e7e, "drm_atomic_helper_damage_merged" },
	{ 0x9395b9cd, "drm_atomic_helper_shutdown" },
	{ 0x14f92f5e, "drm_dev_unplug" },
	{ 0x761527a1, "put_device" },
	{ 0xdafa7f52, "drm_mode_config_helper_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,drm_shmem_helper");

MODULE_ALIAS("usb:v1DE1pC102d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "06050B47D7B8A1D081F24BE");
