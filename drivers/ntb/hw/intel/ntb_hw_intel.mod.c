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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xee111615, "param_ops_int" },
	{ 0x5e96e08c, "ntb_unregister_device" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xd39f2e8, "ntb_register_device" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xfe052363, "ioread64_lo_hi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x22749e72, "simple_open" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc4fd1679, "pci_intx" },
	{ 0x848d372e, "iowrite8" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xd21c5139, "iowrite64_lo_hi" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x88ebef3a, "ntb_db_event" },
	{ 0x332dc333, "ntb_link_event" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbe4ed559, "param_ops_ullong" },
};

MODULE_INFO(depends, "ntb");

MODULE_ALIAS("pci:v00008086d00003725sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003726sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000201Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000347Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DA0559B01D62B71DDFF375F");
