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
	{ 0x8af62e49, "_dev_err" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0x56470118, "__warn_printk" },
	{ 0x93a2f674, "irq_domain_update_bus_token" },
	{ 0xa3d5c7f3, "pci_msi_create_irq_domain" },
	{ 0x9a7e849b, "__irq_domain_alloc_fwnode" },
	{ 0xe167dc3d, "init_srcu_struct" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xd5e67c02, "pci_msix_vec_count" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0x7e7a47c9, "pci_acpi_clear_companion_lookup_hook" },
	{ 0xfe576e48, "pci_bus_add_devices" },
	{ 0xcd01cf09, "pcie_bus_configure_settings" },
	{ 0x5c4c570c, "pci_assign_unassigned_bus_resources" },
	{ 0xd079d4f2, "pci_reset_bus" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x601c416d, "pci_scan_child_bus" },
	{ 0x903c1917, "pci_acpi_set_companion_lookup_hook" },
	{ 0x8dcc7092, "pci_create_root_bus" },
	{ 0x218e600b, "pci_add_resource_offset" },
	{ 0x27cdca93, "pci_add_resource" },
	{ 0x92a01fa4, "iommu_capable" },
	{ 0x1905849, "pci_find_next_bus" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xb9d666a5, "pcim_iomap" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xffb7c514, "ida_free" },
	{ 0x6ab2a3d0, "irq_domain_free_fwnode" },
	{ 0xfbafd50b, "irq_domain_remove" },
	{ 0xe8aa5306, "cleanup_srcu_struct" },
	{ 0xce0c601c, "pci_remove_root_bus" },
	{ 0x4b64330f, "pci_stop_root_bus" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xef731740, "pci_find_capability" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x6b9fb22f, "irq_domain_set_info" },
	{ 0xb55154e2, "handle_untracked_irq" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x32a49d04, "msi_desc_to_pci_dev" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xfa174f0b, "acpi_find_child_device" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xfa8764b0, "pci_find_host_bridge" },
	{ 0x37a0cba, "kfree" },
	{ 0x14c8dfb3, "synchronize_srcu" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xcfb17d1b, "__srcu_read_unlock" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x28d87421, "__srcu_read_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000201Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000467Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004C3Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A77Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009A0Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "73C6566C2B70BA2BCBA683A");
