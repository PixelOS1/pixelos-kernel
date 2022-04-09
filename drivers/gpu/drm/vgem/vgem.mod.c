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
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xa18d511, "dma_resv_test_signaled" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5b1a4f0, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x2f41db7d, "__devm_drm_dev_alloc" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x64dbad54, "drm_dev_unregister" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3d11efe5, "dma_resv_add_shared_fence" },
	{ 0xf9aa1869, "devres_open_group" },
	{ 0x203aaa7d, "ww_mutex_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd8166a1, "dma_fence_free" },
	{ 0xd5fff2c, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xc17e4c4d, "drm_gem_prime_fd_to_handle" },
	{ 0x3f912125, "drm_ioctl" },
	{ 0x9a06b54c, "drm_gem_mmap" },
	{ 0xc9addcd2, "dma_resv_reserve_shared" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd6fdddea, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x31b10d72, "drm_gem_prime_handle_to_fd" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d1571d4, "ww_mutex_unlock" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xccaae608, "drm_gem_prime_mmap" },
	{ 0xc70030f6, "drm_gem_shmem_dumb_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x627ac832, "devres_release_group" },
	{ 0xbc1e4729, "dma_resv_add_excl_fence" },
	{ 0x213cd84c, "drm_poll" },
	{ 0xebcd316c, "drm_open" },
};

MODULE_INFO(depends, "drm,drm_shmem_helper");


MODULE_INFO(srcversion, "4F14B46B5AECF578D53D997");
