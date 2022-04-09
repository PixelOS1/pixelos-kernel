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
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xfb578fc5, "memset" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x868acba5, "get_options" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5012a70, "pv_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x6032b013, "scsi_bios_ptable" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x92997ed8, "_printk" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd349d253, "seq_printf" },
	{ 0x12efca58, "seq_write" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000104Bd00001040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Bd00000140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Bd00008130sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8A59BC76D1B4384C3290163");
