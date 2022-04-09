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
	{ 0x669f738a, "ata_sff_data_xfer32" },
	{ 0x82558ca1, "ata_cable_40wire" },
	{ 0x700e8b94, "ata_pci_device_resume" },
	{ 0xb1ec659f, "ata_pci_device_suspend" },
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x267cc89d, "ata_sff_qc_issue" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xd0220543, "ata_pio_need_iordy" },
	{ 0x321c0c26, "ata_sff_prereset" },
	{ 0x81f24a73, "pci_test_config_bits" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0x4317b31c, "ata_host_activate" },
	{ 0x3a4f6a32, "ata_sff_interrupt" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x1dd69ef9, "ata_port_desc" },
	{ 0x9f7149a2, "devm_ioport_map" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xce300549, "ata_host_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00001234sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "382EA91333CAB295077594C");
