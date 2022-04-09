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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xbed6a279, "backlight_device_unregister" },
	{ 0xf96a7c5f, "pwm_free" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xb2a0ab91, "pwm_request" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf9cd2564, "gpiod_direction_output" },
	{ 0x74e8d2d1, "regulator_is_enabled" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0x8868fc02, "backlight_device_register" },
	{ 0x9a07b0e8, "devm_pwm_get" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0xc440c8d0, "pwm_apply_state" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "backlight");


MODULE_INFO(srcversion, "ABED95AB3ACFE0E5B05BF94");
