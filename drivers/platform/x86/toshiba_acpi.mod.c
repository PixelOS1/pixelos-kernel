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
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x94216657, "seq_read" },
	{ 0x45a41106, "noop_llseek" },
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0x3c08c820, "proc_mkdir" },
	{ 0x77456e0a, "acpi_root_dir" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x56144833, "i8042_install_filter" },
	{ 0xff282521, "rfkill_register" },
	{ 0x350e1083, "proc_create_single_data" },
	{ 0x79037e4d, "proc_create_data" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x4740590, "iio_device_alloc" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xa164df89, "misc_register" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xcdce87c, "rfkill_set_hw_state_reason" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe4345174, "single_open" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd349d253, "seq_printf" },
	{ 0x45081703, "ec_get_handle" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x88ba3474, "i8042_remove_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x33c0c2e, "iio_device_free" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd87e4582, "led_classdev_notify_brightness_hw_changed" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xf52ebe9b, "sysfs_update_group" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rfkill,industrialio,backlight,video,sparse-keymap,wmi");

MODULE_ALIAS("acpi*:TOS6200:*");
MODULE_ALIAS("acpi*:TOS6207:*");
MODULE_ALIAS("acpi*:TOS6208:*");
MODULE_ALIAS("acpi*:TOS1900:*");

MODULE_INFO(srcversion, "2F83A9AC0ACD7B4A18B7D5F");
