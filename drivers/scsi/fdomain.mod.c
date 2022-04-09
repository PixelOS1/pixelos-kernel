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
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0xf992d1e8, "cc_platform_has" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x6032b013, "scsi_bios_ptable" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x6c5dae23, "scsi_kmap_atomic_sg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x56c8799d, "scsi_kunmap_atomic_sg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2DBA506BD3BB3D84B1B3027");
