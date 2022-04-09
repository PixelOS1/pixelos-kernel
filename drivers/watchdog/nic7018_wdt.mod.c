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
	{ 0x73fec674, "param_ops_uint" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd54e0fa0, "watchdog_register_device" },
	{ 0x2cc3d8f8, "watchdog_init_timeout" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x40715144, "watchdog_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:NIC7018:*");

MODULE_INFO(srcversion, "7FE32A8FF5CC829E096AAD5");
