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
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xcac33cd4, "platform_profile_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x31d1e5a1, "device_add_groups" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x67927a0d, "platform_profile_notify" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xe2f05908, "backlight_force_update" },
	{ 0xcdce87c, "rfkill_set_hw_state_reason" },
	{ 0xbc556315, "sysfs_notify" },
	{ 0x4fdee897, "i8042_command" },
	{ 0xd87e4582, "led_classdev_notify_brightness_hw_changed" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xf727f0b0, "device_remove_groups" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xbfe36436, "platform_profile_remove" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd349d253, "seq_printf" },
	{ 0xe4345174, "single_open" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "backlight,rfkill,wmi,video,platform_profile,sparse-keymap");

MODULE_ALIAS("acpi*:VPC2004:*");

MODULE_INFO(srcversion, "C64B0BEDE8F0B903E793B51");
