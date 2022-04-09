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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf906590d, "clk_get" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x353a2ab4, "is_acpi_data_node" },
	{ 0x6b13f9ba, "acpi_mdiobus_register" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xb82f5e92, "platform_get_irq_optional" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6d389c68, "devm_mdiobus_alloc_size" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy,acpi_mdio,mdio_devres");

MODULE_ALIAS("acpi*:MRVL0100:*");
MODULE_ALIAS("acpi*:MRVL0101:*");
MODULE_ALIAS("of:N*T*Cmarvell,orion-mdio");
MODULE_ALIAS("of:N*T*Cmarvell,orion-mdioC*");
MODULE_ALIAS("of:N*T*Cmarvell,xmdio");
MODULE_ALIAS("of:N*T*Cmarvell,xmdioC*");

MODULE_INFO(srcversion, "D0912BFDE19E1430AD80AA2");
