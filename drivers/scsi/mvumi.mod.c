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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x1000e51, "schedule" },
	{ 0xf9a7ca3, "scsi_rescan_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc23477d, "current_task" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69acdf38, "memcpy" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xaeafaa63, "scsi_build_sense" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001B4Bd00009143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009580sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "734C3AA7DB9A0AB3CE2CE8D");
