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
	{ 0xd5596d10, "device_remove_file" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x96f400c0, "pci_scan_single_device" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xe4345174, "single_open" },
	{ 0xbfe36436, "platform_profile_remove" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x2c998634, "battery_hook_unregister" },
	{ 0x65b4695, "wmi_get_acpi_device_uid" },
	{ 0x2f27916d, "pci_stop_and_remove_bus_device" },
	{ 0x9b02585d, "single_release" },
	{ 0x9852f12f, "pci_get_slot" },
	{ 0x9cab34a6, "rfkill_set_led_trigger_name" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0xd349d253, "seq_printf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x39e60e9d, "debugfs_create_x32" },
	{ 0xff282521, "rfkill_register" },
	{ 0x45c5725f, "pci_bus_assign_resources" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x3d10108, "battery_hook_register" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x7f0d6db9, "__pci_hp_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94216657, "seq_read" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5a724fb7, "pci_hp_deregister" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0x331337dc, "input_event" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x67927a0d, "platform_profile_notify" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x497378b8, "pci_find_bus" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xf802070c, "pci_bus_read_config_dword" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x11a6bdde, "__platform_create_bundle" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xd87e4582, "led_classdev_notify_brightness_hw_changed" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbc556315, "sysfs_notify" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x69acdf38, "memcpy" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x96848186, "scnprintf" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0xcac33cd4, "platform_profile_register" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xe2f05908, "backlight_force_update" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x1894f679, "pci_bus_add_device" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "rfkill,platform_profile,wmi,backlight,sparse-keymap,video");


MODULE_INFO(srcversion, "08EF28118CC0C0644AF0E37");
