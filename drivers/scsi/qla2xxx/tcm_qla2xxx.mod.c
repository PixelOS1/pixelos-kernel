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
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe4824534, "target_unregister_template" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xca7402b2, "target_register_template" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x754d539c, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0x123499fb, "qlt_rdy_to_xfer" },
	{ 0xb2a9f5dd, "qlt_lport_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa481287, "qlt_unreg_sess" },
	{ 0x36353f1c, "qlt_xmit_response" },
	{ 0xea83187f, "core_tpg_register" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x5a921311, "strncmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb372cdf0, "target_execute_cmd" },
	{ 0x6e0f4278, "transport_generic_request_failure" },
	{ 0xddb0d119, "target_remove_session" },
	{ 0x7ea33954, "target_wait_for_sess_cmds" },
	{ 0x3b6b5425, "target_setup_session" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x99069187, "qlt_abort_cmd" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf7afb369, "btree_init" },
	{ 0x7d91c001, "target_submit" },
	{ 0x98a3ba1c, "target_submit_prep" },
	{ 0x683a00d6, "target_init_cmd" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9aea1f81, "target_submit_tmr" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc76f8048, "__sbitmap_queue_get" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xef744bb5, "sbitmap_queue_clear" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3d80fde7, "transport_generic_free_cmd" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x50df94f5, "btree_insert" },
	{ 0x4f2593f0, "btree_update" },
	{ 0xede9a09a, "btree_lookup" },
	{ 0x759bfe36, "btree_destroy" },
	{ 0x890fa0fa, "btree_get_prev" },
	{ 0xf3b95d79, "btree_remove" },
	{ 0xef92ef33, "btree_last" },
	{ 0xf331236f, "btree_geo32" },
	{ 0x999e8297, "vfree" },
	{ 0x77224427, "qlt_lport_deregister" },
	{ 0xd37ceecd, "target_show_dynamic_sessions" },
	{ 0x4dc1c329, "target_put_sess_cmd" },
	{ 0xe1d5aa0a, "qlt_free_mcmd" },
	{ 0x50de473b, "qlt_free_cmd" },
	{ 0x577d2b09, "target_stop_session" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc20f0466, "qlt_xmit_tm_rsp" },
	{ 0x5b9adb5a, "scsi_host_get" },
	{ 0x20a1fd4, "fc_vport_create" },
	{ 0xcc0de743, "fc_vport_terminate" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x274275d1, "qlt_stop_phase2" },
	{ 0x373a23be, "qlt_enable_vha" },
	{ 0x21e94b05, "qlt_stop_phase1" },
	{ 0x37a0cba, "kfree" },
	{ 0x6063c97e, "core_tpg_deregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc23477d, "current_task" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod,qla2xxx,scsi_transport_fc");


MODULE_INFO(srcversion, "4220F35F5329543BB091891");
