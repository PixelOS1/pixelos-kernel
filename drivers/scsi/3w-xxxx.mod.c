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
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0x45a41106, "noop_llseek" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xaeafaa63, "scsi_build_sense" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x57a7c0c9, "sdev_prefix_printk" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x754d539c, "strlen" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xec743ea0, "blk_queue_rq_timeout" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000013C1d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C1d00001001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C4EE6BC54040F4682216CF7");
