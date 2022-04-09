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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x92997ed8, "_printk" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x5012a70, "pv_ops" },
	{ 0xaaf50c56, "pci_bus_write_config_dword" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x63f835ba, "on_each_cpu_cond_mask" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x6e841389, "cpu_info" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xf802070c, "pci_bus_read_config_dword" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00001604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000141Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001574sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001534sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001584sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0518BF9BC525C5F28812431");
