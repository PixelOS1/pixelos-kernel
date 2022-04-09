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
	{ 0x60ed35b0, "proc_thermal_rfim_remove" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x5012a70, "pv_ops" },
	{ 0x98e82d4, "proc_thermal_rapl_remove" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x22829956, "int340x_thermal_zone_remove" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xe0ec4507, "proc_thermal_mbox_remove" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x322d8b8c, "proc_thermal_rfim_add" },
	{ 0x7408f66e, "sysfs_remove_file_ns" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2ff190e6, "int340x_thermal_zone_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x2e217185, "proc_thermal_mbox_add" },
	{ 0x7071700f, "proc_thermal_rapl_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x54eb34a1, "thermal_zone_device_update" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x2921e434, "sysfs_create_file_ns" },
	{ 0xa010ba68, "is_acpi_device_node" },
};

MODULE_INFO(depends, "processor_thermal_rfim,processor_thermal_rapl,int340x_thermal_zone,processor_thermal_mbox");


MODULE_INFO(srcversion, "0B76BE52712D7586B7CDF27");
