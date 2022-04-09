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
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3857f05e, "fw_core_handle_bus_reset" },
	{ 0xd1cb3211, "pci_release_region" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xee111615, "param_ops_int" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfbda728d, "fw_card_initialize" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x19a8efcb, "fw_schedule_bus_reset" },
	{ 0xe3feba56, "tasklet_unlock_spin_wait" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x596513c1, "fw_fill_response" },
	{ 0x7e3a9667, "fw_core_handle_response" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbc9f459f, "vmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x930350ba, "fw_core_remove_card" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc84c0fbe, "dma_alloc_pages" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x8db4fde, "fw_core_handle_request" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x629704ee, "fw_card_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x8c4c5fbe, "dma_free_pages" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd46727d8, "pci_choose_state" },
	{ 0xb0e602eb, "memmove" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xeea2364e, "pci_request_region" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc00i10*");

MODULE_INFO(srcversion, "E7A9075D5DE58FF3D1F1086");
