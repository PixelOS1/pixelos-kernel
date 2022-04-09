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
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x3cb83d5b, "eeprom_93cx6_multireadb" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x1564421, "request_firmware" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x848d372e, "iowrite8" },
	{ 0xb19b445, "ioread8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "eeprom_93cx6");

MODULE_ALIAS("pci:v0000101Cd00003296sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A465C60D64C7AA65BDBEEA9");
