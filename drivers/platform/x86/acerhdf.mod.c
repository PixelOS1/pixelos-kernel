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
	{ 0xc8a016aa, "param_ops_string" },
	{ 0xdfdd520f, "param_get_uint" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x40a58b3d, "thermal_zone_device_disable" },
	{ 0x7e9c3c56, "thermal_zone_device_enable" },
	{ 0xff241572, "thermal_zone_device_register" },
	{ 0x2c499467, "platform_device_put" },
	{ 0x4a7a7e28, "thermal_cooling_device_register" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf2b9144b, "param_set_uint" },
	{ 0x37c28f86, "thermal_zone_bind_cooling_device" },
	{ 0xe6bb95fa, "thermal_zone_unbind_cooling_device" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xb46f8f6b, "thermal_zone_device_unregister" },
	{ 0x25da57db, "thermal_cooling_device_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "25769A49196D488C460EA3F");
