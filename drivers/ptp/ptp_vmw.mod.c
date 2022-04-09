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
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0x92997ed8, "_printk" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xfd03a232, "ptp_clock_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:VMW0005:*");

MODULE_INFO(srcversion, "188B9501F71B9AD0C3834B4");
