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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0x5a9b22b7, "mfd_remove_devices" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0x5d9dfb8d, "mfd_add_devices" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x638be617, "regmap_add_irq_chip" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0xbeddd8bb, "regmap_write" },
};

MODULE_INFO(depends, "mfd-core");


MODULE_INFO(srcversion, "E558F4DA8D9F705A2BE0155");
