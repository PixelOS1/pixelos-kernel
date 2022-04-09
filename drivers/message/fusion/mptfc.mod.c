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
	{ 0x4cd22de1, "fc_eh_timed_out" },
	{ 0x6b7cbe72, "mptscsih_show_info" },
	{ 0x2fbefe27, "mptscsih_bios_param" },
	{ 0x13180202, "mptscsih_change_queue_depth" },
	{ 0x31d95760, "mptscsih_slave_destroy" },
	{ 0xde4337ba, "mptscsih_slave_configure" },
	{ 0x4d8ffb9b, "mptscsih_host_reset" },
	{ 0x39c57df6, "mptscsih_info" },
	{ 0x5608a7eb, "mptscsih_shutdown" },
	{ 0x1bcdc517, "mptscsih_resume" },
	{ 0xf1e0dd85, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x192d24e6, "fc_release_transport" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x40cdc00f, "mpt_reset_register" },
	{ 0x72b80cb0, "mpt_event_register" },
	{ 0xa66aa2b5, "mptscsih_scandv_complete" },
	{ 0x10f4f199, "mptscsih_taskmgmt_complete" },
	{ 0x7398cade, "mpt_register" },
	{ 0xbfc61f32, "mptscsih_io_done" },
	{ 0xc465ba94, "fc_attach_transport" },
	{ 0xcb204403, "mptscsih_qcmd" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xb7c0f443, "sort" },
	{ 0xff380184, "fc_remote_port_rolechg" },
	{ 0xf11ae373, "fc_remote_port_add" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfd7a8629, "mptscsih_abort" },
	{ 0xa95fb4f4, "mptscsih_dev_reset" },
	{ 0x3572a571, "mptscsih_bus_reset" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7c3c0d1e, "fc_remove_host" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x69d72c9f, "mptscsih_remove" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x721ec6a9, "mpt_attach" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca2ddb35, "mptscsih_ioc_reset" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x4842fe32, "mpt_config" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4bd70086, "mptscsih_event_process" },
	{ 0x37a0cba, "kfree" },
	{ 0x695f0fa7, "scsi_is_fc_rport" },
	{ 0x92997ed8, "_printk" },
	{ 0xd289272f, "fc_remote_port_delete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,scsi_transport_fc,mptbase");

MODULE_ALIAS("pci:v00001000d00000621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000624sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000628sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000626sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000646sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "86AFE21AEC30F1DCD65988A");
