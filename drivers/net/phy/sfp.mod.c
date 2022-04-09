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
	{ 0x9b02585d, "single_release" },
	{ 0x94216657, "seq_read" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x76135ea4, "sfp_register_socket" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0xeb048590, "mdio_i2c_alloc" },
	{ 0x4fb50855, "i2c_acpi_find_adapter_by_handle" },
	{ 0xc3e7495e, "__acpi_node_get_property_reference" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb6787346, "sfp_unregister_socket" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x58def6ca, "sfp_module_remove" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x536822e3, "sfp_module_insert" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xda320d31, "sfp_module_start" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x66b97421, "sfp_link_up" },
	{ 0x419e7efd, "sfp_module_stop" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6129fb93, "sfp_remove_phy" },
	{ 0x6b413c9b, "sfp_link_down" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xf2247574, "gpiod_direction_input" },
	{ 0xf9cd2564, "gpiod_direction_output" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xd349d253, "seq_printf" },
	{ 0xe4345174, "single_open" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc1e2234, "hwmon_device_register_with_info" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x37a0cba, "kfree" },
	{ 0xd449c07c, "i2c_put_adapter" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0xef1e6e10, "phy_device_free" },
	{ 0xc1004511, "phy_device_remove" },
	{ 0xeaa93a5b, "sfp_add_phy" },
	{ 0x99de9c60, "phy_device_register" },
	{ 0x3c1098a3, "get_phy_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy,mdio-i2c,i2c-core");

MODULE_ALIAS("of:N*T*Csff,sff");
MODULE_ALIAS("of:N*T*Csff,sffC*");
MODULE_ALIAS("of:N*T*Csff,sfp");
MODULE_ALIAS("of:N*T*Csff,sfpC*");

MODULE_INFO(srcversion, "5BDAEDD5654C6F09B688EB3");
