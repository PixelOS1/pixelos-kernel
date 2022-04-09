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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x5a7eac4b, "raid_class_release" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x8bf0861d, "raid_class_attach" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xde80cd09, "ioremap" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5a921311, "strncmp" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0x1a632a59, "__scsi_iterate_devices" },
	{ 0x87b8798d, "sg_next" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0x42160443, "attribute_container_find_class_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x85bd1608, "__request_region" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa6257a2f, "complete" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0xaeafaa63, "scsi_build_sense" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "raid_class");

MODULE_ALIAS("pci:v00001011d00001065sv00001069sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9438F0F16D217D30F2B9DD9");
