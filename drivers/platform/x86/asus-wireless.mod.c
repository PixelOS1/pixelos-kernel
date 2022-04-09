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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xda096e40, "acpi_device_hid" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf0645b7d, "devm_led_classdev_unregister" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x331337dc, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ATK4001:*");
MODULE_ALIAS("acpi*:ATK4002:*");

MODULE_INFO(srcversion, "913FBDC88F43454A51F783C");
