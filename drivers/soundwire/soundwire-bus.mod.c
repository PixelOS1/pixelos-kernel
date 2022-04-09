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
	{ 0x5b7424d5, "bus_register" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x7549c36, "driver_register" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xe4345174, "single_open" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x9b02585d, "single_release" },
	{ 0xd349d253, "seq_printf" },
	{ 0x1598fb9d, "device_get_named_child_node" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94216657, "seq_read" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xdaf02d94, "device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x39ce92c9, "pm_generic_runtime_suspend" },
	{ 0x3a3fc050, "dev_pm_domain_detach" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x582a8a4a, "pm_generic_runtime_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbd508a26, "device_for_each_child" },
	{ 0x282d8810, "devm_device_add_group" },
	{ 0xcddf54df, "dev_pm_domain_attach" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x776c87fd, "device_unregister" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x2bd36e7c, "devm_device_add_groups" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FD21589E2D884B4CCEA6DC5");
