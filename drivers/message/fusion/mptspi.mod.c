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
	{ 0x4d8ffb9b, "mptscsih_host_reset" },
	{ 0x3572a571, "mptscsih_bus_reset" },
	{ 0xa95fb4f4, "mptscsih_dev_reset" },
	{ 0xfd7a8629, "mptscsih_abort" },
	{ 0x39c57df6, "mptscsih_info" },
	{ 0x5608a7eb, "mptscsih_shutdown" },
	{ 0xf1e0dd85, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf0140a9f, "spi_release_transport" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x40cdc00f, "mpt_reset_register" },
	{ 0x72b80cb0, "mpt_event_register" },
	{ 0xa66aa2b5, "mptscsih_scandv_complete" },
	{ 0x10f4f199, "mptscsih_taskmgmt_complete" },
	{ 0x7398cade, "mpt_register" },
	{ 0xbfc61f32, "mptscsih_io_done" },
	{ 0xf1e5fd32, "spi_attach_transport" },
	{ 0x3d089d26, "mptscsih_raid_id_to_num" },
	{ 0x1bcdc517, "mptscsih_resume" },
	{ 0xde4337ba, "mptscsih_slave_configure" },
	{ 0x31d95760, "mptscsih_slave_destroy" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0xd394517d, "scsi_device_lookup_by_target" },
	{ 0x353e65c2, "scsi_scan_target" },
	{ 0x1a632a59, "__scsi_iterate_devices" },
	{ 0x2ab0476b, "mpt_findImVolumes" },
	{ 0x8ea5a77e, "spi_display_xfer_agreement" },
	{ 0xb2e3bafd, "spi_dv_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x4842fe32, "mpt_config" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xca2ddb35, "mptscsih_ioc_reset" },
	{ 0x288d7936, "mptscsih_IssueTaskMgmt" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x721ec6a9, "mpt_attach" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4bd70086, "mptscsih_event_process" },
	{ 0x3e6aaa6f, "mptscsih_is_phys_disk" },
	{ 0xaf85c712, "scsi_print_command" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xcb204403, "mptscsih_qcmd" },
	{ 0x69d72c9f, "mptscsih_remove" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x2b9752ed, "mpt_free_msg_frame" },
	{ 0x4796b7b2, "mpt_HardResetHandler" },
	{ 0x92997ed8, "_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xac59b783, "mpt_put_msg_frame" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6408bb3e, "mpt_get_msg_frame" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,mptbase,scsi_transport_spi");

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B42CCC0E8DFFBE46F209AD2");
