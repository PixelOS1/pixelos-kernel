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
	{ 0xdca846a3, "drm_dev_register" },
	{ 0xcd72d04c, "drm_compat_ioctl" },
	{ 0xc16cc669, "drm_mode_config_helper_resume" },
	{ 0xa5ca9752, "drm_mode_config_reset" },
	{ 0x4e5fd603, "drm_atomic_helper_connector_reset" },
	{ 0x516c7a70, "drm_gem_simple_kms_reset_shadow_plane" },
	{ 0x85c2b51b, "drm_gem_prime_import_dev" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb3a4151c, "drm_helper_probe_single_connector_modes" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xecc4c778, "drm_gem_fb_begin_cpu_access" },
	{ 0x1b02a41, "drm_gem_simple_kms_duplicate_shadow_plane_state" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x2c2e7131, "drm_connector_cleanup" },
	{ 0x75b2f230, "drm_do_get_edid" },
	{ 0x1ea83d81, "drm_simple_display_pipe_init" },
	{ 0x6f720dbc, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xb045542d, "usb_get_descriptor" },
	{ 0xa24bd280, "drm_fbdev_generic_setup" },
	{ 0xb0845b8b, "drm_connector_update_edid_property" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x5b1a4f0, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xedf8fe35, "drm_gem_fb_create_with_dirty" },
	{ 0x6626afca, "down" },
	{ 0xd5fff2c, "drm_read" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x1c93bb86, "drm_gem_simple_kms_prepare_shadow_fb" },
	{ 0x4ffd0e7e, "drm_atomic_helper_damage_merged" },
	{ 0x5a8857da, "drm_add_edid_modes" },
	{ 0x7582eaf, "usb_intf_get_dma_device" },
	{ 0xdafa7f52, "drm_mode_config_helper_suspend" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x91aa47e8, "drm_connector_init" },
	{ 0x14f92f5e, "drm_dev_unplug" },
	{ 0x5bb6fa6b, "drm_gem_simple_kms_destroy_shadow_plane_state" },
	{ 0xc17e4c4d, "drm_gem_prime_fd_to_handle" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x9a06b54c, "drm_gem_mmap" },
	{ 0x633d3edf, "drm_atomic_helper_connector_destroy_state" },
	{ 0xb61328de, "drm_atomic_helper_check" },
	{ 0x761527a1, "put_device" },
	{ 0x9a0696a6, "drm_atomic_helper_commit" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9c560ef8, "drmm_mode_config_init" },
	{ 0x31b10d72, "drm_gem_prime_handle_to_fd" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc78aa33a, "drm_gem_simple_kms_cleanup_shadow_fb" },
	{ 0xcf2a6966, "up" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xccaae608, "drm_gem_prime_mmap" },
	{ 0xc70030f6, "drm_gem_shmem_dumb_create" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0x971773bb, "drm_kms_helper_poll_init" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x9666525d, "drm_gem_fb_end_cpu_access" },
	{ 0x213cd84c, "drm_poll" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xebcd316c, "drm_open" },
	{ 0xb759bd4f, "drm_kms_helper_poll_fini" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_shmem_helper");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "FB9A98C4B7F7EB533A6A7D0");
