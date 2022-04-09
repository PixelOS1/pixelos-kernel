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
	{ 0x78c2054, "param_ops_bool" },
	{ 0xee111615, "param_ops_int" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x56c8799d, "scsi_kunmap_atomic_sg" },
	{ 0x6c5dae23, "scsi_kmap_atomic_sg" },
	{ 0x5012a70, "pv_ops" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92997ed8, "_printk" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xd349d253, "seq_printf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("pci:v00001DE1d00000391sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6D2B493DAF2884D40221CEE");
