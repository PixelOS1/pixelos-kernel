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
	{ 0x212acbc4, "__SCK__tp_func_ata_tf_load" },
	{ 0x3293ce40, "__SCK__tp_func_ata_exec_command" },
	{ 0x3edc7b7, "__SCK__tp_func_ata_bmdma_status" },
	{ 0xb1ec659f, "ata_pci_device_suspend" },
	{ 0x9cfab145, "ata_pci_remove_one" },
	{ 0x72033af8, "ata_common_sdev_groups" },
	{ 0xbd1e404d, "ata_ncq_sdev_groups" },
	{ 0x439f72cb, "ata_scsi_unlock_native_capacity" },
	{ 0xa03b8784, "ata_std_bios_param" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0xa0cac12d, "ata_scsi_slave_destroy" },
	{ 0x35dff3b, "ata_scsi_ioctl" },
	{ 0xf7d8e7b, "ata_scsi_queuecmd" },
	{ 0x9f5261c4, "ata_bmdma_port_ops" },
	{ 0xc3d7094a, "ata_std_qc_defer" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc3e1021c, "__SCT__tp_func_ata_bmdma_status" },
	{ 0x16151b2a, "sata_scr_write" },
	{ 0x7ed8e169, "sata_scr_read" },
	{ 0xc7885b0b, "__tracepoint_ata_bmdma_status" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xd658d0, "ata_bmdma_qc_issue" },
	{ 0x46047827, "__SCT__tp_func_ata_exec_command" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xcf2b93c8, "__SCT__tp_func_ata_tf_load" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf6f652fc, "__tracepoint_ata_exec_command" },
	{ 0xd8cf7fb8, "__tracepoint_ata_tf_load" },
	{ 0xc719ad21, "ata_bmdma_qc_prep" },
	{ 0x87b8798d, "sg_next" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xf784ea02, "ata_print_version" },
	{ 0x6bfab733, "ata_pci_sff_activate_host" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xca68d1b6, "ata_pci_bmdma_prepare_host" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x7f267c20, "ata_bmdma_port_start" },
	{ 0x93dc7b4e, "sata_link_resume" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0x5fd9e584, "sata_link_hardreset" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc91ce0a6, "ata_bmdma_post_internal_cmd" },
	{ 0xe7b19fb1, "ata_sff_tf_read" },
	{ 0x95ebdff0, "ata_bmdma_irq_clear" },
	{ 0x87ca1dfa, "ata_port_abort" },
	{ 0x55160d97, "ata_ehi_push_desc" },
	{ 0x7d782233, "__ata_ehi_push_desc" },
	{ 0xad9b3442, "ata_ehi_clear_desc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x897fa23c, "ata_qc_complete_multiple" },
	{ 0x315633a6, "ata_qc_get_active" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf3e5664f, "blk_queue_max_segments" },
	{ 0xbee75f33, "blk_queue_segment_boundary" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x89bff380, "ata_bmdma_error_handler" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5ea58f95, "ata_port_freeze" },
	{ 0x26ee511d, "ata_bmdma_port_intr" },
	{ 0x350c9d1, "ata_sff_check_status" },
	{ 0xb19b445, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4bb64400, "ata_bmdma_stop" },
	{ 0x92997ed8, "_printk" },
	{ 0x6275def4, "ata_scsi_change_queue_depth" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x6ada6cfa, "ata_scsi_slave_config" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xc22a678d, "ata_host_resume" },
	{ 0x4eefd737, "ata_pci_device_do_resume" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DEd0000008Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000266sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000267sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8907FA75179D0CBFF03895A");
