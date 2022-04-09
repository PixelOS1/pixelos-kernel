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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb2e3bafd, "spi_dv_device" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x754d539c, "strlen" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x9852f12f, "pci_get_slot" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xd349d253, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf1e5fd32, "spi_attach_transport" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xb447a8e1, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xb19b445, "ioread8" },
	{ 0x11089ac7, "_ctype" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xec4ab464, "pci_set_mwi" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xf0140a9f, "spi_release_transport" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb34fdfcf, "param_ops_byte" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x8ea5a77e, "spi_display_xfer_agreement" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xdca50ab1, "pcibios_resource_to_bus" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xa6257a2f, "complete" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbe277c8f, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("pci:v00001000d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000008Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "636A307754472E6DE154554");
