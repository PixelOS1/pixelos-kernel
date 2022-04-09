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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0x4317b31c, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4d441889, "ata_port_pbar_desc" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x1e200e78, "ata_host_alloc_pinfo" },
	{ 0x321c0c26, "ata_sff_prereset" },
	{ 0xb19b445, "ioread8" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0xb2202d19, "ata_dev_pair" },
	{ 0x3635a7a5, "ata_dev_next" },
	{ 0x9f1ae95, "ata_do_set_mode" },
	{ 0x92997ed8, "_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x4eefd737, "ata_pci_device_do_resume" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00004D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006269sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00001275sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00005275sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00007275sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "935AE66C29E6A029B994EB6");
