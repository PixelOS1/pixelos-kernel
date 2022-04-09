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
	{ 0x22749e72, "simple_open" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x92997ed8, "_printk" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd39f2e8, "ntb_register_device" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x7fde4ef0, "kmem_cache_alloc_node_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x5e96e08c, "ntb_unregister_device" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x21456117, "pcie_capability_read_dword" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x88ebef3a, "ntb_db_event" },
	{ 0x332dc333, "ntb_link_event" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc4fd1679, "pci_intx" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x37a0cba, "kfree" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");

MODULE_ALIAS("pci:v00001022d0000145Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000148Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000014C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000014C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D94d0000145Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B4F8E0D3C5EE129F5602024");
