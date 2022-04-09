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
	{ 0xe48d80e3, "sata_port_ops" },
	{ 0xb1ec659f, "ata_pci_device_suspend" },
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc2f158d8, "ata_std_error_handler" },
	{ 0x4317b31c, "ata_host_activate" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x4d441889, "ata_port_pbar_desc" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x1e200e78, "ata_host_alloc_pinfo" },
	{ 0x77a86b77, "_dev_alert" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x4eefd737, "ata_pci_device_do_resume" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdfb7bf50, "ata_port_classify" },
	{ 0xfd55c691, "ata_wait_after_reset" },
	{ 0x73ac1a5f, "ata_link_online" },
	{ 0x93dc7b4e, "sata_link_resume" },
	{ 0xb206a086, "ata_msleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8462cb62, "atapi_cmd_type" },
	{ 0x87b8798d, "sg_next" },
	{ 0x92997ed8, "_printk" },
	{ 0x7d782233, "__ata_ehi_push_desc" },
	{ 0x5ea58f95, "ata_port_freeze" },
	{ 0x87ca1dfa, "ata_port_abort" },
	{ 0x55160d97, "ata_ehi_push_desc" },
	{ 0xad9b3442, "ata_ehi_clear_desc" },
	{ 0x4239a5e4, "ata_qc_complete" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001101d00001622sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "691F9DB63F2A4A9F3D1BF8E");
