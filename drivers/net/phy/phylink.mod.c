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
	{ 0x129334ae, "sfp_parse_support" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xf0910075, "sfp_bus_del_upstream" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x538d073d, "phy_duplex_to_str" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xa4394e71, "phy_stop" },
	{ 0x6fd304a0, "phy_attach_direct" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x18e4f8aa, "swphy_read_reg" },
	{ 0x92d3e4a4, "phy_ethtool_ksettings_set" },
	{ 0x40a78094, "phy_ethtool_ksettings_get" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xa4a87e0d, "phy_ethtool_get_wol" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0x3bbf56e9, "phy_get_pause" },
	{ 0xc7dbf4ca, "phy_support_asym_pause" },
	{ 0x76356e7, "sfp_may_have_phy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0x5963d5f4, "fwnode_property_read_string" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb13e7fcf, "phy_ethtool_get_eee" },
	{ 0x2eae6516, "phy_set_asym_pause" },
	{ 0x9c5d0384, "fwnode_get_named_child_node" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xef1e6e10, "phy_device_free" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8e44823a, "sfp_select_interface" },
	{ 0xf4689d50, "linkmode_set_pause" },
	{ 0xcc2400bd, "phy_start" },
	{ 0x75dd0088, "fwnode_get_phy_node" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xccf52bc9, "sfp_upstream_start" },
	{ 0xae343176, "mdiobus_modify_changed" },
	{ 0xadf7a071, "sfp_bus_add_upstream" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0x2de60bfa, "mdiobus_modify" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0x8a62b81b, "sfp_upstream_stop" },
	{ 0xb3804c0c, "phy_speed_down" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1a7401c8, "netdev_printk" },
	{ 0xb9f6e14c, "phy_attached_info_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x7ae579c0, "phy_detach" },
	{ 0x5ffdbb96, "phy_init_eee" },
	{ 0xeb4380fe, "phy_request_interrupt" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6209f49, "phy_lookup_setting" },
	{ 0xd59a1587, "linkmode_resolve_pause" },
	{ 0x7d4972df, "fwnode_gpiod_get_index" },
	{ 0x4bfd9081, "phy_speed_up" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0x8a27e702, "phy_get_eee_err" },
	{ 0xe4b818c3, "phy_speed_to_str" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4031b7f, "sfp_parse_port" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x66374228, "fwnode_phy_find_device" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xe0630324, "phy_ethtool_set_wol" },
	{ 0x37a0cba, "kfree" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x6332ed4b, "phy_ethtool_set_eee" },
	{ 0x77e75be3, "sfp_bus_put" },
	{ 0x94c6ef8, "phy_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb2922cca, "gpiod_put" },
	{ 0x264eb05, "phy_restart_aneg" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0x3fb20a3e, "sfp_bus_find_fwnode" },
};

MODULE_INFO(depends, "libphy");


MODULE_INFO(srcversion, "61E76956B3ED24A783AB55C");
