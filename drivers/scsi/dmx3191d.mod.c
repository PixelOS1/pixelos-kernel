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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xe6ff1125, "scsi_eh_prep_cmnd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xeecb1d5, "scsi_eh_restore_cmnd" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x92997ed8, "_printk" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5012a70, "pv_ops" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("pci:v0000134Ad00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F9E65BB9FD81C180A712C0F");
