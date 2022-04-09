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
	{ 0xbd1e404d, "ata_ncq_sdev_groups" },
	{ 0x439f72cb, "ata_scsi_unlock_native_capacity" },
	{ 0xa03b8784, "ata_std_bios_param" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0x6275def4, "ata_scsi_change_queue_depth" },
	{ 0xa0cac12d, "ata_scsi_slave_destroy" },
	{ 0x6ada6cfa, "ata_scsi_slave_config" },
	{ 0x35dff3b, "ata_scsi_ioctl" },
	{ 0xf7d8e7b, "ata_scsi_queuecmd" },
	{ 0xd149ce00, "sata_pmp_port_ops" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc4fd1679, "pci_intx" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0x4317b31c, "ata_host_activate" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x3e567c2c, "pcie_set_readrq" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x1e200e78, "ata_host_alloc_pinfo" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x4eefd737, "ata_pci_device_do_resume" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdfb7bf50, "ata_port_classify" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3d7094a, "ata_std_qc_defer" },
	{ 0x87b8798d, "sg_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0xb206a086, "ata_msleep" },
	{ 0x20c504ae, "ata_link_offline" },
	{ 0x32635555, "sata_link_debounce" },
	{ 0xc428068d, "sata_deb_timing_long" },
	{ 0x73ac1a5f, "ata_link_online" },
	{ 0xbd4d15ff, "sata_set_spd" },
	{ 0x62ee4d10, "sata_std_hardreset" },
	{ 0x3fc79c4c, "sata_pmp_error_handler" },
	{ 0x6be243dc, "ata_eh_freeze_port" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4d441889, "ata_port_pbar_desc" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0x87ca1dfa, "ata_port_abort" },
	{ 0x4318731f, "sata_async_notification" },
	{ 0x61f4ce7b, "ata_link_abort" },
	{ 0x55160d97, "ata_ehi_push_desc" },
	{ 0xad9b3442, "ata_ehi_clear_desc" },
	{ 0x5ea58f95, "ata_port_freeze" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x897fa23c, "ata_qc_complete_multiple" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb3387447, "ata_wait_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001095d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003132sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000244sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003531sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "302C4F957F353B6BC88DC51");
