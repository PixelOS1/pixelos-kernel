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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5cab9945, "unregister_xenbus_watch" },
	{ 0x7169fbb9, "xenbus_map_ring_valloc" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x754d539c, "strlen" },
	{ 0x21752e, "device_release_driver" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x870e16b7, "xen_test_irq_shared" },
	{ 0xa9dc8828, "xenbus_dev_is_online" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x9c6a8dec, "pci_load_and_free_saved_state" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x386e6b0e, "xenbus_unmap_ring_vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xa672738b, "xenbus_watch_path" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3dd5becf, "pci_store_saved_state" },
	{ 0x2b86594e, "__xenbus_register_backend" },
	{ 0xa5cf337b, "bind_interdomain_evtchn_to_irqhandler_lateeoi" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x22486473, "xenbus_unregister_driver" },
	{ 0xea5cbce, "xen_irq_lateeoi" },
	{ 0xa349115, "xen_register_device_domain_owner" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x41ed4055, "xen_find_device_domain_owner" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x12f6d12, "pci_load_saved_state" },
	{ 0xce807a25, "up_write" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf599a228, "__pci_reset_function_locked" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0xa452f2a4, "xen_pirq_from_irq" },
	{ 0xef731740, "pci_find_capability" },
	{ 0xec4ab464, "pci_set_mwi" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x1511e6f3, "bus_register_notifier" },
	{ 0x91028578, "xen_unregister_device_domain_owner" },
	{ 0x40cdf542, "driver_create_file" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc4fd1679, "pci_intx" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb30797d, "xenbus_switch_state" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x68d03a6, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x9ed698da, "xenbus_dev_fatal" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xd4e8d3e0, "driver_remove_file" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xaaea90fd, "bus_unregister_notifier" },
	{ 0x1cb9a1c8, "xenbus_gather" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x7712771a, "unbind_from_irqhandler" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F8ECC75B891E6035443C4B2");
