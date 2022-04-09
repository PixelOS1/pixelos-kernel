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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x3024ba4b, "device_get_next_child_node" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x7392f5dc, "typec_set_pwr_role" },
	{ 0xc7e9ea04, "power_supply_unregister" },
	{ 0x392df7bf, "typec_get_drvdata" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x30a1c03e, "typec_unregister_altmode" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb55007bf, "typec_partner_set_svdm_version" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x4d3468c, "power_supply_changed" },
	{ 0x9085f0fd, "typec_register_port" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x55561d69, "typec_unregister_port" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x729eff62, "typec_altmode_vdm" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb7377b25, "typec_get_negotiated_svdm_version" },
	{ 0x81dab70c, "typec_set_data_role" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x4b990044, "typec_altmode_update_active" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xf80ead67, "typec_set_pwr_opmode" },
	{ 0x43c83ba7, "typec_unregister_partner" },
	{ 0x78cc9881, "typec_partner_set_num_altmodes" },
	{ 0x5ff642e6, "typec_partner_register_altmode" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8ac49bc5, "typec_altmode2port" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x74d4da8c, "fwnode_usb_role_switch_get" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb708b8b8, "typec_altmode_get_partner" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x18bc4049, "power_supply_register" },
	{ 0x9a51688e, "typec_port_register_altmode" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xce810484, "typec_register_partner" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xddf6ad7a, "completion_done" },
};

MODULE_INFO(depends, "typec,roles");


MODULE_INFO(srcversion, "26B3B9229E543F965CEAF0F");
