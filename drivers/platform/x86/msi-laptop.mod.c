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
	{ 0xee111615, "param_ops_int" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x2c499467, "platform_device_put" },
	{ 0x8ad754d, "platform_device_del" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x88ba3474, "i8042_remove_filter" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x56144833, "i8042_install_filter" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xff282521, "rfkill_register" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xcdce87c, "rfkill_set_hw_state_reason" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xaa00fdc0, "ec_transaction" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "backlight,sparse-keymap,rfkill,video");


MODULE_INFO(srcversion, "4D84D2043F3CDE570BC874D");
