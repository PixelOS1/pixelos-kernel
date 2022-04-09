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
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd39f2e8, "ntb_register_device" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x149e1aa6, "pcim_iomap_regions_request_all" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x305e313d, "pci_aer_clear_nonfatal_status" },
	{ 0xa7299ff3, "pci_enable_pcie_error_reporting" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb3528229, "ntb_msg_event" },
	{ 0x88ebef3a, "ntb_db_event" },
	{ 0x332dc333, "ntb_link_event" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x3cf47bb0, "pci_disable_pcie_error_reporting" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0x5e96e08c, "ntb_unregister_device" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xdca50ab1, "pcibios_resource_to_bus" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");

MODULE_ALIAS("pci:v0000111Dd00008091sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Fsv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008088sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008092sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008090sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Esv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Csv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Asv*sd*bc06sc80i*");

MODULE_INFO(srcversion, "C9D77CBE467562A270892D3");
