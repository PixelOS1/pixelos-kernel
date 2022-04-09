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
	{ 0x72033af8, "ata_common_sdev_groups" },
	{ 0x439f72cb, "ata_scsi_unlock_native_capacity" },
	{ 0xa03b8784, "ata_std_bios_param" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0xa0cac12d, "ata_scsi_slave_destroy" },
	{ 0x6ada6cfa, "ata_scsi_slave_config" },
	{ 0x35dff3b, "ata_scsi_ioctl" },
	{ 0xf7d8e7b, "ata_scsi_queuecmd" },
	{ 0xb4d4c468, "ata_sff_port_ops" },
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0x4317b31c, "ata_host_activate" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4d441889, "ata_port_pbar_desc" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x1e200e78, "ata_host_alloc_pinfo" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x87b8798d, "sg_next" },
	{ 0x267cc89d, "ata_sff_qc_issue" },
	{ 0x321c0c26, "ata_sff_prereset" },
	{ 0xdd453bb7, "ata_sff_error_handler" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x87ca1dfa, "ata_port_abort" },
	{ 0x5ea58f95, "ata_port_freeze" },
	{ 0x55160d97, "ata_ehi_push_desc" },
	{ 0xad9b3442, "ata_ehi_clear_desc" },
	{ 0x4239a5e4, "ata_qc_complete" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6353c833, "ata_sff_port_intr" },
	{ 0x350c9d1, "ata_sff_check_status" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015E9d00002068sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3B95E94429175D3ACAE16AD");
