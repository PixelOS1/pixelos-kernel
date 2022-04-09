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
	{ 0x4286cf9a, "mptscsih_host_attr_groups" },
	{ 0x6b7cbe72, "mptscsih_show_info" },
	{ 0x2fbefe27, "mptscsih_bios_param" },
	{ 0x13180202, "mptscsih_change_queue_depth" },
	{ 0x31d95760, "mptscsih_slave_destroy" },
	{ 0x4d8ffb9b, "mptscsih_host_reset" },
	{ 0xa95fb4f4, "mptscsih_dev_reset" },
	{ 0xfd7a8629, "mptscsih_abort" },
	{ 0x39c57df6, "mptscsih_info" },
	{ 0x1bcdc517, "mptscsih_resume" },
	{ 0xf1e0dd85, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf62b85dc, "sas_release_transport" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x40cdc00f, "mpt_reset_register" },
	{ 0x72b80cb0, "mpt_event_register" },
	{ 0xa66aa2b5, "mptscsih_scandv_complete" },
	{ 0x10f4f199, "mptscsih_taskmgmt_complete" },
	{ 0x7398cade, "mpt_register" },
	{ 0xbfc61f32, "mptscsih_io_done" },
	{ 0x83e780d8, "sas_attach_transport" },
	{ 0x60e23b90, "mpt_GetIocState" },
	{ 0xa4eb5793, "sbitmap_weight" },
	{ 0xc4882dce, "scsi_track_queue_full" },
	{ 0x8c291102, "mptscsih_get_scsi_lookup" },
	{ 0x42157b80, "mpt_raid_phys_disk_pg1" },
	{ 0xb47a712, "mpt_raid_phys_disk_get_num_paths" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0x2ab0476b, "mpt_findImVolumes" },
	{ 0xa2321332, "starget_for_each_device" },
	{ 0x237f6b15, "mptbase_sas_persist_operation" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xabbe715f, "mptscsih_flush_running_cmds" },
	{ 0x721ec6a9, "mpt_attach" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0x9166fada, "strncpy" },
	{ 0x6515ced3, "scsi_is_sas_rphy" },
	{ 0xc6d61c63, "sas_expander_alloc" },
	{ 0x6705c65a, "sas_phy_free" },
	{ 0x1b4f8c5c, "sas_port_add" },
	{ 0x56a7a602, "sas_port_alloc_num" },
	{ 0xa0715105, "sas_phy_alloc" },
	{ 0x8f410af0, "sas_phy_add" },
	{ 0xee35c1cf, "sas_port_mark_backlink" },
	{ 0xc594d618, "sas_port_add_phy" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0xde4337ba, "mptscsih_slave_configure" },
	{ 0xee3c884e, "sas_read_port_mode_page" },
	{ 0xca2ddb35, "mptscsih_ioc_reset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x939be8ee, "mpt_raid_phys_disk_pg0" },
	{ 0x6c7c4c31, "mpt_detach" },
	{ 0x69d72c9f, "mptscsih_remove" },
	{ 0xe9b9b881, "sas_remove_host" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1a632a59, "__scsi_iterate_devices" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf19ba98a, "mptscsih_taskmgmt_response_code" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x48b36153, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8133e006, "sas_rphy_free" },
	{ 0x8549e1f6, "sas_rphy_add" },
	{ 0x7c229eed, "sas_end_device_alloc" },
	{ 0xf9034196, "sas_port_delete" },
	{ 0xc2ef9e6a, "sas_port_delete_phy" },
	{ 0x3d089d26, "mptscsih_raid_id_to_num" },
	{ 0x3e6aaa6f, "mptscsih_is_phys_disk" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xaf85c712, "scsi_print_command" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xcb204403, "mptscsih_qcmd" },
	{ 0xa2817a80, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0x80d77140, "mpt_put_msg_frame_hi_pri" },
	{ 0x234e0ea9, "mpt_Soft_Hard_ResetHandler" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2b9752ed, "mpt_free_msg_frame" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xac59b783, "mpt_put_msg_frame" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x6408bb3e, "mpt_get_msg_frame" },
	{ 0x96e91be1, "bsg_job_done" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x354d23d1, "scsi_device_set_state" },
	{ 0xd2493fc1, "device_reprobe" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa6257a2f, "complete" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4842fe32, "mpt_config" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,mptbase,scsi_transport_sas");

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "63680A6C5DAA869E34B227E");
