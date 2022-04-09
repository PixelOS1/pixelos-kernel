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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x8ad754d, "platform_device_del" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x2c499467, "platform_device_put" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x56470118, "__warn_printk" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4015f710, "sparse_keymap_entry_from_scancode" },
	{ 0x45ed2667, "devm_backlight_device_register" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xda096e40, "acpi_device_hid" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap,backlight,video");

MODULE_ALIAS("acpi*:FUJ02B1:*");
MODULE_ALIAS("acpi*:FUJ02E3:*");

MODULE_INFO(srcversion, "D06F1AB91DC08FB496AA131");
