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
	{ 0x22486473, "xenbus_unregister_driver" },
	{ 0xf955e86a, "__xenbus_register_frontend" },
	{ 0x1990451e, "xen_pci_frontend" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x539f157b, "pci_xen_swiotlb_init_late" },
	{ 0xd272c899, "is_swiotlb_active" },
	{ 0xf3968ad0, "xenbus_dev_error" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0x497378b8, "pci_find_bus" },
	{ 0xfe576e48, "pci_bus_add_devices" },
	{ 0x35d784f7, "pci_walk_bus" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0x90745a7c, "pci_scan_root_bus" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x9493fc86, "node_states" },
	{ 0x77358855, "iomem_resource" },
	{ 0x27cdca93, "pci_add_resource" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb30797d, "xenbus_switch_state" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0xced43c2a, "xenbus_free_evtchn" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9ed698da, "xenbus_dev_fatal" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x34eab46d, "bind_evtchn_to_irqhandler" },
	{ 0x68244312, "xenbus_alloc_evtchn" },
	{ 0xb67c2756, "xenbus_grant_ring" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x92997ed8, "_printk" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x29d8c955, "msi_next_desc" },
	{ 0x806897, "msi_first_desc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x642eb5c6, "xen_poll_irq_timeout" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8cda8029, "xen_clear_irq_pending" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x96f400c0, "pci_scan_single_device" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x9852f12f, "pci_get_slot" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb2c26aca, "pci_claim_resource" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xef7d8a08, "pci_remove_bus" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f27916d, "pci_stop_and_remove_bus_device" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "98E4D3201B8ADA2467BDDDE");
