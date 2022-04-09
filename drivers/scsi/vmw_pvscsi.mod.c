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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0xa6257a2f, "complete" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0x5b9adb5a, "scsi_host_get" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015ADd000007C0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A548BC985CF73E07928AADB");
