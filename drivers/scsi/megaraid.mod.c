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
	{ 0x73fec674, "param_ops_uint" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x3c08c820, "proc_mkdir" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x350e1083, "proc_create_single_data" },
	{ 0xe8c9d6dc, "proc_mkdir_data" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xde80cd09, "ioremap" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xa271ea4a, "remove_proc_subtree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9a482f9, "msleep" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0x12efca58, "seq_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x7567602b, "pci_alloc_dev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6f26a144, "_dev_crit" },
	{ 0xaeafaa63, "scsi_build_sense" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa6257a2f, "complete" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xd349d253, "seq_printf" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x898cf188, "scsi_partsize" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5012a70, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000101Ed00009010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00009060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001960sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "07C2E4ABE81001D5DA95A9E");
