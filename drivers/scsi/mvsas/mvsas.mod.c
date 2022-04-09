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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4823649, "sas_change_queue_depth" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf62b85dc, "sas_release_transport" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x1f3ffd7c, "sas_drain_work" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x10397f1b, "sas_ssp_task_response" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf63e386f, "sas_notify_phy_event" },
	{ 0xa9411f09, "sas_phy_reset" },
	{ 0x59ea6f17, "sas_eh_target_reset_handler" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x44eea669, "sas_get_local_phy" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x9bb4e317, "ioread32be" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x30add154, "sas_target_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0x2d608400, "sas_notify_port_event" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x58e1528a, "sas_ioctl" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4048c5fb, "sas_unregister_ha" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x1de045d1, "sas_register_ha" },
	{ 0xba1ad1c2, "sas_alloc_slow_task" },
	{ 0x761527a1, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf27b1139, "sas_target_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0xd87caf06, "sas_eh_device_reset_handler" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbb6ed580, "sas_queuecommand" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe9b9b881, "sas_remove_host" },
	{ 0x92ab9144, "sas_bios_param" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xedc03953, "iounmap" },
	{ 0x19ce093a, "sas_free_task" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc381061b, "sas_slave_alloc" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcf2a4796, "sas_slave_configure" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x6348cb95, "sas_domain_attach_transport" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v000011ABd00006320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006440sv*sd00006480bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006485sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00009480sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00009180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000450sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002721sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002744sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002760sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009480sv*sd00009480bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009445sv*sd00009480bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009485sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001084sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B5920A5D64EBD63D3B7154B");
