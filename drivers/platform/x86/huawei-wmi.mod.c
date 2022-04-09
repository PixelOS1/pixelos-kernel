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
	{ 0xa13e8de6, "param_ops_bint" },
	{ 0x9b02585d, "single_release" },
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3d10108, "battery_hook_register" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x6019792c, "debugfs_create_x64" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0xce593c22, "ledtrig_audio_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x45081703, "ec_get_handle" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd349d253, "seq_printf" },
	{ 0x2c998634, "battery_hook_unregister" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0xe4345174, "single_open" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0x37a0cba, "kfree" },
	{ 0x545401cb, "sparse_keymap_report_entry" },
	{ 0x4015f710, "sparse_keymap_entry_from_scancode" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ledtrig-audio,wmi,sparse-keymap");

MODULE_ALIAS("wmi:59142400-C6A3-40fa-BADB-8A2652834100");
MODULE_ALIAS("wmi:ABBC0F5C-8EA1-11D1-A000-C90629100000");

MODULE_INFO(srcversion, "2AF4EE05786005086123406");
