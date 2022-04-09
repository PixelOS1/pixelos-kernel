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
	{ 0xee111615, "param_ops_int" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x22486473, "xenbus_unregister_driver" },
	{ 0xf955e86a, "__xenbus_register_frontend" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x37914025, "xenbus_write" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xced43c2a, "xenbus_free_evtchn" },
	{ 0x9ed698da, "xenbus_dev_fatal" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x34eab46d, "bind_evtchn_to_irqhandler" },
	{ 0x68244312, "xenbus_alloc_evtchn" },
	{ 0x57719632, "gnttab_grant_foreign_access" },
	{ 0x4b931968, "xen_features" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb30797d, "xenbus_switch_state" },
	{ 0x4ddfa440, "xenbus_frontend_closed" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x92997ed8, "_printk" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0x331337dc, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "39800EF83D386B48835B5D5");
