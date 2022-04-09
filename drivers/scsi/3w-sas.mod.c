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
	{ 0x45a41106, "noop_llseek" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7d466a68, "scsi_block_requests" },
	{ 0xdd4b8dcd, "scsi_unblock_requests" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x69bb525b, "pci_try_set_mwi" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xec743ea0, "blk_queue_rq_timeout" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000013C1d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "44210981A864C1979640C9F");
