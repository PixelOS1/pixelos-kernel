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
	{ 0x3edc7b7, "__SCK__tp_func_ata_bmdma_status" },
	{ 0xddb716f6, "ata_bmdma32_port_ops" },
	{ 0x82558ca1, "ata_cable_40wire" },
	{ 0xdc6ee065, "dev_attr_link_power_management_policy" },
	{ 0x72033af8, "ata_common_sdev_groups" },
	{ 0x439f72cb, "ata_scsi_unlock_native_capacity" },
	{ 0xa03b8784, "ata_std_bios_param" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0xa0cac12d, "ata_scsi_slave_destroy" },
	{ 0x6ada6cfa, "ata_scsi_slave_config" },
	{ 0x35dff3b, "ata_scsi_ioctl" },
	{ 0xf7d8e7b, "ata_scsi_queuecmd" },
	{ 0x62ee4d10, "sata_std_hardreset" },
	{ 0xee111615, "param_ops_int" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc4959774, "ata_slave_link_init" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xf9a482f9, "msleep" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xc4fd1679, "pci_intx" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x6bfab733, "ata_pci_sff_activate_host" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x96848186, "scnprintf" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0xca68d1b6, "ata_pci_bmdma_prepare_host" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x321c0c26, "ata_sff_prereset" },
	{ 0x81f24a73, "pci_test_config_bits" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xd0220543, "ata_pio_need_iordy" },
	{ 0xda4033a6, "ata_bmdma_status" },
	{ 0xa7778ae6, "sata_link_scr_lpm" },
	{ 0x7f267c20, "ata_bmdma_port_start" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xc3e1021c, "__SCT__tp_func_ata_bmdma_status" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc7885b0b, "__tracepoint_ata_bmdma_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x2dabb8dc, "ata_pci_device_do_suspend" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xa8417a24, "ata_host_suspend" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4eefd737, "ata_pci_device_do_resume" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x71807b5, "pci_reenable_device" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00007010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007111sv000015ADsd00001976bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007199sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000084CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000245Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002850sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002651sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002652sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002653sv*sd*bc01sc01i*");
MODULE_ALIAS("pci:v00008086d000027C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002825sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A0bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A1bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A3bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002921sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002926sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002928sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000292Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000292Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002326sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000023A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C88sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C89sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C81sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D401C8DE3601E88C8850881");
