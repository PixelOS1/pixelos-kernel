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
	{ 0xe0b7b8ff, "ib_set_device_ops" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x9852f12f, "pci_get_slot" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x2b283c36, "ib_dealloc_device" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4925daa7, "ib_query_port" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4845be4e, "ib_umem_get" },
	{ 0x71a330d6, "ib_device_set_netdev" },
	{ 0x6626afca, "down" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xf0506269, "ib_dispatch_event" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d6e31a2, "ib_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xb6d49b28, "ib_unregister_device" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x86f86292, "_ib_alloc_device" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e7528da, "__rdma_block_iter_next" },
	{ 0x965bfe42, "ib_sg_to_pages" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x73baf9a2, "ib_modify_qp_is_ok" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1b037462, "__rdma_block_iter_start" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xaab4ecdb, "ib_umem_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs");

MODULE_ALIAS("pci:v000015ADd00000820sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "35199CB30AB3E03C0AAEAC3");
