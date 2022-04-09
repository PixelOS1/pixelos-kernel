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
	{ 0xe4824534, "target_unregister_template" },
	{ 0x22486473, "xenbus_unregister_driver" },
	{ 0xca7402b2, "target_register_template" },
	{ 0x2b86594e, "__xenbus_register_backend" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9c95bebd, "bind_interdomain_evtchn_to_irq_lateeoi" },
	{ 0xa9dc8828, "xenbus_dev_is_online" },
	{ 0x776c87fd, "device_unregister" },
	{ 0xce0a4020, "xenbus_directory" },
	{ 0x7169fbb9, "xenbus_map_ring_valloc" },
	{ 0x1cb9a1c8, "xenbus_gather" },
	{ 0x9ed698da, "xenbus_dev_fatal" },
	{ 0xb30797d, "xenbus_switch_state" },
	{ 0x4833e6da, "gnttab_page_cache_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x386e6b0e, "xenbus_unmap_ring_vfree" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xea5cbce, "xen_irq_lateeoi" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7d91c001, "target_submit" },
	{ 0x98a3ba1c, "target_submit_prep" },
	{ 0x683a00d6, "target_init_cmd" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40cfa4dc, "gnttab_page_cache_shrink" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc76f8048, "__sbitmap_queue_get" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9aea1f81, "target_submit_tmr" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4dc1c329, "target_put_sess_cmd" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0xf3968ad0, "xenbus_dev_error" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9f984513, "strrchr" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa84ee3f4, "gnttab_map_refs" },
	{ 0xa240c09e, "gnttab_page_cache_get" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xea83187f, "core_tpg_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3b6b5425, "target_setup_session" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5a921311, "strncmp" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0xb241076e, "gnttab_page_cache_put" },
	{ 0x34603324, "gnttab_unmap_refs" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x4b931968, "xen_features" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3d80fde7, "transport_generic_free_cmd" },
	{ 0xef744bb5, "sbitmap_queue_clear" },
	{ 0xb372cdf0, "target_execute_cmd" },
	{ 0xa6257a2f, "complete" },
	{ 0x6063c97e, "core_tpg_deregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc23477d, "current_task" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xddb0d119, "target_remove_session" },
	{ 0x92997ed8, "_printk" },
	{ 0x754d539c, "strlen" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "164F816E8194BF881BA4590");
