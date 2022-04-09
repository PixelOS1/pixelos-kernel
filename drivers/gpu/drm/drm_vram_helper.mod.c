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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x1de5879d, "drm_gem_ttm_print_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8342b575, "ttm_bo_eviction_valuable" },
	{ 0x72c9c9ef, "drm_gem_plane_helper_prepare_fb" },
	{ 0xa6bb50d7, "ttm_device_fini" },
	{ 0x3b509e53, "ttm_tt_fini" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4823704e, "ttm_bo_move_memcpy" },
	{ 0x6473876f, "ttm_bo_vmap" },
	{ 0xbd5f04b4, "ttm_bo_put" },
	{ 0x1e0ce865, "ttm_bo_move_to_lru_tail" },
	{ 0xa2aae103, "ttm_bo_validate" },
	{ 0x70db760b, "ttm_bo_init" },
	{ 0x1210e335, "ttm_device_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0xc4f8bafa, "drm_gem_handle_create" },
	{ 0xcbf620d5, "ttm_tt_init" },
	{ 0x203aaa7d, "ww_mutex_lock" },
	{ 0xb881338a, "drm_gem_object_release" },
	{ 0x71f2a00e, "drm_debugfs_create_files" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xe7f8fc9, "ttm_bo_vunmap" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdf8e188a, "__drmm_add_action_or_reset" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xaeb69fbf, "drm_gem_ttm_mmap" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0xbe297836, "drm_gem_object_init" },
	{ 0x92569bce, "ttm_range_man_fini_nocheck" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d1571d4, "ww_mutex_unlock" },
	{ 0x85ce1577, "ttm_resource_manager_debug" },
	{ 0xd1b2a9b8, "ww_mutex_lock_interruptible" },
	{ 0x2db492ac, "ttm_range_man_init_nocheck" },
};

MODULE_INFO(depends, "drm_ttm_helper,ttm,drm_kms_helper,drm");


MODULE_INFO(srcversion, "47DE0AE410CF8421D12D18F");
