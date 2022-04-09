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
	{ 0x95829b2, "ahci_sdev_groups" },
	{ 0xfd9fffb6, "ahci_shost_groups" },
	{ 0x439f72cb, "ata_scsi_unlock_native_capacity" },
	{ 0xa03b8784, "ata_std_bios_param" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0x6275def4, "ata_scsi_change_queue_depth" },
	{ 0xa0cac12d, "ata_scsi_slave_destroy" },
	{ 0x6ada6cfa, "ata_scsi_slave_config" },
	{ 0x35dff3b, "ata_scsi_ioctl" },
	{ 0xf7d8e7b, "ata_scsi_queuecmd" },
	{ 0xf857123e, "ahci_ops" },
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf16631b5, "ahci_fill_cmd_slot" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x92997ed8, "_printk" },
	{ 0xb782a633, "pcim_pin_device" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0x270ccfc8, "ahci_host_activate" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xc0c29915, "ahci_print_info" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd53865e8, "ata_dummy_port_ops" },
	{ 0x4d441889, "ata_port_pbar_desc" },
	{ 0x1e200e78, "ata_host_alloc_pinfo" },
	{ 0x571936c5, "ahci_set_em_messages" },
	{ 0x5210970e, "ahci_save_initial_config" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x149e1aa6, "pcim_iomap_regions_request_all" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6a8a7de5, "ahci_port_resume" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1ec659f, "ata_pci_device_suspend" },
	{ 0xc2d0b59f, "ahci_init_controller" },
	{ 0x8881c41f, "ahci_reset_controller" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x4eefd737, "ata_pci_device_do_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libahci");

MODULE_ALIAS("pci:v00001191d0000000Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "51D6DA7B19F1DD56CEF8157");
