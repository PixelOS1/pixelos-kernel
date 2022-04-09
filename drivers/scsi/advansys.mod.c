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
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x40b38a0f, "scmd_printk" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xedc03953, "iounmap" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92997ed8, "_printk" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1564421, "request_firmware" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b432a03, "scsi_host_busy" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd349d253, "seq_printf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xa916b694, "strnlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010CDd00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002700sv*sd*bc*sc*i*");
MODULE_ALIAS("eisa:sABP7401*");
MODULE_ALIAS("eisa:sABP7501*");

MODULE_INFO(srcversion, "EA584C9FF2FBB95C5467CFC");
