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
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x37a0cba, "kfree" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x92997ed8, "_printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001101d00009500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001101d00009400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001101d00009401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001101d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000134Ad00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F430C252487018B12833E05");
