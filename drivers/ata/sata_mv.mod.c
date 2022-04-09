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
	{ 0xbd1e404d, "ata_ncq_sdev_groups" },
	{ 0x439f72cb, "ata_scsi_unlock_native_capacity" },
	{ 0xa03b8784, "ata_std_bios_param" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0x6275def4, "ata_scsi_change_queue_depth" },
	{ 0xa0cac12d, "ata_scsi_slave_destroy" },
	{ 0x6ada6cfa, "ata_scsi_slave_config" },
	{ 0x35dff3b, "ata_scsi_ioctl" },
	{ 0xf7d8e7b, "ata_scsi_queuecmd" },
	{ 0xb4d4c468, "ata_sff_port_ops" },
	{ 0x9f5261c4, "ata_bmdma_port_ops" },
	{ 0xb1ec659f, "ata_pci_device_suspend" },
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x87ca1dfa, "ata_port_abort" },
	{ 0x20c504ae, "ata_link_offline" },
	{ 0x26ee511d, "ata_bmdma_port_intr" },
	{ 0x4318731f, "sata_async_notification" },
	{ 0x3e103085, "sata_scr_write_flush" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x69bb525b, "pci_try_set_mwi" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xb782a633, "pcim_pin_device" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x4d441889, "ata_port_pbar_desc" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xfd4e81bc, "ata_sff_queue_pio_task" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0xd658d0, "ata_bmdma_qc_issue" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x61f4ce7b, "ata_link_abort" },
	{ 0x55160d97, "ata_ehi_push_desc" },
	{ 0xad9b3442, "ata_ehi_clear_desc" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7ed8e169, "sata_scr_read" },
	{ 0x5fd9e584, "sata_link_hardreset" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x62ee4d10, "sata_std_hardreset" },
	{ 0x20efd3b2, "ata_sff_softreset" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x4317b31c, "ata_host_activate" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8fc9c2fe, "dmam_pool_create" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdf956e9c, "phy_power_on" },
	{ 0xd30d23b, "devm_phy_optional_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf906590d, "clk_get" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x1e200e78, "ata_host_alloc_pinfo" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x4eefd737, "ata_pci_device_do_resume" },
	{ 0x3fc79c4c, "sata_pmp_error_handler" },
	{ 0x5ea58f95, "ata_port_freeze" },
	{ 0xf9974ada, "ata_eh_analyze_ncq_error" },
	{ 0xd19980, "ata_sff_dma_pause" },
	{ 0xb19b445, "ioread8" },
	{ 0x87b8798d, "sg_next" },
	{ 0x92997ed8, "_printk" },
	{ 0x897fa23c, "ata_qc_complete_multiple" },
	{ 0x315633a6, "ata_qc_get_active" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf7c71ce9, "phy_power_off" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe9bcc73c, "ata_host_detach" },
	{ 0xa8417a24, "ata_host_suspend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x77a86b77, "_dev_alert" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00007042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD373D8E260732313F7FB4E");
