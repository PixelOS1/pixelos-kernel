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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x9b02585d, "single_release" },
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0xbe687e88, "wake_up_all_idle_cpus" },
	{ 0x1100ae96, "rtc_alarm_irq_enable" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xf89301e9, "rtc_read_time" },
	{ 0x37169f79, "cpu_latency_qos_update_request" },
	{ 0x954407cf, "rtc_read_alarm" },
	{ 0x5a4550ff, "rtc_class_open" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xd349d253, "seq_printf" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xe4345174, "single_open" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:AMDI0005:*");
MODULE_ALIAS("acpi*:AMDI0006:*");
MODULE_ALIAS("acpi*:AMDI0007:*");
MODULE_ALIAS("acpi*:AMD0004:*");
MODULE_ALIAS("acpi*:AMD0005:*");

MODULE_INFO(srcversion, "55029D3564E653DB8B60A8A");
