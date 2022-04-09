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
	{ 0xddb716f6, "ata_bmdma32_port_ops" },
	{ 0x82558ca1, "ata_cable_40wire" },
	{ 0x7c161b6, "ata_cable_unknown" },
	{ 0x9f5261c4, "ata_bmdma_port_ops" },
	{ 0x27c6aa23, "ata_cable_ignore" },
	{ 0xb1ec659f, "ata_pci_device_suspend" },
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x4eefd737, "ata_pci_device_do_resume" },
	{ 0x3635a7a5, "ata_dev_next" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0x74de94f7, "ata_timing_compute" },
	{ 0xb2202d19, "ata_dev_pair" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x743a165e, "ata_pack_xfermask" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8608ac08, "ata_acpi_gtm_xfermask" },
	{ 0x321c0c26, "ata_sff_prereset" },
	{ 0x81f24a73, "pci_test_config_bits" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xac3eba1d, "ata_pci_bmdma_clear_simplex" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0x98bfbc14, "ata_pci_bmdma_init_one" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00007401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007409sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007441sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007469sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000265sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000036Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000448sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000056Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000759sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000209Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00002092sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CC22BC1156C6D112BC6BB55");
