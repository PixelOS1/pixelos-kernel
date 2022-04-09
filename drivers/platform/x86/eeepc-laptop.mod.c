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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x7f0d6db9, "__pci_hp_register" },
	{ 0x497378b8, "pci_find_bus" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0x2c499467, "platform_device_put" },
	{ 0x8ad754d, "platform_device_del" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xb598f6be, "acpi_bus_get_status" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x5a724fb7, "pci_hp_deregister" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x1894f679, "pci_bus_add_device" },
	{ 0x45c5725f, "pci_bus_assign_resources" },
	{ 0x96f400c0, "pci_scan_single_device" },
	{ 0x2f27916d, "pci_stop_and_remove_bus_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x9852f12f, "pci_get_slot" },
	{ 0xf802070c, "pci_bus_read_config_dword" },
	{ 0xb96541d7, "acpi_get_pci_dev" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0xe2f05908, "backlight_force_update" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap,backlight,video,rfkill");

MODULE_ALIAS("acpi*:ASUS010:*");

MODULE_INFO(srcversion, "88CC56E7D328A3709F8867F");
