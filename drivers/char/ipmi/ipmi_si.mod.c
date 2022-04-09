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
	{ 0xa24f23d8, "__request_module" },
	{ 0x85bd1608, "__request_region" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x81188c30, "match_string" },
	{ 0x31d1e5a1, "device_add_groups" },
	{ 0x96a6e5e8, "ipmi_smi_msg_received" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0x230094ac, "ipmi_smi_watchdog_pretimeout" },
	{ 0xb82f5e92, "platform_get_irq_optional" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc7f6572a, "platform_bus_type" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x9d099a39, "acpi_remove_gpe_handler" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1f65170f, "ipmi_alloc_smi_msg" },
	{ 0x67369b42, "ipmi_addr_src_to_str" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc8a016aa, "param_ops_string" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe4330a39, "ipmi_unregister_smi" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xdbc46ebb, "platform_get_mem_or_io" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9866dd4e, "device_property_read_u8_array" },
	{ 0xab1a08a3, "bus_find_device" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf6db8ce9, "ipmi_platform_add" },
	{ 0xa89a1cf1, "ipmi_dmi_get_slave_addr" },
	{ 0x9df2d08a, "ipmi_add_smi" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x761527a1, "put_device" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf727f0b0, "device_remove_groups" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x8fc84473, "set_user_nice" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xb97f7045, "acpi_install_gpe_handler" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x77bc13a0, "strim" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x60a293d7, "param_ops_ulong" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ipmi_msghandler");

MODULE_ALIAS("acpi*:IPI0001:*");
MODULE_ALIAS("pci:v0000103Cd0000121Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i00*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i01*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i02*");

MODULE_INFO(srcversion, "2BDF55AA2268E790637B6F0");
