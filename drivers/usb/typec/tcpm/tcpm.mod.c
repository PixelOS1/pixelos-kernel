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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xe4345174, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x6e936613, "usb_debug_root" },
	{ 0x5f870461, "typec_match_altmode" },
	{ 0xe4dc4fd9, "sched_set_fifo" },
	{ 0x7392f5dc, "typec_set_pwr_role" },
	{ 0x9b02585d, "single_release" },
	{ 0x3e366c72, "typec_altmode_notify" },
	{ 0x8f0d3b05, "fw_devlink_purge_absent_suppliers" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x1a0023ec, "typec_partner_set_identity" },
	{ 0x392df7bf, "typec_get_drvdata" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x30a1c03e, "typec_unregister_altmode" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3546ab7b, "kthread_destroy_worker" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5963d5f4, "fwnode_property_read_string" },
	{ 0x94216657, "seq_read" },
	{ 0xb55007bf, "typec_partner_set_svdm_version" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4d3468c, "power_supply_changed" },
	{ 0x9085f0fd, "typec_register_port" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x2d1e301d, "typec_find_power_role" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x55561d69, "typec_unregister_port" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x729eff62, "typec_altmode_vdm" },
	{ 0x9049491e, "typec_find_port_data_role" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0xb7377b25, "typec_get_negotiated_svdm_version" },
	{ 0x81dab70c, "typec_set_data_role" },
	{ 0x91c7b523, "typec_altmode_attention" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x152ebda, "typec_set_vconn_role" },
	{ 0x4b990044, "typec_altmode_update_active" },
	{ 0x3f7198aa, "typec_set_orientation" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0xf80ead67, "typec_set_pwr_opmode" },
	{ 0x43c83ba7, "typec_unregister_partner" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x84069b6b, "kthread_queue_work" },
	{ 0x5ff642e6, "typec_partner_register_altmode" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf1234a8b, "typec_find_pwr_opmode" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x148653, "vsnprintf" },
	{ 0xfc47f2a2, "typec_set_mode" },
	{ 0x29a373c2, "devm_power_supply_register" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x96848186, "scnprintf" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xeafc1eb8, "typec_find_port_power_role" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x17f5fa2, "typec_port_register_altmodes" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x307de643, "usb_role_switch_get" },
	{ 0xce810484, "typec_register_partner" },
	{ 0xe2d2e418, "kthread_create_worker" },
	{ 0xceb66bec, "sched_clock_cpu" },
};

MODULE_INFO(depends, "typec,roles");


MODULE_INFO(srcversion, "75A54B6F818B1D27603BCA0");
