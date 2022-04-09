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
	{ 0x6fbc5503, "intel_gvt_unregister_hypervisor" },
	{ 0xc9a3d061, "intel_gvt_register_hypervisor" },
	{ 0x999e8297, "vfree" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xece784c2, "rb_first" },
	{ 0xa16fd8f0, "kvm_put_kvm" },
	{ 0x710946eb, "kvm_page_track_unregister_notifier" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xdec4b7b5, "debugfs_lookup" },
	{ 0xdfbcf889, "module_put" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x489d11f, "mdev_unregister_device" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x19567d06, "vfio_info_cap_shift" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6c28be5a, "vfio_info_add_capability" },
	{ 0xadc044b7, "vfio_set_irqs_validate_and_prepare" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x794215ed, "kvm_slot_page_track_add_page" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa94a09bb, "mem_section" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x48a81d7e, "vfio_group_pin_pages" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x7834defd, "vfio_group_unpin_pages" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe18d1486, "debugfs_create_ulong" },
	{ 0xd750ddf9, "kvm_page_track_register_notifier" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x66d51240, "kvm_get_kvm" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc23477d, "current_task" },
	{ 0x6b0754a9, "vfio_unregister_notifier" },
	{ 0xc4913442, "vfio_group_put_external_user" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xe7ef62bb, "vfio_group_get_external_user_from_dev" },
	{ 0xc080bc3a, "vfio_register_notifier" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0xad95bcb1, "mdev_register_device" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x5cdd2887, "mdev_bus_type" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x570c148, "kvm_slot_page_track_remove_page" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xbac1953c, "gfn_to_memslot" },
	{ 0x4ecd0967, "gfn_to_pfn" },
	{ 0x474dbe2b, "vfio_device_get_from_dev" },
	{ 0xcfb17d1b, "__srcu_read_unlock" },
	{ 0x8ef1aff1, "kvm_is_visible_gfn" },
	{ 0x28d87421, "__srcu_read_lock" },
	{ 0xfecaeed3, "mtype_get_type_group_id" },
	{ 0x9e95b165, "mtype_get_parent_dev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x218c1df4, "mdev_get_type_group_id" },
	{ 0x7f083016, "mdev_parent_dev" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x1aa9fba0, "vfio_dma_rw" },
	{ 0x92997ed8, "_printk" },
	{ 0xd13f9985, "drm_edid_block_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9fdc4847, "vfio_device_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i915,kvm,mdev,vfio,drm");


MODULE_INFO(srcversion, "BD16E0E54EBF56E83E9CD14");
