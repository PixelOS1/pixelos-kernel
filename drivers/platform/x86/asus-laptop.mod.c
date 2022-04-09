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
	{ 0x73fec674, "param_ops_uint" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x327d7adf, "input_set_max_poll_interval" },
	{ 0x772559dd, "input_set_min_poll_interval" },
	{ 0xc1a92eef, "input_set_poll_interval" },
	{ 0x87645171, "input_setup_polling" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0x2c499467, "platform_device_put" },
	{ 0x8ad754d, "platform_device_del" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xb598f6be, "acpi_bus_get_status" },
	{ 0x5a921311, "strncmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x331337dc, "input_event" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0xe2f05908, "backlight_force_update" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap,backlight,video,rfkill");

MODULE_ALIAS("acpi*:ATK0100:*");
MODULE_ALIAS("acpi*:ATK0101:*");

MODULE_INFO(srcversion, "D5DCFA4A00781FD11FB7424");
