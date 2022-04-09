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
	{ 0x5b7424d5, "bus_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xacb32f2d, "cdev_init" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xc17a25b7, "idxd_driver_unregister" },
	{ 0x7410aba2, "strreplace" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xc76f8048, "__sbitmap_queue_get" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x754d539c, "strlen" },
	{ 0x21752e, "device_release_driver" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x7b10176c, "dma_async_tx_descriptor_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x1bc15335, "dma_async_device_channel_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1e9872f6, "sbitmap_finish_wait" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1a572bf1, "dma_async_device_register" },
	{ 0x574e440e, "dmaengine_unmap_put" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x324b5f67, "iommu_sva_get_pasid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x339c0a66, "device_del" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xffb7c514, "ida_free" },
	{ 0xef744bb5, "sbitmap_queue_clear" },
	{ 0x36baec4f, "iommu_sva_unbind_device" },
	{ 0x9166fada, "strncpy" },
	{ 0x2d8a086d, "dma_async_device_channel_unregister" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfe052363, "ioread64_lo_hi" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37bf7be3, "percpu_ref_exit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x1b3307c2, "__idxd_driver_register" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xab0b1cc3, "iommu_dev_enable_feature" },
	{ 0xd7293ffc, "percpu_ref_reinit" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1fdba44b, "cdev_device_add" },
	{ 0xf4e35e28, "sbitmap_prepare_to_wait" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6f95bb84, "sbitmap_queue_init_node" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x1ed4d2eb, "percpu_ref_kill_and_confirm" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x16e6d67f, "get_device" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xdc5c79b7, "iommu_sva_bind_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4faa9e16, "remap_pfn_range" },
	{ 0x657888d1, "iommu_dev_disable_feature" },
	{ 0x617442c6, "dsa_bus_type" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x776c87fd, "device_unregister" },
	{ 0xd21c5139, "iowrite64_lo_hi" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x60805a2, "cdev_device_del" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x40fdc30, "devm_iounmap" },
	{ 0x81a7f541, "percpu_ref_init" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0xe07b4f38, "dma_async_device_unregister" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd5e67c02, "pci_msix_vec_count" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "idxd_bus");

MODULE_ALIAS("pci:v00008086d00000B25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000CFEsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F08EE1F3237626095E811AA");
