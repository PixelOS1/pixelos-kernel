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
	{ 0x23ea4d0b, "intel_pinctrl_resume_noirq" },
	{ 0x378ed156, "intel_pinctrl_suspend_noirq" },
	{ 0x5d2e6c78, "intel_pinctrl_probe_by_uid" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pinctrl-intel");

MODULE_ALIAS("acpi*:INT3452:*");
MODULE_ALIAS("acpi*:INT34D1:*");

MODULE_INFO(srcversion, "5DDE23B6A8343C50ED3B6E6");