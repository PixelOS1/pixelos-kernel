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
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x754d539c, "strlen" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0xd87e4582, "led_classdev_notify_brightness_hw_changed" },
	{ 0x545401cb, "sparse_keymap_report_entry" },
	{ 0x4015f710, "sparse_keymap_entry_from_scancode" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,sparse-keymap");

MODULE_ALIAS("acpi*:LGEX0815:*");

MODULE_INFO(srcversion, "2C1633EF60CEA99471F96A1");
