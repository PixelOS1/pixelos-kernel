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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa9a70f33, "register_c_can_dev" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xfc57f91f, "alloc_c_can_dev" },
	{ 0xee09ed35, "devm_ioremap_resource" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x5ccdc9ab, "free_c_can_dev" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x951c8e02, "unregister_c_can_dev" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x4082779a, "c_can_power_down" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x23f7cf2a, "c_can_power_up" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "c_can");

MODULE_ALIAS("of:N*T*Cbosch,c_can");
MODULE_ALIAS("of:N*T*Cbosch,c_canC*");
MODULE_ALIAS("of:N*T*Cbosch,d_can");
MODULE_ALIAS("of:N*T*Cbosch,d_canC*");
MODULE_ALIAS("of:N*T*Cti,dra7-d_can");
MODULE_ALIAS("of:N*T*Cti,dra7-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am3352-d_can");
MODULE_ALIAS("of:N*T*Cti,am3352-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am4372-d_can");
MODULE_ALIAS("of:N*T*Cti,am4372-d_canC*");
MODULE_ALIAS("platform:c_can_platform");
MODULE_ALIAS("platform:c_can");
MODULE_ALIAS("platform:d_can");

MODULE_INFO(srcversion, "B959927DCAA3D55B7158CB5");
