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
	{ 0xfc4152fc, "ec_read" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xff282521, "rfkill_register" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0x8ad754d, "platform_device_del" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0x2c499467, "platform_device_put" },
};

MODULE_INFO(depends, "backlight,rfkill,video");

MODULE_ALIAS("dmi*:pn*OakTrailplatform*:");

MODULE_INFO(srcversion, "656A8DB014C1783256BF6F2");
