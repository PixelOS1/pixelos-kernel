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
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xba6c657e, "scsi_remove_target" },
	{ 0xec743ea0, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xc4a4d168, "scsi_flush_work" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xee111615, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x353e65c2, "scsi_scan_target" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaf85c712, "scsi_print_command" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xb19b445, "ioread8" },
	{ 0x339c0a66, "device_del" },
	{ 0x11c2bbba, "scsi_queue_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xf5c5e04e, "device_add" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x338bb812, "scsi_target_unblock" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1953c958, "mempool_create" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0xedc03953, "iounmap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9f7f8a8a, "scsi_target_block" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbe277c8f, "scsi_dma_map" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001137d00000046sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A02A50626ACD322A1756745");
