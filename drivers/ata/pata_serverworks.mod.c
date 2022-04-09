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
	{ 0x7c161b6, "ata_cable_unknown" },
	{ 0x82558ca1, "ata_cable_40wire" },
	{ 0x72033af8, "ata_common_sdev_groups" },
	{ 0x439f72cb, "ata_scsi_unlock_native_capacity" },
	{ 0xa03b8784, "ata_std_bios_param" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0xa0cac12d, "ata_scsi_slave_destroy" },
	{ 0x6ada6cfa, "ata_scsi_slave_config" },
	{ 0x35dff3b, "ata_scsi_ioctl" },
	{ 0xf7d8e7b, "ata_scsi_queuecmd" },
	{ 0x9f5261c4, "ata_bmdma_port_ops" },
	{ 0xf8983c81, "ata_bmdma_dumb_qc_prep" },
	{ 0xc719ad21, "ata_bmdma_qc_prep" },
	{ 0xb1ec659f, "ata_pci_device_suspend" },
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xba4c4729, "ata_dummy_port_info" },
	{ 0x98bfbc14, "ata_pci_bmdma_init_one" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x4eefd737, "ata_pci_device_do_resume" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0xac3eba1d, "ata_pci_bmdma_clear_simplex" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001166d00000211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000213sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000217sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000214sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7DDDA926EF3C98B68160B03");
