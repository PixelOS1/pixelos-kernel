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
	{ 0xddb716f6, "ata_bmdma32_port_ops" },
	{ 0x82558ca1, "ata_cable_40wire" },
	{ 0xb1ec659f, "ata_pci_device_suspend" },
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0x74de94f7, "ata_timing_compute" },
	{ 0xb2202d19, "ata_dev_pair" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x9e9e1503, "ata_sff_postreset" },
	{ 0x8462cb62, "atapi_cmd_type" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x92997ed8, "_printk" },
	{ 0xa3b2165a, "ata_pci_sff_init_one" },
	{ 0x98bfbc14, "ata_pci_bmdma_init_one" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x4eefd737, "ata_pci_device_do_resume" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xac3eba1d, "ata_pci_bmdma_clear_simplex" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B9d00005228sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005229sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2CF4AD28C336E4730B93594");
