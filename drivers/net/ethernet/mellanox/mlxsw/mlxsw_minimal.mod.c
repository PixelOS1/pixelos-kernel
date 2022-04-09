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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x87c0c78, "mlxsw_core_port_clear" },
	{ 0x754d539c, "strlen" },
	{ 0x9eac5f0f, "mlxsw_env_get_module_power_mode" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xbfb7df3c, "mlxsw_core_driver_priv" },
	{ 0xbf791ad8, "mlxsw_core_driver_unregister" },
	{ 0x46e574d5, "mlxsw_core_port_init" },
	{ 0x30d72838, "mlxsw_env_get_module_eeprom_by_page" },
	{ 0xca34ccf, "mlxsw_core_max_ports" },
	{ 0xa66eb130, "mlxsw_env_module_port_map" },
	{ 0xda59b65, "free_netdev" },
	{ 0xe7c21e33, "mlxsw_env_module_port_up" },
	{ 0x133536b8, "register_netdev" },
	{ 0xcc0cfc49, "mlxsw_i2c_driver_unregister" },
	{ 0xd6a6735, "mlxsw_core_port_eth_set" },
	{ 0x10d3c264, "mlxsw_core_port_is_xm" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbe82d6cc, "mlxsw_env_get_module_info" },
	{ 0xcbab836f, "mlxsw_core_fw_rev_minor_subminor_validate" },
	{ 0xb376dd2d, "devlink_net" },
	{ 0xc34d8d3c, "mlxsw_core_driver_register" },
	{ 0x9ad3ae60, "mlxsw_core_port_devlink_port_get" },
	{ 0x7b0bfeec, "mlxsw_core_port_fini" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x86b8df23, "mlxsw_env_get_module_eeprom" },
	{ 0x715a43ce, "priv_to_devlink" },
	{ 0x92997ed8, "_printk" },
	{ 0xd2570592, "mlxsw_env_reset_module" },
	{ 0x51e0f9c, "mlxsw_i2c_driver_register" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf80ece70, "mlxsw_env_set_module_power_mode" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xa7765e88, "mlxsw_reg_query" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb39beef2, "mlxsw_env_module_port_down" },
	{ 0x96efb5d3, "mlxsw_env_module_port_unmap" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "mlxsw_core,mlxsw_i2c");

MODULE_ALIAS("i2c:mlxsw_minimal");

MODULE_INFO(srcversion, "60D61B96FF8EB04625AE1A1");
