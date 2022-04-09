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
	{ 0xe4824534, "target_unregister_template" },
	{ 0xca7402b2, "target_register_template" },
	{ 0x3b6b5425, "target_setup_session" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2885fec5, "fw_get_request_speed" },
	{ 0x2311ba3f, "target_submit_cmd" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xb372cdf0, "target_execute_cmd" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc76f8048, "__sbitmap_queue_get" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x4dc1c329, "target_put_sess_cmd" },
	{ 0xa78c92d7, "sg_miter_stop" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x962c98ce, "fw_run_transaction" },
	{ 0xfd1d5018, "sg_miter_next" },
	{ 0x23906fc1, "sg_miter_start" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xef744bb5, "sbitmap_queue_clear" },
	{ 0x6063c97e, "core_tpg_deregister" },
	{ 0xea83187f, "core_tpg_register" },
	{ 0xd4f4bf56, "fw_core_add_address_handler" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xda6af6f7, "fw_core_remove_address_handler" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xddb0d119, "target_remove_session" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe86fb5c7, "fw_card_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x30412b2, "fw_send_response" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3d80fde7, "transport_generic_free_cmd" },
	{ 0x92997ed8, "_printk" },
	{ 0x5a921311, "strncmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod,firewire-core");


MODULE_INFO(srcversion, "699686DFC5B9B0B667EA5F3");
