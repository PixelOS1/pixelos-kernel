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
	{ 0x2ec97348, "kobject_put" },
	{ 0xa59b80fa, "vnic_dev_unregister" },
	{ 0xe0b7b8ff, "ib_set_device_ops" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4df9f4a8, "kobject_get" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb1736aa, "iommu_attach_device" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x68523297, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x744cc79f, "ib_device_put" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0xaffb0b75, "ib_get_eth_speed" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xbfbe536c, "iommu_map" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xfa690589, "netdev_cmd_to_name" },
	{ 0x84d47ae9, "__mmap_lock_do_trace_released" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbb0e6fc, "__tracepoint_mmap_lock_start_locking" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe091c977, "list_sort" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3136913f, "__mmap_lock_do_trace_start_locking" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x6230172c, "__mmdrop" },
	{ 0x668b19a1, "down_read" },
	{ 0xa2c56cf2, "kobject_create_and_add" },
	{ 0x2b283c36, "ib_dealloc_device" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0xc23477d, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa980d013, "kobject_init_and_add" },
	{ 0x5b1bd1eb, "vnic_dev_get_res" },
	{ 0x42ee3cd3, "iommu_set_fault_handler" },
	{ 0x42bbed14, "vnic_dev_register" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x5a921311, "strncmp" },
	{ 0x4925daa7, "ib_query_port" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x71a330d6, "ib_device_set_netdev" },
	{ 0x998da181, "iommu_unmap" },
	{ 0xdcd451a3, "iommu_domain_alloc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xcb99ae78, "vnic_dev_get_pdev" },
	{ 0x22749e72, "simple_open" },
	{ 0x26930ee4, "iommu_domain_free" },
	{ 0xf0785fc6, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x92a01fa4, "iommu_capable" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0xb45ab763, "iommu_detach_device" },
	{ 0xf0506269, "ib_dispatch_event" },
	{ 0x41ce123c, "ib_device_get_by_netdev" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3c16c99a, "iommu_present" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d6e31a2, "ib_register_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb6d49b28, "ib_unregister_device" },
	{ 0xc89a344a, "pin_user_pages" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3e7f32c3, "__tracepoint_mmap_lock_released" },
	{ 0x86f86292, "_ib_alloc_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x79cc1590, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xd9284a96, "vnic_dev_get_res_count" },
	{ 0x37a0cba, "kfree" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xe4d7f2a7, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x96848186, "scnprintf" },
	{ 0xca9360b5, "rb_next" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xd174fd2a, "unpin_user_pages_dirty_lock" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x145733bc, "enic_api_devcmd_proxy_by_index" },
};

MODULE_INFO(depends, "enic,ib_core");

MODULE_ALIAS("pci:v00001137d000000CFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "52D8F40BB4CA3AEEE465946");
