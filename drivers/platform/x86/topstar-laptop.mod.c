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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x2c499467, "platform_device_put" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap");

MODULE_ALIAS("acpi*:TPS0001:*");
MODULE_ALIAS("acpi*:TPSACPI01:*");

MODULE_INFO(srcversion, "16A5C2775E9AC0963E1D355");
