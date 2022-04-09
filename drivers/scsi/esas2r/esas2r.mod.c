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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0xd1cb3211, "pci_release_region" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xd349d253, "seq_printf" },
	{ 0x21456117, "pcie_capability_read_dword" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaec7ed46, "dma_get_required_mask" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x86632d5a, "default_llseek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x354d23d1, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x148653, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x5a8a2dc9, "param_ops_long" },
	{ 0xedc03953, "iounmap" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0xcf2a6966, "up" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x4cebcbb0, "scsi_report_bus_reset" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x36a8a87e, "proc_create" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xeea2364e, "pci_request_region" },
	{ 0x54101891, "pcie_capability_write_word" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbe277c8f, "scsi_dma_map" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd00000049bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Abc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Bbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Cbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Dbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Ebc*sc*i*");

MODULE_INFO(srcversion, "B62EECFF70748E6064B557F");
