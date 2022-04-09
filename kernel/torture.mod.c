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
	{ 0xee111615, "param_ops_int" },
	{ 0x6a460dc5, "schedule_hrtimeout" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xad4e6259, "remove_cpu" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x7944e0fc, "tracing_off" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc23477d, "current_task" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xaaa918c9, "ftrace_dump" },
	{ 0x4482eecf, "set_cpus_allowed_ptr" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x7eb808d0, "add_cpu" },
	{ 0x2ebe3135, "cpu_is_hotpluggable" },
	{ 0x24da0093, "rcu_inkernel_boot_has_ended" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0xf184d189, "kernel_power_off" },
	{ 0xb0747ed2, "rcu_cpu_stall_suppress" },
	{ 0xd8a43700, "sched_set_normal" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x211130c1, "alloc_cpumask_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F2DA7BBE714248043D6ABF0");
