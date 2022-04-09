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
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x4b931968, "xen_features" },
	{ 0x31dca4d8, "gnttab_claim_grant_reference" },
	{ 0xf27d0a7b, "gnttab_grant_foreign_access_ref" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd27f215d, "gnttab_alloc_grant_references" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x9ed698da, "xenbus_dev_fatal" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x16f15139, "bind_evtchn_to_irq" },
	{ 0x68244312, "xenbus_alloc_evtchn" },
	{ 0xb67c2756, "xenbus_grant_ring" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x49e5156, "gnttab_try_end_foreign_access" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4ddfa440, "xenbus_frontend_closed" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb30797d, "xenbus_switch_state" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbf022713, "scsi_add_device" },
	{ 0x9a96adff, "scsi_device_put" },
	{ 0x66e829a5, "scsi_remove_device" },
	{ 0x44a86bca, "scsi_device_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xce0a4020, "xenbus_directory" },
	{ 0xf3968ad0, "xenbus_dev_error" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0xc23477d, "current_task" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DF19758952BEED02F623F68");
