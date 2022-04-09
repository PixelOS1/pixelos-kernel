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
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "backlight,sparse-keymap");

MODULE_ALIAS("acpi*:MAT0012:*");
MODULE_ALIAS("acpi*:MAT0013:*");
MODULE_ALIAS("acpi*:MAT0018:*");
MODULE_ALIAS("acpi*:MAT0019:*");

MODULE_INFO(srcversion, "BD5098718E575155201E8A8");
