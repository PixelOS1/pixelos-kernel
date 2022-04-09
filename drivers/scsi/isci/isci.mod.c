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
	{ 0xf4823649, "sas_change_queue_depth" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xf62b85dc, "sas_release_transport" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x1f3ffd7c, "sas_drain_work" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x10397f1b, "sas_ssp_task_response" },
	{ 0x2e484945, "sas_suspend_ha" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xb959bf68, "sas_task_abort" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf63e386f, "sas_notify_phy_event" },
	{ 0x1f0ad404, "pci_biosrom_size" },
	{ 0xa9411f09, "sas_phy_reset" },
	{ 0x59ea6f17, "sas_eh_target_reset_handler" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x44eea669, "sas_get_local_phy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4a8e3d34, "try_test_sas_gpio_gp_bit" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x30add154, "sas_target_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2d608400, "sas_notify_port_event" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x58e1528a, "sas_ioctl" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb2fabf63, "efi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4048c5fb, "sas_unregister_ha" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0x1de045d1, "sas_register_ha" },
	{ 0x2151de37, "pci_map_biosrom" },
	{ 0x904ccd9e, "sas_eh_abort_handler" },
	{ 0x5e59f03d, "sas_resume_ha" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf27b1139, "sas_target_destroy" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xd87caf06, "sas_eh_device_reset_handler" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbb6ed580, "sas_queuecommand" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeed94372, "sas_ata_schedule_reset" },
	{ 0xe9b9b881, "sas_remove_host" },
	{ 0xb34fdfcf, "param_ops_byte" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92ab9144, "sas_bios_param" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x646faede, "sas_prep_resume_ha" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc381061b, "sas_slave_alloc" },
	{ 0x1564421, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x326425ca, "pci_unmap_biosrom" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcf2a4796, "sas_slave_configure" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6348cb95, "sas_domain_attach_transport" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v00008086d00001D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "899A9F71CACFD43EA07FC3C");
