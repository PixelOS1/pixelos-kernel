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
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x6604ef93, "debugfs_create_u32" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x2c499467, "platform_device_put" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x761527a1, "put_device" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x406c510c, "acpi_dev_get_first_match_dev" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0x4015f710, "sparse_keymap_entry_from_scancode" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xff282521, "rfkill_register" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0xcdce87c, "rfkill_set_hw_state_reason" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x331337dc, "input_event" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x1b8b95ad, "i8042_unlock_chip" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x17f341a0, "i8042_lock_chip" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,sparse-keymap,video,rfkill,backlight");


MODULE_INFO(srcversion, "83F062101AD7077391BA482");
