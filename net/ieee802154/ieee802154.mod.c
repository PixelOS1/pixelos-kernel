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
	{ 0x6eb91138, "class_find_device" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7c8caed0, "get_net_ns_by_fd" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xf58848b8, "__dev_change_net_namespace" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x754d539c, "strlen" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xd69e4840, "dev_get_by_name" },
	{ 0xb735a641, "device_match_name" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1937dfc0, "get_net_ns_by_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x928aab17, "__put_net" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb57a1a46, "dev_set_mac_address" },
	{ 0x339c0a66, "device_del" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x52d91e96, "class_unregister" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x7d11271e, "nla_put" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x722e0dfd, "dev_get_by_index" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0xf5c5e04e, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x97ac8144, "__class_register" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x59ee3e96, "class_for_each_device" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x6e33c5e0, "netlink_broadcast" },
	{ 0x761527a1, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x2deac9cd, "device_rename" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x73012fe3, "trace_output_call" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C97F2867043A67D3F3E2091");
