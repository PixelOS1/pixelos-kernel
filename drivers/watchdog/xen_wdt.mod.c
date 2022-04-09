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
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xac1e1dd9, "devm_watchdog_register_device" },
	{ 0x2cc3d8f8, "watchdog_init_timeout" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7D3F309321E84C25CB7F8E1");
