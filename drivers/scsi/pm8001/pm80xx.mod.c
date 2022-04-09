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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xf62b85dc, "sas_release_transport" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x7d466a68, "scsi_block_requests" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x1f3ffd7c, "sas_drain_work" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x10397f1b, "sas_ssp_task_response" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x2e484945, "sas_suspend_ha" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
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
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x30add154, "sas_target_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0x2d608400, "sas_notify_port_event" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x58e1528a, "sas_ioctl" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4048c5fb, "sas_unregister_ha" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xef731740, "pci_find_capability" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0x107ab5e, "ata_scsi_dma_need_drain" },
	{ 0x1de045d1, "sas_register_ha" },
	{ 0xba1ad1c2, "sas_alloc_slow_task" },
	{ 0x5e59f03d, "sas_resume_ha" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf27b1139, "sas_target_destroy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xd87caf06, "sas_eh_device_reset_handler" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbb6ed580, "sas_queuecommand" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe9b9b881, "sas_remove_host" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x92ab9144, "sas_bios_param" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xedc03953, "iounmap" },
	{ 0x19ce093a, "sas_free_task" },
	{ 0x646faede, "sas_prep_resume_ha" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc381061b, "sas_slave_alloc" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x1564421, "request_firmware" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x51c60bea, "bpf_trace_run6" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcf2a4796, "sas_slave_configure" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6348cb95, "sas_domain_attach_transport" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v000011F8d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F8d00008077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008081sv00009005sd00000400bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008081sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008088sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008089sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00001600bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008076sv00009005sd00000808bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008077sv00009005sd00000808bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00008074sv00009005sd00000404bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000070bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000071bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000072bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000073bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008070sv0000117Csd00000080bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000081bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00008072sv0000117Csd00000082bc*sc*i*");

MODULE_INFO(srcversion, "8F7981F119E31E52B6DFE33");
