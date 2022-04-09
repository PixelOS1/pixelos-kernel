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
	{ 0xee111615, "param_ops_int" },
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xb6cb556a, "_find_first_and_bit" },
	{ 0x92997ed8, "_printk" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x2c499467, "platform_device_put" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xbb35675b, "__bitmap_intersects" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x4507f4a8, "cpuhp_tasks_frozen" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x591c0306, "_dev_notice" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0x37a0cba, "kfree" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6e841389, "cpu_info" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C0*");

MODULE_INFO(srcversion, "2EEF410E99C236AB66961B3");
