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
	{ 0xbade6d7, "serio_interrupt" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x56144833, "i8042_install_filter" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x445c1620, "lis3lv02d_init_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xb82f5e92, "platform_get_irq_optional" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x9d4df5db, "lis3lv02d_remove_fs" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0xfa8f15bd, "lis3lv02d_joystick_disable" },
	{ 0x88ba3474, "i8042_remove_filter" },
	{ 0x9a84b063, "lis3lv02d_poweroff" },
	{ 0x9e8ae71c, "lis3lv02d_poweron" },
	{ 0x55b28e88, "lis3_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "lis3lv02d");

MODULE_ALIAS("acpi*:HPQ0004:*");
MODULE_ALIAS("acpi*:HPQ6000:*");
MODULE_ALIAS("acpi*:HPQ6007:*");

MODULE_INFO(srcversion, "C44EC63A734C25F797D3D13");
