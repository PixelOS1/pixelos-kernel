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
	{ 0xb1ec659f, "ata_pci_device_suspend" },
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x72033af8, "ata_common_sdev_groups" },
	{ 0x439f72cb, "ata_scsi_unlock_native_capacity" },
	{ 0xa03b8784, "ata_std_bios_param" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0xa0cac12d, "ata_scsi_slave_destroy" },
	{ 0x6ada6cfa, "ata_scsi_slave_config" },
	{ 0x35dff3b, "ata_scsi_ioctl" },
	{ 0xf7d8e7b, "ata_scsi_queuecmd" },
	{ 0x9f5261c4, "ata_bmdma_port_ops" },
	{ 0x62ee4d10, "sata_std_hardreset" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x4eefd737, "ata_pci_device_do_resume" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4317b31c, "ata_host_activate" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x4d441889, "ata_port_pbar_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x1e200e78, "ata_host_alloc_pinfo" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc4959774, "ata_slave_link_init" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xca68d1b6, "ata_pci_bmdma_prepare_host" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xdd453bb7, "ata_sff_error_handler" },
	{ 0x95ebdff0, "ata_bmdma_irq_clear" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x92997ed8, "_printk" },
	{ 0xb206a086, "ata_msleep" },
	{ 0x7e12fca7, "ata_sff_wait_ready" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x39ff90f, "ata_sff_pause" },
	{ 0x15be5c91, "ata_bmdma_start" },
	{ 0xe2b66ab3, "ata_sff_tf_load" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x5ea58f95, "ata_port_freeze" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001106d00005337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000591sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003149sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003249sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00007372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D02B8C752BDC9941B11FCCB");
