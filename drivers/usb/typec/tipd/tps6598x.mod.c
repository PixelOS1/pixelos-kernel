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
	{ 0x7381287f, "trace_handle_return" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xd4f58ba1, "regmap_raw_write" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x81188c30, "match_string" },
	{ 0x7392f5dc, "typec_set_pwr_role" },
	{ 0x8f0d3b05, "fw_devlink_purge_absent_suppliers" },
	{ 0x1a0023ec, "typec_partner_set_identity" },
	{ 0x392df7bf, "typec_get_drvdata" },
	{ 0x1598fb9d, "device_get_named_child_node" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4d3468c, "power_supply_changed" },
	{ 0x9085f0fd, "typec_register_port" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x55561d69, "typec_unregister_port" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x81dab70c, "typec_set_data_role" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x152ebda, "typec_set_vconn_role" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xf80ead67, "typec_set_pwr_opmode" },
	{ 0x43c83ba7, "typec_unregister_partner" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0x29a373c2, "devm_power_supply_register" },
	{ 0x74d4da8c, "fwnode_usb_role_switch_get" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xd63347d5, "regmap_raw_read" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xce810484, "typec_register_partner" },
};

MODULE_INFO(depends, "i2c-core,typec,roles,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,tps6598x");
MODULE_ALIAS("of:N*T*Cti,tps6598xC*");
MODULE_ALIAS("of:N*T*Capple,cd321x");
MODULE_ALIAS("of:N*T*Capple,cd321xC*");
MODULE_ALIAS("i2c:tps6598x");

MODULE_INFO(srcversion, "3C630D3FF6FF6377F83FB62");
