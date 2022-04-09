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
	{ 0xc76f8048, "__sbitmap_queue_get" },
	{ 0xfa4667d1, "fc_seq_release" },
	{ 0xee111615, "param_ops_int" },
	{ 0x4dc1c329, "target_put_sess_cmd" },
	{ 0xea83187f, "core_tpg_register" },
	{ 0xf9e98f12, "fc_fc4_register_provider" },
	{ 0x486d1ced, "fc_lport_iterate" },
	{ 0x3d80fde7, "transport_generic_free_cmd" },
	{ 0xca7402b2, "target_register_template" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x6063c97e, "core_tpg_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x577d2b09, "target_stop_session" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x683a00d6, "target_init_cmd" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0de99d2, "fc_seq_assign" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x11089ac7, "_ctype" },
	{ 0xfdb017a5, "_fc_frame_alloc" },
	{ 0xc23477d, "current_task" },
	{ 0x1a52e53b, "fc_fill_reply_hdr" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x811811e0, "fc_exch_done" },
	{ 0xb466bdd1, "core_tpg_set_initiator_node_tag" },
	{ 0xef744bb5, "sbitmap_queue_clear" },
	{ 0x5a921311, "strncmp" },
	{ 0x943d49d1, "fc_fc4_deregister_provider" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xddb0d119, "target_remove_session" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf7f0f839, "fc_frame_alloc_fill" },
	{ 0x18d588ae, "fc_seq_set_resp" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3b6b5425, "target_setup_session" },
	{ 0xe4824534, "target_unregister_template" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x7f3407a7, "fc_seq_start_next" },
	{ 0xe5cf06b5, "fc_lport_notifier_head" },
	{ 0x7d91c001, "target_submit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x98a3ba1c, "target_submit_prep" },
	{ 0x7ea33954, "target_wait_for_sess_cmds" },
	{ 0x9aea1f81, "target_submit_tmr" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x140ed8e6, "fc_seq_send" },
	{ 0xb372cdf0, "target_execute_cmd" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49cd25ed, "alloc_workqueue" },
};

MODULE_INFO(depends, "libfc,target_core_mod");


MODULE_INFO(srcversion, "04146260199DFEF82B3BCAC");
